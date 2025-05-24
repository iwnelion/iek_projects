package com.example.cointoss;

import android.graphics.Color;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import java.util.Random;

public class MainActivity extends AppCompatActivity {

    private ImageView image;
    private Button btn;
    private TextView rslt;
    private TextView cntr;
    private Random rand=new Random();
    private RelativeLayout my_rel_lay;
    private int headCount=0;
    private int tailsCount=0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);

        image=findViewById(R.id.img);
        btn=findViewById(R.id.btn);
        rslt=findViewById(R.id.result);
        cntr=findViewById(R.id.counter);
        my_rel_lay=findViewById(R.id.rel_lay);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                //random is initialized to a random number in the range of 1-10 (that's why +1 is added)
                int random=rand.nextInt(10)+1;
                if(random%2==0){        //if the random number is even, the result is heads
                    image.setImageResource(R.drawable.head);    //sets the imageView to heads image
                    image.setVisibility(View.VISIBLE);          //toggles the visibility of the imageView to visible
                    headCount++;                                //increments the heads counter
                    rslt.setText("Βγήκε Κορώνα!");              //updates the result textView
                    my_rel_lay.setBackgroundColor(Color.parseColor("#FFFF66")); //changes the background to yellow
                }else{                  //in any other case (the random number is odd), it's tails
                    image.setImageResource(R.drawable.tails);   //sets the imageView to tails image
                    image.setVisibility(View.VISIBLE);          //toggles the visibility of the imageView to visible
                    tailsCount++;                               //increments the tails counter
                    rslt.setText("Βγήκαν Γράμματα!");           //updates the result textView
                    my_rel_lay.setBackgroundColor(Color.parseColor("#99CCFF")); //changes the background to blue
                }
                cntr.setText(String.format("Κορώνες: "+headCount+"\nΓράμματα: "+tailsCount));   //updates the counters textView
            }
        });

    }
}