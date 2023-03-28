#include<iostream.h>
#include<conio.h>

int ar[10]={6,9,34,73,65,345,783,45,25,23};

void Display()
{
  for(int i=0; i<10; i++){
    cout<<ar[i]<<" ";
  }
}
void main ()
{
  clrscr();
  Display();
  getch();
}