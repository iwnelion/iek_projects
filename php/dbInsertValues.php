<?php
    $servername="localhost";
    $username="root";
    $password="";
    $dbname="my_db";

    $conn=new mysqli($servername,$username,$password,$dbname);
    if($conn->connect_error){
        die("connection failed: ".$conn->connect_error);
    }
    //insert data
    $sql="INSERT INTO users(username,email) VALUES 
    ('John Doe','john@example.com'),
    ('Jane Smith','jane@example.com')";
    if($conn->query($sql)===TRUE){
        echo "entries are successfully inserted";
    }else{
        echo "failed to insert data: ".$conn->error;
    }
    //closing connection
    $conn->close();
?>
