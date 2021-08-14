<?php

    session_start();

    if($_SERVER["REQUEST_METHOD"] == "POST"){
        $_SESSION['subProblem'] = $_SESSION['pNum'];
        $_SESSION['language'] = $_POST["language"];
        $_SESSION['code'] = $_POST["code"];

        //logging in to loghtOJ
        require_once("login_check.php");

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
        <label for="pNumber">Problem Number</label>
        <input type="text" name="pNumber" id="pNumber" value="<?php echo $_SESSION['pNum']?>">

        <select name="language">
            <option value="C">C</option>
            <option value="C++">C++</option>
            <option value="JAVA">JAVA</option>
            <option value="PASCAL">PASCAL</option>
        </select>

        <textarea name="code" cols="93" rows="30"></textarea>
        
        <input type="submit" value="Submit" name="submit">
    </form>
</body>
</html>