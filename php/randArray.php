<?php
    do{
        $r=rand(0,100);
        $arr[]=$r;
    }while($r!=0);
    foreach($arr as $x){
        echo $x." ";
    }
?>
