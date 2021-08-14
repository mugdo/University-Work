<?php

    //include("../simple_html_dom.php");

    session_start();

    if($_SERVER["REQUEST_METHOD"] == "POST"){
        require_once("login.php");

        $url = 'https://codeforces.com/problemset/submit';

        //$ch = curl_init();

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
            if($name === '_tta'){
                $tta = $i->getAttribute('value');
            }
        }
        //echo $token;
        //echo $tta;

        $_SESSION['ProblemNumber'] = $_SESSION['submittedProblemIndex'];
        $_SESSION['language'] = $_POST["programTypeId"];
        $_SESSION['code'] = $_POST["sourceCodeTextarea"];
        $_SESSION['token'] = $token;

        if($loginResponse){
            //echo "Login Success!";

            //redirect to submission page
            header('Location: submission.php');
        }else {
            //login error
            echo "Something Went Wriong. Please try later.";
        }
    }
?>

<html>
<head>
    <title>Submission</title>
</head>
<body>
    <h2>Submit Problem</h2>
    <form action="<?php $_PHP_SELF ?>" method="POST">
        <input type="hidden" name="ftaa" value="4a3obtxghh64i8srfa">
        <input type="hidden" name="bfaa" value="8f4b718ff75279774bf376ccd7023fe8">
        <input type="hidden" name="action" value="submitSolutionFormSubmitted">

        <label for="submittedProblemCode">Problem No:</label>
        <input id="submittedProblemCode" name="submittedProblemIndex">
        
        <select name="programTypeId">
            <option value="43">GNU GCC C11 5.1.0</option>
            <option value="52">Clang++17 Diagnostics</option>
            <option value="42">GNU G++11 5.1.0</option>
            <option value="50">GNU G++14 6.4.0</option>
            <option value="54">GNU G++17 7.3.0</option>
            <option value="2">Microsoft Visual C++ 2010</option>
            <option value="59">Microsoft Visual C++ 2017</option>
            <option value="9">C# Mono 5.18</option>
            <option value="28">D DMD32 v2.086.0</option>
            <option value="32">Go 1.12.6</option>
            <option value="12">Haskell GHC 8.6.3</option>
            <option value="60">Java 11.0.5</option>
            <option value="36">Java 1.8.0_162</option>
            <option value="48">Kotlin 1.3.10</option>
            <option value="19">OCaml 4.02.1</option>
            <option value="3">Delphi 7</option>
            <option value="4">Free Pascal 3.0.2</option>
            <option value="51">PascalABC.NET 3.4.2</option>
            <option value="13">Perl 5.20.1</option>
            <option value="6">PHP 7.2.13</option>
            <option value="7">Python 2.7.15</option>
            <option value="31">Python 3.7.2</option>
            <option value="40">PyPy 2.7 (7.2.0)</option>
            <option value="41">PyPy 3.6 (7.2.0)</option>
            <option value="8">Ruby 2.0.0p645</option>
            <option value="49">Rust 1.35.0</option>
            <option value="20">Scala 2.12.8</option>
            <option value="34">JavaScript V8 4.8.0</option>
            <option value="55">Node.js 9.4.0</option>
            <option value="14">ActiveTcl 8.5</option>
            <option value="15">Io-2008-01-07 (Win32)</option>
            <option value="17">Pike 7.8</option>
            <option value="18">Befunge</option>
            <option value="22">OpenCobol 1.0</option>
            <option value="25">Factor</option>
            <option value="26">Secret_171</option>
            <option value="27">Roco</option>
            <option value="33">Ada GNAT 4</option>
            <option value="38">Mysterious Language</option>
            <option value="39">FALSE</option>
            <option value="44">Picat 0.9</option>
            <option value="45">GNU C++11 5 ZIP</option>
            <option value="46">Java 8 ZIP</option>
            <option value="47">J</option>
            <option value="56">Microsoft Q#</option>
            <option value="57">Text</option>
        </select>

        <label for="sourceCodeTextarea">Source Code:</label>
        <textarea id="sourceCodeTextarea" name="source"></textarea>

        <input type="number" id="tabSizeInput" name="tabSize" value="4">

        <input name="sourceFile" type="file" value="">

        <input type="submit" value="Submit">

        <input type="hidden" name="_tta" value="385">
    </form>
</body>
</html>