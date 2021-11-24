
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include"addrecords.h"
void addrecords()
{
	FILE *f;
	f=fopen("c:/file.ojs","ab+");
	if(f==0)
	{   f=fopen("c:/file.ojs","wb+");
		system("cls");
		printf("please wait while we configure your computer");
		printf("/npress any key to continue");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter phone number:");
		scanf("%4s",&s.phonenumber);
	/**	if (sizeof(&s.phonenumber)!=10)
	{
		printf("Mobile Numebr length should be 10 digits.");
			fclose(f);
			system("cls");
			printf("\nAny key to continue");
			getch();
	}**/
		printf("\n Enter name:");
		//fflush(stdin);
		scanf("%4s",&s.name);
		
		printf("\n Enter amount:");
		scanf("%f",&s.amount);
		fwrite(&s,sizeof(s),1,f);
		//fflush(stdin);
		system("cls");
		printf("1 record successfully added");
		printf("\n Press esc key to exit, any other key to add other record:");
		char test;
		test=getche();
		if(test==27)
			break;
	}
	fclose(f);
}