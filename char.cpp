#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter any character";
	cin>>ch;
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		cout<< ch <<"is a alphabet";
	}
	else if(ch>='0'&&ch<='9')
	{
		cout<< ch <<"is a digit";
	}
	else
	{
		cout<<"is a special character";
	}
	return 0;
	
}