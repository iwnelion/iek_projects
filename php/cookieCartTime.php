<h1>Storing time of pruduct adding</h1>
<form action="" method="post">
    enter product:
    <input type="text" name="product">
    <input type="submit" value="submit">
</form>
<?php
    if($_SERVER["REQUEST_METHOD"]=="POST" && $_POST["product"]!=""){
        $pro=$_POST["product"];
        $time=time();
        setcookie("cart_time",$time,time()+86400*7,"/");
        if(isset($_COOKIE["cart_time"])){
            echo "the product <b style='color:red'>".$pro."</b> has been added to your cart at: ".date("d-m-Y H:i:s",$_COOKIE["cart_time"]);
        }
    }else{
        echo "your cart is empty";
    }
?>
