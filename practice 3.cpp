#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int N = 5;
	int i,j;
	for(i=N; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		cout<<'A';
		cout<<endl;
	}
	cout<<"\n\n\t Muhammad Qavi Sheikh";
	getch();
	return 0;
}

