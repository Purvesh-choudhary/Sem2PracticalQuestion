#include<iostream.h>
#include<conio.h>

int item,x,max;
int stack['x'];
int top = -1;

void push(int item)
{
  if(top==max)
  {
    cout<<"\nStack OverFlow !! \n";
    return;
  }
  top++;
  stack[top]= item;
  cout<<stack[top]<<" has been Pushed at "<<top<<" Location\n";
}

void pop(int item)
{
  if(top<0)
  {
    cout<<"\nStack UnderFlow !!\n";
    return;
  }
  item= stack[top];
  top--;
}

void view()
{
  cout<<"\nStack - "<<endl;
  for(int i=max; i>=0; i--)
    cout<<i<<"="<<stack[i]<<endl;
}

void main()
{
   int choice;
   x=4;
   max=x;
   clrscr();
 do
 {
   cout<<"\nStatus : Top="<<top;
   cout<<"\n1.Push \n2.Pop \n3.View \n4.Exit\nEnter your Choice : ";
   cin>>choice;

   switch(choice)
   {
      case 1 : cout<<"\nEnter Pushing Element : ";
	       cin>>item;
	       push(item);
	       break;
      case 2 : pop(item);
	       break;
      case 3 : view();
	       break;
      case 4 : cout<<"\n---END--- press any key ";
	       break;
      default: cout<<"Invalid Choice...!";
   }
 }while(choice != 4);
 getch();
}