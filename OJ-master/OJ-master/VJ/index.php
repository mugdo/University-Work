<?php

    $url = 'https://www.facebook.com';

    $ch = curl_init();

    curl_setopt($ch, CURLOPT_URL, $url);
    // curl_setopt($ch, CURLOPT_HEADER, 0);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true);
    // curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
    // curl_setopt($ch, CURLOPT_CUSTOMREQUEST, "GET");

    // curl_setopt($ch, CURLOPT_COOKIEFILE, 'cookie.txt');
    // curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');

    $response = curl_exec($ch);

    curl_close($ch);

    echo $response;
?>