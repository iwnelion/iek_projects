<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>artioi arithmoi</title>
</head>
<body>
    <?php
        for($i=0;$i<=100;$i++){
            if($i%2==1 && $i<=100){
                echo $i." ";
                $i++;
            }else{
                continue;
            }
        }

        echo "<br>";

        $count=0;
        for($i=0;$i<=100;$i++){
            if($i%2==1 && $i<=100 && $count<10){
                echo $i." ";
                $i++;
                $count++;
            }else{
                continue;
            }
        }
    ?>
</body>
</html>
