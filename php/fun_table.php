<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>dynamic table</title>
    <style>
        td,table{
            border: 1px solid red;
            border-collapse: collapse;
        }
        td{
            padding: 10px;
        }
    </style>
</head>
<body>
    <h2>dynamic table N x M</h2>
    <?php
        if($_SERVER["REQUEST_METHOD"]=="POST"){
            $row=(int)$_POST["row"];
            $col=(int)$_POST["col"];
            dtable($row,$col);
        }
    ?>
    <form action="" method="post">
        rows: 
        <input type="number" name="row"><br>
        columns: 
        <input type="number" name="col"><br>
        <br>
        <input type="submit">
    </form>
    <?php
        function dtable($row,$col){
            $k=0;
            echo "<table>";
                for($i=0;$i<$row;$i++){
                    echo "<tr>";
                        for($j=0;$j<$col;$j++){
                            $k++;
                        echo "<td>data: ".$k."</td>";
                        }
                        echo "</tr>";
                }
                echo "</table>";
        }
    ?>
</body>
</html>
