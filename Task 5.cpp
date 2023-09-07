#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	string week;
	cout<<"\tEnter The Day\n";
	cin>>week;
	if ( (week=="Monday")||(week=="Tuesday")||(week=="Wednesday")||
	 (week=="Thursday")||(week=="Friday") )
	 cout<<"\tWorking Day\n";
	 else{
	 	cout<<"\tWeakend\n";	 	
	 }
	 cout<<"\tM Qavi Shaikh";
	getch();
	return 0;
}

