<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>odd and even count!!</title>
    <style>
        td,table{
            border: 1px solid black;
            padding: 5px;
        }
    </style>
</head>
<body>
    <h2>euresi monon - zugon arithmon</h2>
    <?php
        for($i=0;$i<100;$i++){
            $evod[$i]=mt_rand(1,1000);
        }
        oddeven($evod);
        function oddeven($a){
            $evc=0;
            $odc=0;
            echo "<table>";
            for($i=0;$i<100;$i++){
                if($a[$i]%2==0){
                    $mess="zugos";
                    $evc++;
                }elseif($a[$i]%2==1){
                    $mess="monos";
                    $odc++;
                }else{
                    $mess="den uparxei arithmos";
                }
                echo "<tr><td>".$a[$i]."</td><td>".$mess."</td></tr>";
            }
            echo "monoi: ".$odc."<br>zugoi: ".$evc."<br>";
            if($odc>$evc){
                echo "oi monoi einai perissoteroi";
            }elseif($odc==$evc){
                echo "oi monoi kai oi zugoi einai isoi";
            }else{
                echo "oi zugoi einai perissoteroi";
            }
            echo "</table>";
        }
    ?>
</body>
</html>
