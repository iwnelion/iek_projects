<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>koritsia agoria</title>
</head>
<body>
    <?php
        $koritsia=99;
        $agoria=1;
        $sum=$koritsia+$agoria;
        $countK=($koritsia/$sum)*100;
        $countA=($agoria/$sum)*100;
        echo "koritsia: $countK% <br> agoria: $countA%";
        // koritsia: 99%
        // agoria: 1%
    ?>
</body>
</html>
