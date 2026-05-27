<?xml version="1.0" encoding="utf-8"?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN"
"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">

<head>

<title>Program 2</title>

<script type="text/javascript">

function validator()
{
   var usn = document.getElementById("req1");

   if(iscorrect(usn))
      return true;

   return false;
}

function iscorrect(elem1)
{
   var usnexp =
   /[1-4][A-Z][A-Z][0-9][0-9][A-Z][A-Z][0-9][0-9][0-9]$/;

   if(elem1.value.length == 0)
   {
      alert("USN is empty");
      elem1.focus();
      return false;
   }

   else if(!elem1.value.match(usnexp))
   {
      alert("Invalid USN Format");
      elem1.focus();
      return false;
   }

   alert("USN is Correct");
   return true;
}

</script>

</head>

<body>

<form onsubmit="return validator()">

Enter USN:
<input type="text" id="req1"/>

<input type="submit" value="Check Field"/>

</form>

</body>
</html>