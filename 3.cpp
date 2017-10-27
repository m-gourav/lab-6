#include<iostream>
	using namespace std;
	main() {
		int array[10];
		cout<<" \nEnter the elements of the array";
		for(int i=0;i<10;i++)
		{
			cout<<" \nElement "<<(i+1)<<": ";
			cin>>array[i];
			}
			cout<<" \nPRINTING THE ARRAY BY INDEX METHOD";
			for(int i=0;i<10;i++)
			{
				cout<<" \n "<<array[i];
				}
				int *ptrarray;
				ptrarray=array;
				cout<<" \nPRINTING THE ARRAY BY POINTER ACCESSING METHOD";
				for(int i=0;i<10;i++)
				{
					cout<<" \n "<<*ptrarray;
					ptrarray++;
					}
					}
