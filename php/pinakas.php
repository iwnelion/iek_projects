<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>pinakas pollaplasiasmou</title>
</head>
<body>
    <?php
        echo "<table border=2 width=70%>";
        for($i=1;$i<=9;$i++){
            echo "<tr>";
            echo "<td>$i</td>";
            for($j=2;$j<=9;$j++){
                echo "<br>";
                echo "<td>$i * $j = ".$i*$j."</td>";
            }
            echo "</tr>";
        }
        echo "</table>";
    ?>
</body>
</html>
