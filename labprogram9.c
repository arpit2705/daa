To Create DataBase: localhost # /etc/init.d/httpd start …./To Start Apache Server /.
 localhost # /etc/init.d/mysqld start ..../To Start mysql server /.
 Goto mysql > show databases; / show the existing DataBases /.
 mysql> create database muz; / DataBase by name muz is created /.
 mysql> use muz; /Allows to use DataBase muz /.
 mysql> Create table stud (name varchar(15), age varchar(3));
 mysql>desc stud; / Gives description of table created /.
 mysql> GRANT SELECT,INSERT,DELETE,UPDATE ON muz.* TO apache@localhost
 IDENTIFIED BY ‘cool’;
Type n Save as 9.pl in CGI-BIN Folder, and then set permission.
#! /usr/bin/perl
print "Content-type: text/html\n\n";
print "<HTML><HEAD><TITLE>Result of the insert operation
</TITLE></HEAD>";
use CGI ':standard';
use DBI;
$dbh=DBI->connect("DBI:mysql:muz","apache","cool");
$name=param("name");
$age=param("age");
$qh=$dbh->prepare("insert into stud values('$name','$age')");
$qh->execute();
$qh=$dbh->prepare("Select * from stud");
$qh->execute();
print "<table border size=1><tr><th>Name</th><th>Age</th></tr>";
while ( ($name,$age)=$qh->fetchrow())
{
 print "<tr><td>$name</td><td>$age</td></tr>";
}
print "</table>";
$qh->finish();
$dbh->disconnect();
print"</HTML>";
Type html Program in, HTML Folder. And run it on the browser.
<html>
<body>
<h1> Enter Information :</h1>
<form action="http://localhost/cgi-bin/10.pl">
 Name : <input type="text" name="name"> <br>
 Age :<input type="text" name="age"> <br>
<input type="submit" value="SUBMIT">
<input type="reset" value="RESET">
</form>
</html> 