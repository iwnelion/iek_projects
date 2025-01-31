<?php
    $file = "wab.txt";
    if (file_exists($file)) {
     if (unlink($file)) {
     echo "'$file' is successfully deleted";
     } else {
     echo "failed to delete '$file'";
     }
    } else {
     echo "'$file' doesn't exist";
    }
?>
