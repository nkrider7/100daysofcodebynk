#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class india
{
	int hight, edu , iq ;
	public:
	
	void login(){
	cout<<"Enter your hight : \n";
	cin>>hight;
	if(hight>7 && 9 > hight){
		cout<<"Enter your education in class :";
		cin>>edu;
		
	}
	else if (9<hight)
		cout<<" abe saale lambe ";
	else 
		cout<<"your are not egiblie ";
    }
};

class pak 
{
	int hight , edu , iq ;	
	void hights(){
		cout<<hight;
	}
};
class usa 
{
	int hight , edu , iq ;
	
	
	
	
};
int main()
{
	india obj;
	int user;
	cout << "~ Welcome back to join army ~" << endl;
	cout<< " which country are you jon army \n 1.India\n 2.Pakistan\n 3.Usa\n";
	cin>>user;
	if(user==1){
		cout<<"Welcome to India portal \n";
		obj.login();
		
	}
	else if(user==2){
		cout<<"Pakistan";
	}
	else if(user==3){
		cout<<"USA";
	}
	else {
		cout<<"try more\n";
		main();
	}
	
	
	
	
	
	return 0;
}
