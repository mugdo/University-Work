<?php

session_start();

if(isset($_POST['submit'])){
    $judge = $_POST["onlineJudge"];

    //Checking which judge
    if($judge == "LOJ"){
        $_SESSION['pNum'] = $_POST["pNumber"];

        //logging in to loghtOJ
        require_once("lightOJ/login_check.php");

        if($loginResponse){
            //echo "Login Success!";

            //redirect to show_problem page
            header('Location: lightOJ/show_problem.php');
        }else {
            //login error
            echo "Something Went Wrong. Please try later.";
        }
    }elseif($judge == "Toph"){
        $_SESSION['pName'] = $_POST["pName"];
        
        //logging in to Toph
        require("Toph/login.php");

        if($loginResponse){
            //echo "Login Success!";

            //redirect to show_problem page
            header('Location: Toph/show_problem.php');
        }else {
            //login error
            echo "Something Went Wrong. Please try later.";
        }
    }elseif($judge == "Codemarshal"){
        $url = 'https://algo.codemarshal.org';
    }elseif($judge == "Codeforces"){
        $pNumber = $_POST["pNumber"];

        $pnum = "";
        for( $i=0; $i<strlen($pNumber) ; $i++ ){
            if( $pNumber[$i] == ' ' || ($pNumber[$i]>='A' && $pNumber[$i]<='Z') || ($pNumber[$i]>='a' && $pNumber[$i]<='z') )
                break;
            else
                $pnum .= $pNumber[$i];
        }

        $pdigit = substr($pNumber,-1);

        $_SESSION['pNum1'] = $pnum;
        $_SESSION['pNum2'] = $pdigit;

        header('Location: CF/show_problem.php');
    }
}
?>

<html>
<head>
    <title>Problem</title>
</head>
<body>
    <h2>Search Problem</h2>
    <form action="<?php $_PHP_SELF ?>" method="POST">
        <select name="onlineJudge">
            <option value="LOJ">Light OJ</option>
            <option value="Toph">Toph</option>
            <option value="Codemarshal">Codemarshal</option>
            <option value="Codeforces">Codeforces</option>
        </select>
        <label for="pNumber">Problem Number</label>
        <input type="text" name="pNumber" id="pNumber">

        <label for="pName">Problem Name</label>
        <input type="text" name="pName" id="pName">

        <input type="submit" value="Submit" name="submit">
    </form>
</body>
</html>