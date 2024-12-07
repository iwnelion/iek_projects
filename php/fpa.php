<?php
if($_SERVER["REQUEST_METHOD"]=="POST"){
    $name=$_POST["name"];
    $at=$_POST["at"];
    $result=$at*1.24;

    echo "Product name: ".$name."<br>";
    echo "price wo tax: ".$at."<br>";
    echo "price with tax: ".$result."<br>";
}
