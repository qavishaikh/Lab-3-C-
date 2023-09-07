#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout<<"\tEnter A Number\n";
	cin>>a;
	if( a%7==0 && a%11!=0)
	cout<<"\t It Is Divisible By 7 & not Divisible By 11\n";
	else if(a%7!=0)
      cout<<"\tIt Is Not Divisible By 7 & 11\n";	
	else{
		cout<<"\t It IS Divisible By 7 & 11\n";
	}
	cout<<"\t M Qavi Sheikh";
	getch();
	return 0;
}

