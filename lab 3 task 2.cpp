#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a, b, c,sum;
	cout<<"Enter The First Number  ";
	cin>>a;
	cout<<"Enter The Sceond Number  ";
	cin>>b;
	cout<<"Enter The Third Number  ";
	cin>>c;
	sum=a+b+c;
	if(sum==180)
	cout<<"It Is Valid Triangle"<<endl;
	else{	
	cout<<"Invalid Triangle"<<endl;	
	}
	cout<<"M Qavi Shaikh";
	getch();
	return 0;
}

