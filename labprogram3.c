<?xml version="1.0" encoding="utf-8"?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN"
"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">

<head>

<title>Calculator</title>

<script src="calculator.js" type="text/javascript"></script>

</head>

<body>

<h1>Simple Calculator</h1>

<table border="1" cellpadding="5">

<tr>
<td>First Number</td>
<td>Second Number</td>
<td>Result</td>
</tr>

<tr>

<td>
<input type="text" id="num1"/>
</td>

<td>
<input type="text" id="num2"/>
</td>

<td>
<input type="text" id="result"/>
</td>

</tr>

<tr>

<td colspan="3">

<button onclick="showresult('1')">+</button>

<button onclick="showresult('2')">-</button>

<button onclick="showresult('3')">*</button>

<button onclick="showresult('4')">/</button>

<button onclick="cls()">CLEAR</button>

</td>

</tr>

</table>

</body>
</html>


function cls()
{
   document.getElementById("num1").value = "";
   document.getElementById("num2").value = "";
   document.getElementById("result").value = "";
}

function showresult(choice)
{
   var n1 =
   parseFloat(document.getElementById("num1").value);

   var n2 =
   parseFloat(document.getElementById("num2").value);

   var r;

   switch(choice)
   {
      case '1':
         r = n1 + n2;
         break;

      case '2':
         r = n1 - n2;
         break;

      case '3':
         r = n1 * n2;
         break;

      case '4':
         r = n1 / n2;
         break;
   }

   document.getElementById("result").value = r;
}