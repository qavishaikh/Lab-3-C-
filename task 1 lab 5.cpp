#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sum = 0;			
	for( int a=1; a<=60;a++)
	{if(a%3==0 && a%2!=0)
	sum+=a;
    }
    cout<<"\t"<<sum;
    cout<<"\n\n\t Muhammad Qavi";
    getch();
    return 0;
}

