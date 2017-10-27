#include<stdio.h>
	#include<iostream>
	#include<string>
	using namespace std;
	main(void) {
		char  str[20], *p;
		cout<<" input about 10 characters of string ";
		cin>>str;
		int len=0;
		for(;str[len]!='\0';len++);
		p=str;
		cout<<" \nthe name is: "<<p<<" \n ";
		for(int i=0;i<len;i++)
		{
			cout<<p<<endl;\
			p++;
			}
			}
