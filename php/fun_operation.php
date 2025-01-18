<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>calc</title>
</head>
<body>
    <?php
        $apot="";
        if($_SERVER["REQUEST_METHOD"]=="POST"){
            $a=(float)$_POST["num1"];
            $b=(float)$_POST["num2"];

            if(isset($_POST["multi"])){
                $apot=multi($a,$b);
            }
            elseif(isset($_POST["div"])){
                $apot=div($a,$b);
            }
            elseif(isset($_POST["add"])){
                $apot=add($a,$b);
            }
            elseif(isset($_POST["sub"])){
                $apot=sub($a,$b);
            }
        }
    ?>
    <form action="" method="post">
        a: 
        <input type="number" name="num1"><br>
        b: 
        <input type="number" name="num2"><br>
        epilekste praksi:<br>
        <button type="submit" name="multi">pollaplasiasmo</button>
        <button type="submit" name="div">diairesi</button>
        <button type="submit" name="add">prosthesi</button>
        <button type="submit" name="sub">afairesi</button><br><br>
        apotelesma:
        <input type="text" name="apot" value="<?php echo $apot;?>"><br>
    </form>
</body>
</html>
<?php
    function multi($a,$b){
        $apot=$a*$b;
        return $apot;
    }
    function div($a,$b){
        if($b!=0){
            $apot=$a/$b;
        }else{
            $apot="diairesi me 0";
        }
        return $apot;
    }
    function add($a,$b){
        $apot=$a+$b;
        return $apot;
    }
    function sub($a,$b){
        $apot=$a-$b;
        return $apot;
    }
?>
