#include<stdio.h>
#include<string.h>
struct student
{ int rollno;
	char name[20];
};
typedef struct student stud;

int main()
{
	FILE *fptr;
	stud s;
	char reply='y';

	fptr=fopen("student","a");

	while(reply=='y')
	{
		printf("\nEnter rollno and name :");
		scanf("%d",&s.rollno);
		fflush(stdin);
		gets(s.name);
		fwrite(&s,sizeof(s),1,fptr);
		printf("More records y or n?");
		scanf("%c",&reply);
	}
	fclose(fptr);

	printf("\n\nReading data from file\n\n");
	fptr=fopen("student","r");
	while(fread(&s,sizeof(s),1,fptr)!=NULL)
	{
		printf("\nRollno:%d Name:%s",s.rollno,s.name);
	}
	fclose(fptr);


	return 0;
}
