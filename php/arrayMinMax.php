<?php
    do{
        $r=rand(-100,100);
        $arr[]=$r;
    }while(count($arr)!=10);
    foreach($arr as $x){
        echo $x."    ";
    }
    echo "<br>min: ".min($arr)."<br> max: ".max($arr);
?>
