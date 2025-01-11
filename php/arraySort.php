<?php
    do{
        $r=rand(0,100);
        $arr[]=$r;
    }while(count($arr)!=10);
    foreach($arr as $x){
        echo $x." ";
    }
    sort($arr);
    echo "<br>after sorting:<br>";
    for ($i=0; $i < count($arr); $i++) { 
        echo $arr[$i]." ";
    }
?>
