package com.example.mysqliteproject;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

import java.util.ArrayList;

public class SQLLiteDbHandler extends SQLiteOpenHelper {

    // Database Information
    private static final String DB_NAME = "examDatabase";  // Name of the database
    private static final int DB_VERSION = 1;               // Version of the database

    // Table name and columns
    private static final String TABLE_EXAMS = "exams";    // Table name
    private static final String COLUMN_ID = "id";
    private static final String COLUMN_RECNO = "recNo";  // Record Number (formerly name)
    private static final String COLUMN_GRADE = "grade";  // Grade (formerly score)
    private static final String COLUMN_TRYEX = "tryEx";  // TryEx (formerly tryEx)

    // SQL statement to create the table
    private static final String CREATE_TABLE_EXAMS = "CREATE TABLE " + TABLE_EXAMS + " (" +
            COLUMN_ID + " INTEGER PRIMARY KEY AUTOINCREMENT, " +
            COLUMN_RECNO + " TEXT, " +
            COLUMN_GRADE + " INTEGER, " +
            COLUMN_TRYEX + " INTEGER);";

    public SQLLiteDbHandler(Context context) {
        super(context, DB_NAME, null, DB_VERSION);
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        // Create table on database creation
        db.execSQL(CREATE_TABLE_EXAMS);
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        // Drop the existing table and create a new one (on upgrade)
        db.execSQL("DROP TABLE IF EXISTS " + TABLE_EXAMS);
        onCreate(db);
    }

    // Add a new exam record
    public void addExam(Exam exam) {
        SQLiteDatabase db = this.getWritableDatabase();  // Open database in write mode
        ContentValues values = new ContentValues();
        values.put(COLUMN_RECNO, exam.getRecNo());
        values.put(COLUMN_GRADE, exam.getGrade());
        values.put(COLUMN_TRYEX, exam.getTryEx());

        // Insert the record into the database
        db.insert(TABLE_EXAMS, null, values);
        db.close();
    }

    // New method: Create a new record in the database
    public void CreateNewRecord(String recNo, int grade) {
        // Default value for tryEx (you can change it based on your requirement)
        int tryEx = 1;  // You can change the logic here if needed
        Exam newExam = new Exam(recNo, grade, tryEx);  // Create a new Exam object
        addExam(newExam);  // Call the existing addExam method to insert into the database
    }

    // Fetch all exams from the database
    public ArrayList<Exam> getAllExams() {
        ArrayList<Exam> examList = new ArrayList<>();
        SQLiteDatabase db = this.getReadableDatabase();  // Open database in read mode
        Cursor cursor = db.query(TABLE_EXAMS, null, null, null, null, null, null);

        if (cursor != null) {
            if (cursor.moveToFirst()) {
                int columnRecNo = cursor.getColumnIndex(COLUMN_RECNO);
                int columnGrade = cursor.getColumnIndex(COLUMN_GRADE);
                int columnTryEx = cursor.getColumnIndex(COLUMN_TRYEX);

                // Check if any column index is invalid
                if (columnRecNo == -1 || columnGrade == -1 || columnTryEx == -1) {
                    // Handle error if column is not found
                    throw new IllegalStateException("Column not found in the database.");
                }

                // Loop through the cursor and extract the data
                do {
                    String recNo = cursor.getString(columnRecNo);  // RecNo instead of name
                    int grade = cursor.getInt(columnGrade);  // Grade instead of score
                    int tryEx = cursor.getInt(columnTryEx);  // TryEx instead of tryEx
                    examList.add(new Exam(recNo, grade, tryEx));  // Add the exam to the list
                } while (cursor.moveToNext());

                cursor.close();
            }
        }

        db.close();
        return examList;
    }

    // Fetch a specific exam by its ID
    public Exam getExamById(int id) {
        SQLiteDatabase db = this.getReadableDatabase();
        Cursor cursor = db.query(TABLE_EXAMS, null, COLUMN_ID + " = ?", new String[]{String.valueOf(id)}, null, null, null);

        if (cursor != null && cursor.moveToFirst()) {
            int columnRecNo = cursor.getColumnIndex(COLUMN_RECNO);
            int columnGrade = cursor.getColumnIndex(COLUMN_GRADE);
            int columnTryEx = cursor.getColumnIndex(COLUMN_TRYEX);

            if (columnRecNo == -1 || columnGrade == -1 || columnTryEx == -1) {
                // Handle error if column is not found
                cursor.close();
                db.close();
                throw new IllegalStateException("Column not found in the database.");
            }

            String recNo = cursor.getString(columnRecNo);
            int grade = cursor.getInt(columnGrade);
            int tryEx = cursor.getInt(columnTryEx);

            cursor.close();
            db.close();
            return new Exam(recNo, grade, tryEx);  // Return the exam object
        }

        db.close();
        return null;  // Return null if no exam is found
    }

    // Update an exam record
    public int updateExam(Exam exam) {
        SQLiteDatabase db = this.getWritableDatabase();
        ContentValues values = new ContentValues();
        values.put(COLUMN_RECNO, exam.getRecNo());
        values.put(COLUMN_GRADE, exam.getGrade());
        values.put(COLUMN_TRYEX, exam.getTryEx());

        // Update the record based on its ID
        return db.update(TABLE_EXAMS, values, COLUMN_ID + " = ?", new String[]{String.valueOf(exam.getId())});
    }

    // Delete an exam by its ID
    public void deleteExam(int id) {
        SQLiteDatabase db = this.getWritableDatabase();
        db.delete(TABLE_EXAMS, COLUMN_ID + " = ?", new String[]{String.valueOf(id)});
        db.close();
    }
}
