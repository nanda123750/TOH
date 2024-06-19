#include<stdio.h>
#include<conio.h>
void tow(int n,char A,char B,char C);
void main()
{
  int n;
printf("enter the number of disks :");
scanf("%d",&n);
printf("moves involved in tower of hanoi are \n");
tow(n,'A','C','B');
getch();
}
void tow(int n,char A,char C,char B)
{
  if(n--1)
    printf("/n move disk %d from pole %c\n",A,C);
else
{
tow(n-1,A,B,C);
printf("move disk %d from pole %c to pole %c",n,A,C);
tow(n-1,B,C,A);
}
}
  
