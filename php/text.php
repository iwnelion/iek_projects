<?php
    $file=fopen("mytext.txt","w");
    if($file){
        fwrite($file,"hello php \n");
        fwrite($file,"this is a second line \n");
        fclose($file);
        echo "complete";
    }else{
        echo "file not found";
    }
?>
