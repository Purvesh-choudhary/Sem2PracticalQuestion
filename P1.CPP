#include<iostream.h>
#include<conio.h>

int ar[10]={6,9,34,73,65,345,783,45,25,23};

void Display()
{
  for(int i=0; i<10; i++){
    cout<<ar[i]<<" ";
  }
}

void FindL()
{
  int temp;
  temp = ar[0];
  for(int i=0; i<10; i++)
    if(temp<ar[i])
      temp=ar[i];
  cout<<"\nLargest Element is "<<temp;
}

void FindS()
{
  int temp;
  temp = ar[0];
  for(int i=0; i<10; i++)
    if(temp>ar[i])
      temp=ar[i];
  cout<<"\nSmallest Element is "<<temp;
}

void main ()
{
  clrscr();
  Display();
  FindL();
  FindS();
  getch();
}