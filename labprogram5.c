<?xml version="1.0" encoding="utf-8"?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN"
"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">

<head>

<title>Grow and Shrink Text</title>

<script type="text/javascript">

var c = 5;
var t1;

function start()
{
   t1 = setInterval(incr,100);
}

function incr()
{
   c++;

   t.innerHTML = "TEXT-GROWING : " + c + "pt";

   t.style.fontSize = c + "pt";

   t.style.color = "red";

   if(c > 50)
   {
      clearInterval(t1);

      t1 = setInterval(decr,100);
   }
}

function decr()
{
   c--;

   t.innerHTML = "TEXT-SHRINKING : " + c + "pt";

   t.style.fontSize = c + "pt";

   t.style.color = "blue";

   if(c == 5)
   {
      clearInterval(t1);
   }
}

</script>

</head>

<body onload="start()">

<center>
<p id="t"></p>
</center>

</body>

</html>