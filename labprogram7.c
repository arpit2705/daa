<?xml version="1.0" encoding="utf-8"?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN"
"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">

<head>

<title>Paragraph Stacking</title>

<style>

div{
   position:absolute;
   width:300px;
   padding:10px;
}

.ls1{
   top:100px;
   left:100px;
   background:pink;
   z-index:1;
}

.ls2{
   top:130px;
   left:130px;
   background:lightblue;
   z-index:2;
}

.ls3{
   top:160px;
   left:160px;
   background:gray;
   z-index:3;
}

.ls4{
   top:190px;
   left:190px;
   background:yellow;
   z-index:4;
}

</style>

<script type="text/javascript">

var toplayer = "layer4";

function stack(totop)
{
   var oldtop =
   document.getElementById(toplayer).style;

   var newtop =
   document.getElementById(totop).style;

   oldtop.zIndex = "0";

   newtop.zIndex = "10";

   toplayer = totop;
}

</script>

</head>

<body>

<h1>Paragraph Stacking</h1>

<div class="ls1"
id="layer1"
onmouseover="stack('layer1')">

FIRST PARAGRAPH

</div>

<div class="ls2"
id="layer2"
onmouseover="stack('layer2')">

SECOND PARAGRAPH

</div>

<div class="ls3"
id="layer3"
onmouseover="stack('layer3')">

THIRD PARAGRAPH

</div>

<div class="ls4"
id="layer4"
onmouseover="stack('layer4')">

FOURTH PARAGRAPH

</div>

</body>

</html>