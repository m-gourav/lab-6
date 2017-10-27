#include<iostream>
	#include<cstdio>
	#include<string>
	using namespace std;
	int main() {
		cout<<" create a string and store your name in it, use a loop to print string character by character using the normal index method as well as the pointer method ";
		char name[50];
		char *nameptr;
		cout<<" \nEnter your name: ";
		cin.getline(name,50);
		for(int i=0;name[i]!='\0';i++)
		{
			cout<<name[i];
			} 
			nameptr=name;
			cout<<nameptr;
			cout<<endl;
			}
			
