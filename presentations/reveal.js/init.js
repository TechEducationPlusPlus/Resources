var logos = document.getElementsByClassName ('logo');
console.log (logos.length);
for (var i = 0 ; i < logos.length ; i ++)
{
	logos [i].innerHTML = '<img width="150px" src="../../img/acdemy4_logo.png" />';
}
var follows = document.getElementsByClassName ('follow');
for (var i = 0 ; i < follows.length ; i ++)
{
	follows [i].innerHTML = '<center> Follow us<br> <a href="https://chat.techedu.cf" alt="Global chat"><img src="../../img/acdemy4_logo.png" /></a> <a href="https://www.facebook.com/TechEducationGroup/" alt="Facebook"><img src="../../img/facebook.png" /></a> <a href="https://github.com/TechEducationPlusPlus" alt="GitHub"><img src="../../img/github.png" /></a> </center>';
}
var numbers = document.getElementsByClassName ('number');
for (var i = 0 ; i < numbers.length ; i ++)
{
	numbers [i].innerHTML = (i+1);
}
