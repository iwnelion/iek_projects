<?php
    if($_SERVER["REQUEST_METHOD"]=="POST"){
        $name=$_POST["name"];
        $email=$_POST["email"];
        $message=$_POST["message"];

        echo "Name: ".htmlspecialchars($name)."<br>";
        echo "Email: ".htmlspecialchars($email)."<br>";
        echo "Message: ".htmlspecialchars($message)."<br>";
    }
?>
