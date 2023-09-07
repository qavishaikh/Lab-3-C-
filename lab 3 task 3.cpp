#include<iostream>
using namespace std;
main()
{
	char c;
	cout<<"Enter A Character ";
	cin>>c;
	if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
	cout<<c<<"\n It Is An Alphabet"<<endl;
	else{	
	cout<<c<<"\t It Is Not An ALphabet"<<endl;}
	cout<<"M Qavi Sheikh";
	return 0;
}

