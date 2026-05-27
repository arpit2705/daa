<?xml version="1.0" encoding="utf-8"?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN"
"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">

<head>

<title>Squares and Cubes</title>

<script type="text/javascript">

document.write("<center>");
document.write("<table border='1'>");

document.write(
"<tr><th>Number</th><th>Square</th><th>Cube</th></tr>"
);

for(var n=0; n<=10; n++)
{
   document.write(
   "<tr><td>" + n +
   "</td><td>" + n*n +
   "</td><td>" + n*n*n +
   "</td></tr>"
   );
}

document.write("</table>");
document.write("</center>");

</script>

</head>

<body>
</body>

</html>