<?php
    $file=fopen("wab.txt","w"); //opening to write
    if($file){
        echo "file successfully opened";
        fclose($file); //closing file
    }else{
        echo "failed to open the file";
}?>
