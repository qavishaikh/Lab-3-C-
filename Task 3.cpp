#include<iostream>
#include<conio.h>
using namespace std;
int main(){
     cout<<"\t\tEnter The Number"<<endl; 
  int number;
  cin>>number;
   int a=number+1;
   int b=number*number;
   	switch(number==0){
	   	case 1:
	    cout<<"\tNumber Is Zero\n";
	    cout<<"\n\t\t"<<number;
	break;
	case 0:
         switch(number%2==0){
	case 1: 	
	    cout<<"\tIt Is Odd Number\n";
	    cout<<number<<endl;
	    cout<<"\n\t After Square";
	    cout<<"\n\t\t"<<b;
	break;
	     case 0:
	   switch(number%2!=0){
	   	case 1:	
	    cout<<"\tIt Is Even Number\n";
	    cout<<number<<endl;
	    cout<<"\n\t After Odd";
	    cout<<"\n\t\t"<<a;
	break;
	    case 0:
	  	  cout<<"\n\n\t Wrong Number! Try Again......";
	break;  	  
		}  
}}
cout<<"\n\t\tCreate By: Muhammad Qavi Sheikh";
getch();
return 0;
}

