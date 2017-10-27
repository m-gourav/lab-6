#include<iostream>
	using namespace std;
	int Strlen(char ch[])
	{
		int i;
		for(i=0;ch[i]!='\0';i++);
		return i;
		}
		void Strcat(char st1[],char st2[])
		{
			int x=0;
			for(;st1[x]!='\0';x++);
			for(int y=0;st2[y]!='\0';y++,x++)
			{
				st1[x]=st2[y];
				}
				st1[x]='\0';
				cout<<" \nconcatenated String is: "<<st1;
				}
				int Strcmp(char st1[], char st2[])
				{
					int t=0;
					while(st1[t]==st2[t])
					{
						if(st1[t]=='\0' || st2[t]=='\0')
						break;
						t++;
						}
						if(st1[t]=='\0' && st2[t]=='\0')
						return 0;
						else
						return 1;
						}
						int main()
						{
							char str1[20], str2[20];
							cout<<" \nenter the first string: ";
							cin>>str1;
							cout<<" \nenter the second String: ";
							cin>>str2;
							int flag=Strcmp(str1,str2);
							cout<<" \ncomparing the strings we find: ";
							if(flag==0)
							cout<<" both the strings are equal";
							else
							cout<<" both the strings are unequal";
							cout<<" \nthe length of string1 and string2 respectively is: "<<Strlen(str1)<<" and "<<Strlen(str2);
							Strcat(str1,str2);
						}

