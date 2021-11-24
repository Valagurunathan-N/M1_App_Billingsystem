
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include"deleterecords.h"
void deleterecords()
{
	FILE *f,*t;
	int i=1;
	char phonenumber[20];
	if((t=fopen("c:/temp.ojs","w+"))==NULL)
	exit(0);
	if((f=fopen("c:/file.ojs","rb"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the phone number to be deleted from the Database");
	//fflush(stdin);
	scanf("%4[^\n]",phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{       i=1;
			continue;

		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       system("cls");
		printf("Phone number \"%s\"  found",phonenumber);
		remove("c:/file.ojs");
		rename("c:/temp.ojs","c:/file.ojs");
		getch();
		fclose(f);
		fclose(t);
		//main();
	}else
		printf("Phone number \"%s\" not found",phonenumber);
	remove("c:/file.ojs");
	rename("c:/temp.ojs","c:/file.ojs");
	system("cls");
	printf("The Number %s Successfully Deleted!!!!",phonenumber);
	fclose(f);
	fclose(t);
	getch();
}