package com.example.mysqliteproject;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.util.Log;
import android.widget.ListView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import java.util.ArrayList;

public class TableRecords extends AppCompatActivity {

    private ArrayList<Exam> examModalArrayList;  // List to hold exam records
    private SQLLiteDbHandler sqlLiteDbHandler;   // Database handler
    private CustomAdapter customAdapter;          // Custom adapter for RecyclerView
    private RecyclerView examRV;                 // RecyclerView to display the exam records

    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.exam_list);  // Assuming this layout has a RecyclerView or ListView

        // Initialize views
        examRV = findViewById(R.id.recycler_view);  // Assuming this is the correct ID in your layout

        // Initialize your database handler
        sqlLiteDbHandler = new SQLLiteDbHandler(this);

        // Fetch data from the database
        examModalArrayList = sqlLiteDbHandler.getAllExams();

        // Log the size of the list to verify if data is being fetched
        if (examModalArrayList != null) {
            Log.d("TableRecords", "Fetched " + examModalArrayList.size() + " records.");
        } else {
            Log.d("TableRecords", "No records found in database.");
        }

        // Check if the list is empty or not
        if (examModalArrayList != null && !examModalArrayList.isEmpty()) {
            customAdapter = new CustomAdapter(this, examModalArrayList);  // Pass context and data
            examRV.setLayoutManager(new LinearLayoutManager(this));  // Use LinearLayoutManager
            examRV.setAdapter(customAdapter);  // Set the adapter to the RecyclerView
        } else {
            Toast.makeText(this, "No records found", Toast.LENGTH_SHORT).show();
        }
    }

}
