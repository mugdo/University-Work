<?php

    session_start();

    $url = 'https://codeforces.com/problemset/submit?csrf_token='.$_SESSION['token'];

    $ftaa = "4a3obtxghh64i8srfa";
    $bfaa = "8f4b718ff75279774bf376ccd7023fe8";
    $action = "submitSolutionFormSubmitted";
    $tabSize = "4";
    $tta = "385";

    $params = [
        'csrf_token' => $_SESSION['token'],
        'ftaa' => $ftaa,
        'bfaa' => $bfaa,
        'action' => $action,
        'submittedProblemIndex' => $_SESSION['ProblemNumber'],
        'programTypeId' => $_SESSION['language'],
        'source' => $_SESSION['code'],
        'tabSize' => $tabSize,
        '_tta' => $tta
    ];

    $ch = curl_init();

    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_POST, 1);
    curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($params));
    curl_setopt($ch, CURLOPT_COOKIEFILE, 'cookie.txt');
    curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true,);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);

    $content = curl_exec($ch);

    curl_close($ch);

    echo $content;

    //redirect to result page
    //header('Location: result.php');
?>