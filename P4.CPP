#include<iostream.h>
#include<conio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a=*b;
  *b=temp;
  cout<<"Swap Funct  - a="<<*a<<" , b="<<*b<<endl;
}

void main ()
{
  clrscr();
  int a=5,b=10;
  cout<<"Before Swap - a="<<a<<" , b="<<b<<endl;
  swap(&a,&b);
  cout<<"After  Swap - a="<<a<<" , b="<<b<<endl;
  getch();
}