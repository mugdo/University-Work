<?php

$url = 'http://lightoj.com/volume_usersubmissions.php';

$ch = curl_init();

curl_setopt($ch, CURLOPT_URL, $url);
curl_setopt($ch, CURLOPT_HEADER, 0);
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true,);

curl_setopt($ch, CURLOPT_COOKIEFILE, 'cookie.txt');
curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');

$content = curl_exec($ch);

curl_close($ch);

echo $content;
?>

<html>
<head>
    <title>Result</title>
</head>
<body>

    refresh();
    
    <script>
        function refresh() {    
            setTimeout(function () {
                location.reload()
            }, 100);
        }
    </script>
</body>
</html>