#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n Enter the number:");
scanf("%d",&n);
if(n>0)
printf("\n POSITIUE");
else if(n<0)
printf("\n NEGATIVE");
else
printf("\n ZERO");
getch();
}
