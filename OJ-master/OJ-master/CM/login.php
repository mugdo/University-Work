<?php

    include("../simple_html_dom.php");

    $url = 'https://algo.codemarshal.org/login';

    $ch = curl_init();

    curl_setopt($ch, CURLOPT_URL, $url);
    //curl_setopt($ch, CURLOPT_HEADER, 0);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    //curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true);
    //curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));

    //curl_setopt($ch, CURLOPT_COOKIEFILE, 'cookie.txt');
    curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');

    $response = curl_exec($ch);

    $html = new simple_html_dom();
    $html -> load($response);

    $tags = $html->find('input');

    foreach($tags as $i){
        $name = $i->getAttribute('name');

        if($name === '_csrf'){
            $token = $i->getAttribute('value');
        }
    }
    //echo $token;

    $data = [
        '_csrf'=> $token,
        'username' => 'ajudge.bd',
        'password' => 'aj199273'
    ];

    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_POST, 1);
    curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));
    curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true);

    $loginResponse = curl_exec($ch);
    echo $loginResponse;

    curl_close($ch);

?>