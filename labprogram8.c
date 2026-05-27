PERL Program should be stored in CGI-BIN Folder…In FEDORA, to go to CGI-BIN folder
Type....Localhost# CD /VAR/WWW/CGI-BIN….In CGI-BIN Folder…Type VI (Editor) then followed by
filename.pl (Extension) as, (VI program7a.pl)…Type the program, and then save it: WQ (Save n
Quit).
All PERL Program should be set permission before running as:
 Localhost:CGI-BIN# chmod 777 filename.pl
And make sure that the Apache Server is running:
 Localhost:CGI-BIN# httpd
To Run perl program, open browser and type URL as: http://localhost/cgi-bin/greeting.pl
#!/usr/bin/perl
use CGI ':standard';
@msg = ("Welcome","Have a nice","Good Morning","Good Day");
$range = 4;
$random_number = int(rand($range));
if(param)
{
print header();
print start_html(-title=>"User Name",-bgcolor=>"Pink",-
text=>"blue");
$cmd=param("name");
print b("Hello $cmd,$msg[$random_number]"),br();
print start_form();
print submit(-value=>"Back");
print end_form();
print end_html();
}
else
{
print header();
print start_html(-title=>"Enter user name",-
bgcolor=>"yellow",-text=>"blue");
print start_form(),textfield(-name=>"name",-value=>" "),
submit(-name=>"submit",-value=>"Submit"),reset();
print end_form();
print end_html();
} 