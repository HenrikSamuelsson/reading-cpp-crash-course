# Solution Exercise 3-1

CVE-2001-0500 is a security vulnerability caused by unchecked buffer overflow in Microsoft’s Internet Information Services.

> An attacker who successfully exploited this vulnerability could gain complete control over an affected web server. This would give the attacker the ability to take any desired action on the server, including changing web pages, reformatting the hard drive or adding new users to the local administrators group.  
> [Microsoft](https://learn.microsoft.com/en-us/security-updates/securitybulletins/2001/ms01-033)

There is an buffer in a part of the code that handles incoming requests and the check for if the request fits into the buffer is missing. If a specially malformed request is sent to it by an attacker, it could be used to cause code of the attacker's choice to run on the server.

C++ does not have built in automatic checks of buffer overflow due to that mechanics would cost resources, making the program run a little bit slower.
