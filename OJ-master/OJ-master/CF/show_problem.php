<?php

    session_start();

    $url = 'https://codeforces.com/problemset/problem/'.$_SESSION["pNum1"].'/'.$_SESSION["pNum2"];

    $ch = curl_init();

    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_HEADER, 0);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true,);

    curl_setopt($ch, CURLOPT_COOKIEFILE, 'cookie.txt');
    curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');

    $Content = curl_exec($ch);
    
    curl_close($ch);
?>

<html>
    <head>
        <title>Problem</title>
    </head>
    <body>
        <a href="submit.php">Submit</a>
        <?php echo $Content; ?>
    </body>
</html>