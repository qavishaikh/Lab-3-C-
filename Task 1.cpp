#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	int char_count = 0;
	do
	{
	cout<<"Enter Any Character Expect Than Q : ";
		ch = getche();
		cout<<endl;
		char_count++;
	}while(ch!='Q' && ch!='q');
	cout<<"Numbers Of Characters Entered = "<<char_count;
	cout<<endl<<"\t\tAliza Noor";
	getch();
	return 0;
}

