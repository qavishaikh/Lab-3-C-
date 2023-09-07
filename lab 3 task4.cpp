#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char a;	
	cin>>a;
	if ( (a=='a'|| a=='e'|| a=='i'||a=='o'||a=='u') ||
	(a=='A'||a=='E'||a=='I'||a=='O'||a=='U') )
	 cout<<a<<"\t It IS A wovel"<<endl;
	 else{	 
	 	cout<<a<<"\t It IS constanat"<<endl;}
	cout<<"Compile By\t M Qavi Sheikh";	 	 
	 getch();
	 return 0;
}

