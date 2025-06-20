package com.example.mysqliteproject;

public class Exam {
    private int id;      // Add the id field for the primary key
    private String recNo;
    private int grade;
    private int tryEx;

    // Constructor for creating an Exam object with an ID
    public Exam(int id, String recNo, int grade, int tryEx) {
        this.id = id;
        this.recNo = recNo;
        this.grade = grade;
        this.tryEx = tryEx;
    }

    // Constructor without ID (for when adding a new exam)
    public Exam(String recNo, int grade, int tryEx) {
        this.recNo = recNo;
        this.grade = grade;
        this.tryEx = tryEx;
    }

    // Getter and Setter for id
    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    // Getter and Setter for recNo
    public String getRecNo() {
        return recNo;
    }

    public void setRecNo(String recNo) {
        this.recNo = recNo;
    }

    // Getter and Setter for grade
    public int getGrade() {
        return grade;
    }

    public void setGrade(int grade) {
        this.grade = grade;
    }

    // Getter and Setter for tryEx
    public int getTryEx() {
        return tryEx;
    }

    public void setTryEx(int tryEx) {
        this.tryEx = tryEx;
    }
}
