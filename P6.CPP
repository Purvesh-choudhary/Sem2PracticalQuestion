#include<iostream.h>
#include<conio.h>

int ar[10];

void Display()
{
  for(int i=0; i<10; i++){
    cout<<ar[i]<<" ";
  }
}
void main ()
{
  clrscr();

  for(int i=0; i<10; i++)
  {
    cout<<"ar["<<i<<"] = ";
    cin>>ar[i];
  }

  Display();
  getch();
}