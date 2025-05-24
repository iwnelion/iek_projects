package com.example.caffeapp;

import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.TextView;
import android.widget.Toast;
import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;
import java.text.DecimalFormat;

public class MainActivity extends AppCompatActivity {
    private float price;
    private EditText name;
    private CheckBox choco;
    private CheckBox cream;
    private CheckBox espresso;
    private CheckBox freddo;
    private TextView order_text;
    private TextView quantity;
    private RadioButton black;
    private RadioButton medium;
    private RadioButton sweet;
    private static final int LONG_DELAY = 20000; // 20 seconds
    private DecimalFormat df;   //for decimal formatting of the price

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main),
                (v, insets) -> {
                    Insets systemBars =
                            insets.getInsets(WindowInsetsCompat.Type.systemBars());
                    v.setPadding(systemBars.left, systemBars.top, systemBars.right,
                            systemBars.bottom);
                    return insets;
                });
        name=findViewById(R.id.name);
        choco=findViewById(R.id.choco);
        cream=findViewById(R.id.cream);
        espresso=findViewById(R.id.espresso);
        freddo=findViewById(R.id.freddo);
        order_text=findViewById(R.id.order_text);
        quantity=findViewById(R.id.quantity);
        black=findViewById(R.id.black);
        medium=findViewById(R.id.medium);
        sweet=findViewById(R.id.sweet);
        df = new DecimalFormat("#.##");     //decimal format
    }
     public int order_size = 0;      //initializing to zero

    /****************ΔΙΑΧΕΙΡΙΣΗ EVENT ΚΟΥΜΠΙΩΝ ΕΠΙΛΟΓΗΣ***********************/
    public void order_clicked(View v) {
        if (!checkInput()) {    //if checkInput() returns false, the following conditions are checked and the appropriate message is displayed
            if(name.getText().toString().isEmpty()){            //empty name
                order_text.setText("Παρακαλώ εισάγετε όνομα");
                order_text.setVisibility(View.VISIBLE);
            }
            if(!choco.isChecked() && !freddo.isChecked() && !espresso.isChecked()){     //no drink selected
                order_text.setText("Δεν έχετε επιλέξει κάποιο ρόφημα!");
                order_text.setVisibility(View.VISIBLE);
            }
            //cannot select any kind of sugar with choco
            if(choco.isChecked() && (black.isChecked() || medium.isChecked() || sweet.isChecked())){
                order_text.setText("Η σοκολάτα δεν χρειάζεται ζάχαρη");
                order_text.setVisibility(View.VISIBLE);
                //set sugar radio buttons to unchecked
                black.setChecked(false);
                medium.setChecked(false);
                sweet.setChecked(false);
            }
            if(order_size==0){      //no order size
                Toast.makeText(MainActivity.this, "Δεν έχετε επιλέξει ποσότητα!", Toast.LENGTH_LONG).show();
            }
            //cannot select cream without having selected either espresso or freddo or both
            if(cream.isChecked()){
                if(!espresso.isChecked() && !freddo.isChecked()){
                    order_text.setText("Δεν μπορείτε να επιλέξετε κρέμα");
                    order_text.setVisibility(View.VISIBLE);
                }
            }
            //if either espresso or freddo but not choco are selected, user can't proceed without selecting sugar
            if((espresso.isChecked() || freddo.isChecked()) && !choco.isChecked() && (!black.isChecked() && !medium.isChecked() && !sweet.isChecked())) {
                order_text.setText("Παρακαλώ επιλέξτε ζάχαρη");
                order_text.setVisibility(View.VISIBLE);
            }
        }else{
            order_text.setVisibility(View.INVISIBLE);
        }
    }
    /****************ΔΙΑΧΕΙΡΙΣΗ EVENT ΚΟΥΜΠΙΩΝ ΕΠΙΛΟΓΗΣ***********************/

    /************ΔΙΑΧΕΙΡΙΣΗ EVENT ΠΡΟΣΘΗΚΗΣ ΠΟΣΟΤΗΤΑΣ***********************/
    public void plus_clicked(View v) {
        order_size++;   //increases the order size
        quantity.setText(String.valueOf(order_size));   //sets the displayed number to the order size value
        if (order_size > 0) {
            price = calculatePrice();
            quantity.setText(String.valueOf(order_size));
        } else {    //if the order size reached any value <=0, it's set as empty
            quantity.setText(String.valueOf(""));
            quantity.setVisibility(View.VISIBLE);
        }
    }
    /************ΔΙΑΧΕΙΡΙΣΗ EVENT ΠΡΟΣΘΗΚΗΣ ΠΟΣΟΤΗΤΑΣ***********************/

    /******************ΚΑΘΑΡΙΣΜΟΣ ΕΠΙΛΟΓΩΝ***********************************/
    public void clearChecks() {     //called in the end of sendOrder() if the order is successful
        name.setText("");
        choco.setChecked(false);
        cream.setChecked(false);
        espresso.setChecked(false);
        freddo.setChecked(false);
        black.setChecked(false);
        medium.setChecked(false);
        sweet.setChecked(false);
        order_size=0;
        quantity.setText("0");
    }
    /******************ΚΑΘΑΡΙΣΜΟΣ ΕΠΙΛΟΓΩΝ***********************************/
 /************ΔΙΑΧΕΙΡΙΣΗ EVENT ΜΕΙΩΣΗΣ ΠΟΣΟΤΗΤΑΣ***********************/
    public void minus_clicked(View v) {
        if (order_size > 0) {
            order_size--;       //decreases the order size
            price = calculatePrice();
            quantity.setText(String.valueOf(order_size));   //sets the displayed number to the order size value
        } else {
            quantity.setText(String.valueOf(""));       //if the order size reached any value <=0, it's set as emptyg
        }
        quantity.setVisibility(View.VISIBLE);
    }
    /************ΔΙΑΧΕΙΡΙΣΗ EVENT ΜΕΙΩΣΗΣ ΠΟΣΟΤΗΤΑΣ***********************/

    /************ΔΙΑΧΕΙΡΙΣΗ EVENT ΑΠΟΣΤΟΛΗΣ ΠΑΡΑΓΓΕΛΙΑΣ***********************/
    public void sendOrder(View v) {
        if (checkInput()) {
            calculatePrice();
            order_text.setVisibility(View.VISIBLE);
            order_text.setText("Η τιμή της παραγγελίας σας: " + df.format(price) + " Ευρώ");
            Toast.makeText(MainActivity.this, "Ευχαριστούμε!Εκτιμώμενος χρόνος 15 λεπτά!", Toast.LENGTH_LONG).show();
            new Handler().postDelayed(new Runnable() {      //order_text with the price disappears after 3 seconds of being displaying
                @Override
                public void run() {
                    order_text.setVisibility(View.INVISIBLE);
                }
            }, 3000);   //3 seconds

            clearChecks();
        }else{
            order_clicked(v);
        }
    }
    /************ΔΙΑΧΕΙΡΙΣΗ EVENT ΑΠΟΣΤΟΛΗΣ ΠΑΡΑΓΓΕΛΙΑΣ***********************/

    /************ΔΙΑΧΕΙΡΙΣΗ ΕΛΕΓΧΩΝ***********************/
    public boolean checkInput() {
     if(name.getText().toString().isEmpty()){   //empty name
         return false;
     }
     if(!choco.isChecked() && !freddo.isChecked() && !espresso.isChecked()){    //no drink selected
         return false;
     }
     //cannot select any kind of sugar with choco
     if(choco.isChecked() && (black.isChecked() || medium.isChecked() || sweet.isChecked())){
         return false;
     }
     if(order_size==0){     //no order size
         return false;
     }
     //cannot select cream without having selected either espresso or freddo
     if(cream.isChecked()) {
        if (!espresso.isChecked() && !freddo.isChecked()) {
            return false;
        }
     }
     //if either espresso or freddo but not choco are selected, user can't proceed without selecting sugar
     if((espresso.isChecked() || freddo.isChecked()) && !choco.isChecked() && (!black.isChecked() && !medium.isChecked() && !sweet.isChecked())) {
         return false;
     }
    //if none of the above conditions are met, the value of checkInput() is true and sendOrder() proceeds to be executed
     return true;
    }
    /************ΔΙΑΧΕΙΡΙΣΗ ΕΛΕΓΧΩΝ***********************/

    /****************ΥΠΟΛΟΓΙΣΜΟΣ ΤΙΜΗΣ******************************/
    public float calculatePrice(){
        price=0;
        if(espresso.isChecked()){
            price+=2.0f;
        }
        if(freddo.isChecked()){
            price+=2.0f;
        }
        if(choco.isChecked() && (espresso.isChecked() || freddo.isChecked())){
            price+=0.5f;    //price for choco as a topping of espresso or freddo
        }else if(choco.isChecked() && (!espresso.isChecked() || !freddo.isChecked())){
            price+=2.0f;    //price for just a choco drink
        }
        if(cream.isChecked()){
            price+=0.5f;
        }
        price*=order_size;  //final price depends on the size of the order

        return price;
    }
    /****************ΥΠΟΛΟΓΙΣΜΟΣ ΤΙΜΗΣ******************************/
}
