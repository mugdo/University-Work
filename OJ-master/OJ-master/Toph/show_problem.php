<?php

    session_start();

    //$url = 'https://toph.co/search?q='.$_SESSION["pName"]; //for searching
    $url = 'https://toph.co/p/'.$_SESSION["pName"]; //for direct problemshow

    $ch = curl_init();

    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_HEADER, 0);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true,);

    curl_setopt($ch, CURLOPT_COOKIEFILE, 'cookie.txt');
    curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');

    $content = curl_exec($ch);

    curl_close($ch);

    //echo $content;

?>

<html>
<head>
    <title>Show Problem</title>
</head>
<body>
    <h2>Submit Problem</h2>

    <a href="submit.php">Submit Page</a>    
    <?php echo $content?>
</body>
</html>