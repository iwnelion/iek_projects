<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>protobathmia eksisosi</title>
</head>
<body>
    <h2>upologismos protobathmias eksisosis aX+b=0</h2>
    <?php
        if($_SERVER["REQUEST_METHOD"]=="POST"){
            $a=(float)$_POST["numa"];
            $b=(float)$_POST["numb"];
            $z=element($a,$b);
        }else{$z="";}
    ?>
    <form action="" method="post">
        a: 
        <input type="number" name="numa"><br>
        b: 
        <input type="number" name="numb"><br>
        apotelesma: 
        <input type="text" name="apot" style="width:300px" value="<?php echo $z;?>">
        <input type="submit">
    </form>
</body>
</html>
<?php
    function element($x,$y){
        if($x!=0){
            $apot=-$y/$x;
        }else{
            $apot="adunati eksisosi, diairesi me to 0";
        }
        return $apot;
    }
?>
