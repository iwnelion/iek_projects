<?php
if($_SERVER["REQUEST_METHOD"]=="POST"){
    $a=(int)$_POST["a"];
    $b=(int)$_POST["b"];
    $c=(int)$_POST["c"];

    if($a>$b && $a>$c){
        echo "a is the greatest";
    }elseif($b>$a && $b>$c){
        echo "b is the greatest";
    }else{
        echo "c is the greatest";
    }
}
?>
