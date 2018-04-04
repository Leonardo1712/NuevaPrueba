// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int aux;

	cout<<"Select a number 1) 2) ... " <<endl;
	cin>>aux;

	if(aux==1)
	{
		cout<<"You selected number 1 "<<endl;
	}else if(aux==2)
	{
		cout<<"You selected number 2"<<endl;
	} else 
		cout<<"ERROR"<<endl;
	return 0;
}
