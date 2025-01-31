<?php
    if(file_exists("wab.txt")){
    readfile("wab.txt");
    }else{
    echo "couldn't find the file";
    }
?>
