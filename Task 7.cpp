#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	cout<<"\n\t\t WellCome To Computers Shop\n";
	cout<<"\t 1: DELL \n";
	cout<<"\t 2: HP \n";
	cout<<"\t\t Please choose Computer Which One Do You Want To Buy\n";
	int Computer;
	cin>>Computer;
	switch(Computer==1){
	    case 1:
		 cout<<"\t Dell \n";
		 cout<<"\t Price:  20,000 \n";	 
	cout<<"do you want to add more memory yes/no";
		char add_Memory;
	      cin>>add_Memory;
	if(add_Memory=='Y'||add_Memory=='y'){
           cout<<"\n\tPlease Choose Any One Memory\n";
                    cout<<"\n\t 1-8GB RAM"; 
                    cout<<"\n\t 2-16GB RAM"; }
      else if(add_Memory=='N'||add_Memory=='n'){          
		       cout<<"I dont want to add memory";	 }	  	        
           int cho_Memory;
           cin>>cho_Memory;
      switch(cho_Memory==1){
      	case 1:
      		cout<<"8GB RAM";
      	break;
		case 2:
		      cout<<"16GB RAM";
		break;
		case 0:		
	cout<<"do you want to add Processor yes/no";
	      char add_Proc;
	      cin>>add_Proc;
	if(add_Proc=='Y'||add_Proc=='y'){
		cout<<"please select any one of processor";
                 cout<<"1-i5"; 
                 cout<<"2-i7";}
      else if(add_Proc=='N'||add_Proc=='n'){          
		      cout<<"I dont want to add Processor"; }         
            int cho_Proc;
           cin>>cho_Proc;
      switch(cho_Proc==1){
      	case 1:
      		cout<<"i5";
      	break;
		case 0:
		      cout<<"i7";
		break;	
	}      
	}      
	}
	
	
	cout<<"\n\n\t\tCreate By: Muhammad Qavi";
	getch();
	return 0;
}
