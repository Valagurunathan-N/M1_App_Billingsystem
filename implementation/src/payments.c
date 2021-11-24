
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<payment.h>




void payment()
{
	FILE *f;
	char phonenumber[20];
	long int size=sizeof(s);
	float amt;
	int i;
	if((f=fopen("c:/file.ojs","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter phone number of the subscriber for payment");
	scanf("%4[^\n]",phonenumber);
	//fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			system("cls");
			printf("\n Phone No.: %s",s.phonenumber);
			printf("\n Name: %s",s.name);
			printf("\n Current amount: %f",s.amount);
			printf("\n");
			for(i=0;i<79;i++)
				printf("-");
			printf("\n\nEnter amount of payment :");
			//fflush(stdin);
			scanf(" %f",&amt);
			s.amount=s.amount-amt;
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	system("cls");
	printf("THANK YOU %s FOR YOUR TIMELY PAYMENTS",s.name);
	getch();
	fclose(f);
}