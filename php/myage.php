<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>your age</title>
</head>
<body>
    <?php
        $day=1;
        $month=7;
        $year=1978;
    ?>
    <h2>day of birth: 
        <?php
            echo $day;
        ?>
    </h2>
    <h2>month of birth: 
        <?php
            echo $month;
        ?>
    </h2>
    <h2>year of birth: 
        <?php
            echo $year;
        ?>
    </h2>
    <?php
        $birthdate_unix=mktime(0,0,0,$month,$day,$year);
        $now_unix=time();
        $age_secs=$now_unix-$birthdate_unix;
        $age_years=floor($age_secs/(365*24*60*60));
        echo "<h2>your age is $age_years</h2>";
    ?>
</body>
</html>
