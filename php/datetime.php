<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>find today's date and time</title>
</head>
<body>
    <h1>find today's date and time</h1>
    <h2>today it is: 
        <?php
            echo date('l, d F Y');
        ?>
    </h2>
    <h2>the time is: 
        <?php
            echo date('H:i:s');
        ?>
    </h2>
</body>
</html>
