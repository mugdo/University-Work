<?php

session_start();

$url = 'http://lightoj.com/volume_submit.php';

$params = [
    'sub_problem'=> $_SESSION['subProblem'],
    'language' => $_SESSION['language'],
    'code' => $_SESSION["code"]
];

$ch = curl_init();

curl_setopt($ch, CURLOPT_URL, $url);
curl_setopt($ch, CURLOPT_HEADER, 0);
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true,);
curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($params));

curl_setopt($ch, CURLOPT_COOKIEFILE, 'cookie.txt');
curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');

$content = curl_exec($ch);

curl_close($ch);

//echo $content;

//redirect to result page
header('Location: result.php');