#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int A,B;
  printf("the number A= ");
  scanf("%d",&A);
  printf("the number B= ");
  scanf("%d",&B);
  if(A<B)
  {
    printf("A is minimum");
  }
  else
  {
    printf("B is minimum");
  }
  getch();
}