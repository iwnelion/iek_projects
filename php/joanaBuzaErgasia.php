<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Αποτέλεσμα παραγγελίας</title>
    <style>
        body{
            background-color:rgb(252, 251, 233);
            font-family: 'Courier New', Courier, monospace;
        }
        table, td, th{
            border: 1px solid black;
            border-collapse: collapse;
            padding: 10px;
        }
        input{
            padding: 3px 5px;
            width: 100px;
        }
        button{
            background-color:rgb(241, 147, 85);
            padding: 10px;
        }
        footer{
            text-align: center;
        }
    </style>
</head>
<body>
    <h1>Legit Computer Store</h1>
    <h2>Αποτέλεσμα Παραγγελίας</h2>
    
    <?php
    if($_SERVER["REQUEST_METHOD"]=="POST"){
        //product quantity
        $mouse=isset($_POST["mouse"])? (int)$_POST["mouse"] : 0;
        $keyboard=isset($_POST["keyboard"])? (int)$_POST["keyboard"] : 0;
        $speakers=isset($_POST["speakers"])? (int)$_POST["speakers"] : 0;

        //negative or all zeros control
        if(($mouse==0 && $keyboard==0 && $speakers==0) || ($mouse<0 || $keyboard<0 || $speakers<0)){
            echo "<p><i>Μη έγκυρη εισαγωγή ποσότητας. Εισάγετε τουλάχιστον μία ποσότητα μεγαλύτερη του 0.</i></p>";
            echo "<a href=\"joanaBuzaErgasia.html\"><button>Φόρμα Παραγγελίας</button></a>";
        }elseif($mouse>0 || $keyboard>0 || $speakers>0){
            //prices
            $mousePrice=10;
            $keyboardPrice=30;
            $speakersPrice=20;

            //final price per product
            $mouseFinal=$mouse*$mousePrice;
            $keyboardFinal=$keyboard*$keyboardPrice;
            $speakersFinal=$speakers*$speakersPrice;

            //price sum
            $sum=$mouseFinal+$keyboardFinal+$speakersFinal;

            //result display
            echo "<table>
                    <br>
                    <caption>Αποτελέσματα Παραγγελίας</caption>
                    <tr>
                        <th>Υλικό</th>
                        <th>Ποσότητα</th>
                        <th>Συνολική τιμή (&#8364;)</th>
                    </tr>
                    <tr>
                        <td>Ποντίκι</td>
                        <td>".$mouse."</td>
                        <td>".$mouseFinal."</td>
                    </tr>
                    <tr>
                        <td>Πληκτρολόγιο</td>
                        <td>".$keyboard."</td>
                        <td>".$keyboardFinal."</td>
                    </tr>
                    <tr>
                        <td>Ηχεία</td>
                        <td>".$speakers."</td>
                        <td>".$speakersFinal."</td>
                    </tr>";
            echo "</table>";
            echo "<br>Συνολογκό κόστος (&#8364;): ".$sum."<br>";
        }
    }
?>

    <hr>
    <footer>
        <small>Legit Computer Store &copy;</small><br>
        <small>email: legitstore@info.com</small>
    </footer>
</body>
</html>
