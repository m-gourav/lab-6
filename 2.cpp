#include<iostream>
	using namespace std;
	main() {
		int a=0,b=0;
		int *p;
		p=&a;
		b=*p;
		cout<<" \nValue of \"a\" is: "<<a;
		cout<<" \nValue of \"b\" is: "<<b;
		cout<<" \nValue of *p is: "<<p;
		a=2;
		b=3;
		cout<<" \nValue of \"a\" is: "<<a;
		cout<<" \nValue of \"b\" is: "<<b;
		cout<<" \nValue of *p is: "<<p;
		p=&b;
		cout<<" \nValue of \"a\" is: "<<a;
		cout<<" \nValue of \"b\" is: "<<b;
		cout<<" \nValue of *p is: "<<p;
		}
