<?php

session_start();

$url = 'https://toph.co/api/problems/5be6911043ca9d0001941344/submissions';

$params = [
    'languageId' => $_SESSION['language'],
    'source' => $_FILES
];

print_r($_FILES);
 echo $_SESSION['language']."<br>";
 echo "source_code/Copycat.cpp";

require_once("login.php");

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

echo $content;

//redirect to result page
//header('Location: result.php');