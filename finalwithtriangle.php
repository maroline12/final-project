<!DOCTYPE html>
<html>
  <head>
    <title>Final Project</title>
  </head>

  <body>

    <h1>Enter height of rectangle, width of rectangle, and height of triangle</h1>
    <p>Prints a rectangle and a triangle</p>

    <?php
      $arg1 = $arg2 = $arg3 = $output = $retc = "";

      if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $arg1 = test_input($_POST["arg1"]);
        $arg2 = test_input($_POST["arg2"]);
        $arg3 = test_input($_POST["arg3"]);
        exec("/usr/lib/cgi-bin/student2/final4" . $arg1 . " " . $arg2 . " " . $arg3, $output, $retc);
      }

      function test_input($data) {
        $data = trim($data);
        $data = stripslashes($data);
        $data = htmlspecialchars($data);
        return $data;
      }

    ?>

<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
  Arg1: <input type="text" name="arg1"><br>
  Arg2: <input type="text" name="arg2"><br>
  Arg3: <input type="text" name="arg3"><br>
  <input type="submit">
</form>

<?php
  echo "<h2>Your Input:</h2>";
  echo $arg1;
  echo "<br>";
  echo $arg2;
  echo "<br>";
  echo $arg3;
  echo "<br>";

  echo "<h2>C Program Output:</h2>";
  foreach ($output as $line) {
    echo $line;
    echo "<br>";
  }

  echo "<h2>C Program Return Code:</h2>";
  echo $retc;

  ?>

</body>
</html>


