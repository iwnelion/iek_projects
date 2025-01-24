<?php
    if(isset($_COOKIE["visit_count"])){
        $c=$_COOKIE["visit_count"]+1;
        setcookie("visit_count",$c,time()+86400*30,"/");
        echo "<h1>this is your ".$c." visit!</h1>";
    }else{
        setcookie("visit_count",1,time()+86400*30,"/");
        echo "<h1>welcome! this is your first visit here!</h1>";
    }
?>
