package com.example.mysqliteproject;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.recyclerview.widget.RecyclerView;

import java.util.ArrayList;

public class CustomAdapter extends RecyclerView.Adapter<CustomAdapter.ViewHolder> {

    private ArrayList<Exam> examModalArrayList;
    private Context context;

    // Constructor to initialize context and data
    public CustomAdapter(Context context, ArrayList<Exam> exams) {
        this.context = context;
        this.examModalArrayList = exams;
    }

    // ViewHolder class to hold the views for each item
    public static class ViewHolder extends RecyclerView.ViewHolder {
        TextView examField1, examField2, examField3;

        public ViewHolder(View itemView) {
            super(itemView);
            examField1 = itemView.findViewById(R.id.edit2);    // recNo
            examField2 = itemView.findViewById(R.id.essay);    // tryEx
            examField3 = itemView.findViewById(R.id.performance); // grade
        }
    }

    // Create and return the ViewHolder
    @Override
    public ViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        // Inflate the list_item layout and return the ViewHolder
        View view = LayoutInflater.from(context).inflate(R.layout.list_item, parent, false);
        return new ViewHolder(view);
    }

    // Bind data to the views inside the ViewHolder
    @Override
    public void onBindViewHolder(ViewHolder holder, int position) {
        Exam currentExam = examModalArrayList.get(position);
        holder.examField1.setText(currentExam.getRecNo());  // Set recNo
        holder.examField2.setText(String.valueOf(currentExam.getTryEx() + 1));  // Set tryEx (incremented by 1)
        holder.examField3.setText(String.valueOf(currentExam.getGrade()));  // Set grade
    }

    // Return the size of the list (number of items in the list)
    @Override
    public int getItemCount() {
        return examModalArrayList.size();
    }
}
