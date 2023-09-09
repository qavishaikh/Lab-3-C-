#include<iostream>
using namespace std;
int main()
{
	int q = 1;
	int sum = 0;
	while(q<=100)
	{
		sum+=q;
		q+=2;
	}
	cout<<"\n\tSum Of Odd Number 1 To 100 : "<<sum;
	return 0;
}

