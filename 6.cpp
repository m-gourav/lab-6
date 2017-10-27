#include<stdio.h>
	#include<iostream>
	#include<string>
	using namespace std;
	main(void) {
		char str[20],*p;
		cout<<" input about 10 characters of string ";
		cin>>str;
		int len=0;
		for(;str[len]!='\0';len++);
		p=str+(len-1);
		cout<<" the required output: \n ";
		for(int i=0;i<len;i++)
		{
			cout<<p<<endl;
			p--;
			}
			}
