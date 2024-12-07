<?php
if($_SERVER["REQUEST_METHOD"]=="GET"){
    $username=$_GET["user"];
    $password=$_GET["pass"];

    echo "username: ".htmlspecialchars($username)."<br>";
    echo "password: ".htmlspecialchars($password)."<br>";
}
?>
