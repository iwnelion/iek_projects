<?php
if($_SERVER["REQUEST_METHOD"]=="POST"){
    $a=$_POST["a"];
    $b=$_POST["b"];
    $result=-$b/$a;
    if($b==0){
        echo "invalid input";
    }else{
        echo "result: ".$result;
    }
}
?>
