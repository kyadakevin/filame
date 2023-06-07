#include<stdio.h>

main()
{
	char email;  "kevinpatel24gamil.com";
	char password; "kevin2412";
	char emai[100];
	char pass[100];
	
	printf("enter the email=");
	gets(emai);
	
	printf("\nenter the password\n=");
	gets(pass);
	
	if(srecmp(email, emai) == 0)
	  { 
	       if(strcmp(password,"pass")== 0)
	       {
	       	printf("\nUser successfully logged in... ");
		   }
		   else
		   {
		   	printf("your password is rong");
		   }
	  }
}
