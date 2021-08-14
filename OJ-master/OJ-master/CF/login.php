<?php

    include("../simple_html_dom.php");

    $url = 'https://codeforces.com/enter';

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

        if($name === 'csrf_token'){
            $token = $i->getAttribute('value');
        }
    }
    //echo $token;

    $data = [
        'csrf_token' => $token,
        'action' => 'enter',
        'ftaa' => 'rzorzrjjd5ae74r5rj',
        'bfaa' => '8f4b718ff75279774bf376ccd7023fe8',
        'handleOrEmail' => 'ajudge.bd',
        'password' => 'aj199273',
        '_tta' => '444'
    ];

    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_POST, 1);
    curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));
    curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true);

    $loginResponse = curl_exec($ch);
    //echo $loginResponse;

    //curl_close($ch);

?>
