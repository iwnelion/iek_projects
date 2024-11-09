<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>testing string variables (and more)</title>
</head>
<body>
    <?php
        $a="jo";
        $b="b";
        echo '$a';      //$a
        echo "<br>";
        echo "$b";      //b
        echo "<br>my name is $a";   //my name is jo
        echo "<br>my \"name\"<br><br>";     //my "name"

        echo "\$a : $a <br>";   //$a : jo
        echo "$a : $a <br>";    //jo : jo
        echo '\$a : $a <br>';   //\$a : $a
        echo '$a : $a <br>';    //$a : $a
        echo "<br>";

        //$flComma=1,23;                    !won't run bc there's a comma
        //echo "<br> comma: $flComma <br>";
        $flStop=3.21;
        echo "float w stop: $flStop <br><br>";

        $myInt=66;
        var_dump($myInt);   //int(66)
        echo "<br>";
        $myStr="66";
        var_dump($myStr);   //string(2) "66"
        echo "<br>";

        $isCat=true;
        var_dump($isCat);   //bool(true)
        echo "<br><br>";

        $top3=array("max","lando","charles","","sainz");
        var_dump($top3);
        //array(5) { [0]=> string(3) "max" [1]=> string(5) "lando" [2]=> string(7) "charles" [3]=> string(0) "" [4]=> string(5) "sainz" }
        echo "<br><br>";

        $myNull=null;
        var_dump($myNull);  //NULL
        echo "<br>";

        $sayHello="Hello";
        echo strlen($sayHello);     //5
        echo "<br>";

        $plsCountMyWords="he wants to push me, i push him back";
        echo str_word_count($plsCountMyWords);  //9
        echo "<br>";
        $plsInGreek="ελληνικο κειμενο";
        echo str_word_count($plsInGreek);       //0 !it doesn't work in greek
        echo "<br>";

        $palindrome="bob";
        echo strrev($palindrome);   //bob
        echo "<br>";
        $nonPalindrome="johnny";
        echo strrev($nonPalindrome);  //ynnohj
        echo "<br>";

        $highPerformanceAthlete="kikiki ra";
        echo strpos("$highPerformanceAthlete", "ra");   //7
        echo "<br>";

        $justaWhat="just an incident";
        echo str_replace("incident", "inCHident", $justaWhat);  //just an inCHident
                        //word to replace, new word, source
        echo "<br>";

        $anInt=17;
        echo is_int($anInt);    //1
        echo "<br>";
        $notanInt=1.11;
        echo is_int($notanInt); //doesn't print anything :(
        echo var_dump(is_int($anInt));  //bool(true)  (:different result than just is_int())
    ?>
</body>
</html>
