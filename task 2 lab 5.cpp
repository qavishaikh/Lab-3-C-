#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter The Starting Number";
	cin>>a;
	cout<<"Enter The Ending Number";
	cin>>b;
	for(int i=a; i<=b; i++)
	{if(i%5==0){
		cout<<i<<endl;
	}
	}
	cout<<"\n\n\t Muhammad Qavi Sheikh";
	getch();
	return 0;
}

