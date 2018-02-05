#include <iostream>
#include <string>
using namespace std;


int main()
{

	string myName="jai";
	while(true)
	{
		string userName;
		cout<<"enter your name(or 'quit' to exit): ";
		cin>>userName;
		
		if(userName=="kumar")
	       	{
			cout<<"Hey kumar"<<endl;
		}
		else if(userName=="quit")
		{
			cout<<endl;
			break;
		}
		else if( userName != myName ) 
		{
			cout<<"hello,"<<userName<<endl;			
		}
		else 
		{
			cout<<"Aha! its you "<<myName<<endl;
		}
	}
	return 0;
}


