<?php
    //create cookie
    setcookie("user","jo",time()+(30),"/");
    echo "cookie is created";

    //reading cookie
    if(isset($_COOKIE["user"])){
        echo "<br>cookie: ".$_COOKIE["user"];
    }else{
        echo "<br>cookie user is not set";
    }
?>
