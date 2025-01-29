<?php
    $servername="localhost";
    $username="root";
    $password="";
    $dbname="my_db";

    $conn=new mysqli($servername,$username,$password,$dbname);
    if($conn->connect_error){
        die("connection failed: ".$conn->connect_error);
    }
    //create table
    //$conn->select_db("my_db");      //use this when you create DB at the same time
    $sql="CREATE TABLE users(
        id INT AUTO_INCREMENT PRIMARY KEY,
        username VARCHAR(50) NOT NULL,
        email VARCHAR(100) NOT NULL,
        reg_time TIMESTAMP DEFAULT CURRENT_TIMESTAMP)";

        if($conn->query($sql)==TRUE){
            echo "table users is successfully created";
        }else{
            echo "failed to create table: ".$conn->error;
        }
        //closing the connection
        $conn->close();
?>
