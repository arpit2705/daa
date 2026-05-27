<?xml version="1.0" encoding="utf-8"?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN"
"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">

<head>

<title>Visibility Control</title>

<script src="showhide.js" type="text/javascript"></script>

</head>

<body>

<form action="">

<div id="apple" style="visibility:visible;">

<img src="apple.jpg" alt="Apple Image"/>

</div>

<p>

<input type="button"
value="Toggle Image"
onclick="flipimage()" />

</p>

</form>

</body>

</html>


function flipimage()
{
   var dom =
   document.getElementById("apple").style;

   if(dom.visibility == "visible")
      dom.visibility = "hidden";

   else
      dom.visibility = "visible";
}