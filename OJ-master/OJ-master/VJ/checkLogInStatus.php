<?php

    include("../simple_html_dom.php");

    $url = 'https://vjudge.net/user/checkLogInStatus';

    $ch = curl_init();

    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_HEADER, 0);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    //curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true,);
    curl_setopt($ch, CURLOPT_CUSTOMREQUEST, "POST");
    //curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));
    curl_setopt($ch, CURLOPT_HTTPHEADER, array(
        "Content-Type: application/x-www-form-urlencoded",
        "Content-Type: multipart/form-data; boundary=--------------------------064323827580445959420925"
    ));

    curl_setopt($ch, CURLOPT_COOKIEFILE, 'cookie.txt');
    curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');

    //$content = curl_exec($ch);
    $content = json_decode(curl_exec($ch));

    curl_close($ch);

    echo $content;

    $response = new simple_html_dom();
    $response -> load($content);

    echo "Hi<br>";
    echo "<pre>";
    var_dump($response);
    echo "<pre>";