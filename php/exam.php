<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Βαθμοί</title>
</head>
<body>
    <form action="" method="post">
        Δώσε όνομα:
        <input type="text" name="onoma"><br>

        Δώσε επώνυμο:
        <input type="text" name="eponimo"><br>

        Δώσε βαθμό προόδου: 
        <input type="number" name="proodos"><br>

        Δώσε βαθμό εργασίας: 
        <input type="number" name="ergasia"><br>

        Δώσε βαθμό τελικής εξέτασης: 
        <input type="number" name="teliki"><br>

        <button type="submit">Υποβολή</button>
    </form>
</body>
<?php
    if($_SERVER["REQUEST_METHOD"]=="POST"){
        $onoma=$_POST["onoma"];
        $eponimo=$_POST["eponimo"];
        $proodos=$_POST["proodos"];
        $ergasia=$_POST["ergasia"];
        $teliki=$_POST["teliki"];

        if($onoma=="" || $eponimo==""){
            echo "Κενό όνομα ή επώνυμο";
        }
        elseif($proodos>10 || $ergasia>10 || $teliki>10 || $proodos<0 || $ergasia<0 || $teliki<0){
            echo "Λάθος είσοδος βαθμών";
        }
        elseif($proodos<=10 || $ergasia<=10 || $teliki<=10 || $proodos >0 || $ergasia>0 || $teliki>0){
            $x=(($proodos*0.3)+($ergasia*0.1)+($teliki*0.6));
            if($x>=5){
                echo "Ο σπουδαστής $onoma $eponimo έχει Tελικό Bαθμό: $x και είναι \"ΕΠΙΤΥΧΩΝ\"";
            }elseif($x<5){
                echo "Ο σπουδαστής $onoma $eponimo έχει Tελικό Bαθμό: $x και είναι \"ΑΠΟΤΥΧΩΝ\"";
            }
        }
    }
?>
</html>
