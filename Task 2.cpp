#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int payscale;
	cout<<"\n\t\tEnter The Payscale of Employe\n\t";
	cin>>payscale;
	if(payscale>=10000&&payscale<=20000)
	cout<<"\n\tManeger Operations"<<endl;
	else if(payscale>20000&&payscale<=30000)
	cout<<"\n\tManeger"<<endl;
      else if(payscale>30000&&payscale<=40000)
	cout<<"\n\tArea  Maneger"<<endl;
      else if(payscale>40000&&payscale<=50000)
	cout<<"\n\tRegional Manager"<<endl;
	else{	
	cout<<"\n\t\tInvalid Payscale"<<endl;}
	cout<<"\n\n\t\tCreate By: Muhammad Qavi Sheikh";
	getch();
	return 0;
}











