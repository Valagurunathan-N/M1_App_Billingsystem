
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include"modifyrecords.h"
void modifyrecords()
{
	FILE *f;
	char phonenumber[20];
	long int size=sizeof(s);
	if((f=fopen("c:/file.ojs","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter phone number of the subscriber to modify:");
	scanf("%4[^\n]",phonenumber);
	//fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			system("cls");
			printf("\n Enter phone number:");
			scanf("%4s",&s.phonenumber);
			printf("\n Enter name: ");
			//fflush(stdin);
			scanf("%4[^\n]",&s.name);
			printf("\n Enter amount: ");
			scanf("%4f",&s.amount);
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	fclose(f);
} 