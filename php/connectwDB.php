<?php
    $servername="localhost";
    $username="root";
    $password="";
    $conn=new mysqli($servername,$username,$password);
    if($conn->connect_error){
        die("connection error: ".$conn->connect_error);
    }
    //DB name to be created
    $dbname="my_db";
    $sql="CREATE DATABASE my_db";
    if($conn->query($sql)==TRUE){
        echo "database '$dbname' created successfully";
    }else{
        echo "error creating database: ".$conn->error;
    }
    //closing the connection
    $conn->close();
?>
