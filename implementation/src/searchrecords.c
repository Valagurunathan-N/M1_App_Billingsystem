
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include"searchrecords.h"

void searchrecords()
{
	FILE *f;
	char phonenumber[20];
	//int flag=1;
	f=fopen("c:/file.ojs","rb+");
	if(f==0)
		exit(0);
	//fflush(stdin);
	system("cls");
	printf("Enter Phone Number to search in our database");
	scanf("%4s", phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{	system("cls");
			printf(" Record Found ");
			printf("\n\nPhonenumber: %s\nName: %s\nAmount: Rs.%0.2f\n",s.phonenumber,s.name,s.amount);
			//flag=0;
			break;
		}
		else 
		{	system("cls");
			printf("Requested Phone Number Not found in our database");
		}
	}
	getch();
	fclose(f);
}