package com.example.mysqliteproject;


import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.RadioButton;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;

public class MainActivity extends AppCompatActivity {

    public static final String RECORD_ID = "id";
    public static final String RECORD_NAME = "name";
    public static final String RECORD_QUALIFICATION = "qualification";
    private int  userAnswer;
    private int[] grade = new int[9];
    boolean isDone;
    private int counter=0;
    private SQLLiteDbHandler sqlLiteDbHandler;

    private static final Map<Integer, Integer> rMap= new HashMap<>();
    static{
        rMap.put(R.id.right_checkbox1,2);
        rMap.put(R.id.right_checkbox2,2);
        rMap.put(R.id.right_checkbox3,2);
        rMap.put(R.id.right_checkbox4,2);
/*
        rMap.put(R.id.wrong2_checkbox1,0);
        rMap.put(R.id.wrong1_checkbox1,0);
        rMap.put(R.id.wrong3_checkbox1,0);
        rMap.put(R.id.wrong1_checkbox2,0);
        rMap.put(R.id.wrong4_checkbox2,0);
        rMap.put(R.id.wrong3_checkbox2,0);
        rMap.put(R.id.wrong1_checkbox3,0);
        rMap.put(R.id.wrong4_checkbox3,0);
        rMap.put(R.id.wrong3_checkbox3,0);

        rMap.put(R.id.wrong1_checkbox4,0);
        rMap.put(R.id.wrong2_checkbox4,0);
        rMap.put(R.id.wrong3_checkbox4,0);
     */



    }


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        sqlLiteDbHandler =new SQLLiteDbHandler(MainActivity.this);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.activity_main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });
    }


    public void onRadioButtonClicked(View view) {

        int localGrade=0;
        RadioButton r1 = (RadioButton) findViewById(R.id.right_checkbox1);
        RadioButton r2 = (RadioButton) findViewById(R.id.right_checkbox2);
        RadioButton r3 = (RadioButton) findViewById(R.id.right_checkbox3);
        RadioButton r4 = (RadioButton) findViewById(R.id.right_checkbox4);
//*************************************//



        List<Integer> gradeList = new ArrayList<>();
        RadioButton radioGroup = (RadioButton) findViewById(view.getId());


        int id = radioGroup.getId();
        System.out.println(id);
        // boolean checked = ((RadioButton) view).isChecked();
//        gradeList = rMap.entrySet().stream()
//                .filter(e -> e.getKey().equals(id)).map(Map.Entry::getValue).collect(Collectors.toList());
        for (Map.Entry<Integer, Integer> entry : rMap.entrySet()) {
            if (entry.getKey().equals(id)) {
                gradeList.add(entry.getValue());
            }
        }

        if (!gradeList.isEmpty()) {
            localGrade = gradeList.get(0);
        }
        if (r1.isChecked()  ||r2.isChecked() ||r3.isChecked() ||r4.isChecked()  ){
            if(r1.getId()== view.getId())
                grade[0] = localGrade;
        }
        if(   r2.getId()== view.getId()){
            grade[1] = localGrade;
        }
        if(r3.getId()== view.getId()){
            grade[2] = localGrade;
        }
        if(r4.getId()== view.getId()) {
            grade[3]=localGrade;
        }






    }

    public void alert(int userAnswer, String recNo) {
        DialogInterface.OnClickListener dialoOnClickListener =new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                switch (which){
                    case  DialogInterface.BUTTON_POSITIVE:
                        saveValues(recNo);

                        break;

                    case  DialogInterface.BUTTON_NEGATIVE:
                        break;
                }
            }
        };


        new AlertDialog.Builder(this)
                .setTitle("Επιβεβαίωση Υποβολής")
                .setMessage("H Βαθμολογία σας ειναι:" + userAnswer + ".Να καταχωρηθεί;")

                // Specifying a listener allows you to take an action before dismissing the dialog.
                // The dialog is automatically dismissed when a dialog button is clicked.
                .setNegativeButton("Ακύρωση", dialoOnClickListener)
                .setPositiveButton("Επιβεβαίωση", dialoOnClickListener).show();

    }
    public void submit(View  view) {



        userAnswer = 0;
        EditText ediTextRecNo = (EditText) findViewById(R.id.plain_textam_input);
        String recNo = String.valueOf(ediTextRecNo.getText().toString().trim());
        // ediTextRecNo.setText(getIntent().getStringExtra(RECORD_NAME));
        EditText ediText = (EditText) findViewById(R.id.plain_text_input);
        String editTextString = ediText.getText().toString().trim();
        // editText.setText(String.valueOf(getIntent().getIntExtra(RECORD_QUALIFICATION, 0)));
        System.out.println(editTextString);

        if (editTextString != null) {


            if (editTextString.equals("edit_message")) {
                grade[5] = 2;
            } else {
                grade[5] = 0;
            }
        }
        else{
            grade[5] = 0;
        }


        for (int i = 0; i < grade.length; i++) {
            userAnswer=userAnswer+grade[i];
        }
        alert(userAnswer, recNo);


    }
    public void saveValues(String recNo)
    {
        System.out.println("uservalue"+userAnswer);
/*
        tableAdapter  = new SQLLiteDbHandler(this);
        tableAdapter.Open();
        tableAdapter.CreateNewRecord(recNo, userAnswer);
        finish();
        */
        sqlLiteDbHandler= new SQLLiteDbHandler(this);

        sqlLiteDbHandler.CreateNewRecord(recNo,userAnswer);
        finish();
        //startActivity(new Intent(MainActivity.this,MainActivity.class));
        Intent tableIntent = new Intent(MainActivity.this, TableRecords.class);
        startActivity(tableIntent);
        //Toast.makeText(this,"Σας ευχαριστούμε η βαθμολογία σας καταχωρηθηκε.",Toast.LENGTH_LONG);

    }


}