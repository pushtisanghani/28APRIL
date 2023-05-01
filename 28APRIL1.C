#include<stdio.h>
#include<conio.h>

void main()
{
   clrscr();
   int neutral;
   printf("enter neutral");
   scanf("%d",&neutral);
   if(neutral>0)
{
   printf("this number is possitive");
}
   else if (neutral==00)
{
   printf("this number is neutral");
}
   else if (neutral<-10)
{
   printf("this number is nagative");
}
  getch();
}
