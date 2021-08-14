<?php

    $url = 'https://vjudge.net';

    $data = [
        'username' => 'ajudgebd',
        'password' => 'aj199273'
    ];

    $ch = curl_init();

    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_HEADER, 1);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true,);
    curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
    //curl_setopt($ch, CURLOPT_POST, 1);
    //curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));
    // curl_setopt($ch, CURLOPT_HTTPHEADER, array(
    //     "Content-Type: application/x-www-form-urlencoded"
    // ));

    curl_setopt($ch, CURLOPT_COOKIEFILE, 'cookie.txt');
    curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');

    $loginResponse = curl_exec($ch);

    curl_close($ch);

    echo $loginResponse;

    if($loginResponse){
        echo "Login Success!";

        //redirect to submission page
        //header('Location: https://vjudge.net/');
    }else {
        //login error
        echo "Something Went Wriong. Please try later.";
    }