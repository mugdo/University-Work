<?php

    include("../simple_html_dom.php");

    session_start();

    if(isset($_POST['submit'])){

        if(isset($_FILES['source'])){
            //pre_r($_FILES['source']);
            move_uploaded_file($_FILES['source']['tmp_name'],'source_code/'.$_FILES['source']['name']);
        }
        
        $url = 'https://toph.co/api/problems/5be6911043ca9d0001941344/submissions';
        //$url = 'https://toph.co/p/copycat/submit';

        //$files = "C:/xampp/htdocs/oj/Toph/source_code/Copycat.cpp";
        $files = "source_code/Copycat.cpp";

        $params = [
            'languageId' => $_POST['languageId'],
            'source' => '@'.$files
            //'source' => "#include <iostream>using namespace std;int main(){int n;cin>>n;cout<<n<<endl;return 0;}"
        ];

        require_once("login.php");

        $ch = curl_init();

        curl_setopt($ch, CURLOPT_URL, $url);
        curl_setopt($ch, CURLOPT_HEADER, 0);
        curl_setopt($ch, CURLOPT_USERPWD,  'ajudge.bd:aj199273');
        curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
        curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true,);
        curl_setopt($ch, CURLOPT_POST, 1);
        curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($params));
        curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
        curl_setopt($ch, CURLOPT_HTTPHEADER, array(
            'Content-type: multipart/form-data',
            "authorization: Token ".base64_encode('ajudge.bd:aj199273')
        ));

        curl_setopt($ch, CURLOPT_COOKIEFILE, 'cookie.txt');
        curl_setopt($ch, CURLOPT_COOKIEJAR, 'cookie.txt');

        //$content = curl_exec($ch);
        $content = json_decode(curl_exec($ch));

        curl_close($ch);

        echo "Hello<br>";
        echo "<pre>";
        echo $content;
        echo "<pre>";

        $response = new simple_html_dom();
        $response -> load($content);

        echo "Hi<br>";
        echo "<pre>";
        var_dump($response);
        echo "<pre>";


        //logging in to loghtOJ
        //require_once("login.php");

        //if($loginResponse){
            //echo "Login Success!";

            //redirect to submission page
            //header('Location: submission.php');
        //}else {
            //login error
            //echo "Something Went Wriong. Please try later.";
       // }
    }
?>

<html>
<head>
    <title>Submission</title>
</head>
<body>
    <h2>Submit Problem</h2>
    <form action="<?php $_PHP_SELF ?>" method="POST" enctype="multipart/form-data">
        <select name="languageId">
			<option value="" disabled="">Select Language</option>
            <option value="5d8289da9d55050001e97eae">Bash 5.0</option>
            <option value="5d8211eb728b11000151faf5">Brainf*ck</option>
            <option value="5d8280551335cb000138ba63">C# Mono 6.0</option>
            <option value="5d84f038f10beb00010af77c">C++11 GCC 7.4</option>
            <option value="5d84ef3ef10beb00010af742">C++14 GCC 8.3</option>
            <option value="5d828f1e9d55050001e97ee4">C++17 GCC 9.2</option>
            <option value="5d832d5e1335cb000138bd1f">C11 GCC 9.2</option>
            <option value="5d821a8bf2eba50001686581">Free Pascal 3.0</option>
            <option value="55c9ab8c421aa961d1000007">Go 1.13</option>
            <option value="5d832a4f1335cb000138bd08">Haskell 8.6</option>
            <option value="58483d7504469e2585024395">Java 1.8</option>
            <option value="59ca12114ad24000017dcaf9">Kotlin 1.1</option>
            <option value="5d832ccd1335cb000138bd19">Node.js 10.16</option>
            <option value="5d822463728b11000151fbc9">Perl 5.30</option>
            <option value="5d8334c31335cb000138bd5c">PHP 7.2</option>
            <option value="55c9a240421aa9479c000010">PyPy 7.1 (2.7)</option>
            <option value="55c9a6a6421aa961d1000003">PyPy 7.1 (3.6)</option>
            <option value="58482b5504469e2585024320">Python 2.7</option>
            <option value="58482c1804469e2585024324">Python 3.7</option>
            <option value="5848505704469e258502445b">Ruby 2.6</option>
		</select>

        <input type="file" name="source">
        
        <input type="submit" value="Submit" name="submit">
    </form>
</body>
</html>