#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string s;
	cout<<"Enter the String:"<<endl;
	cin >>s;
	int hash[255] ={0};
	for(int i=0;i<s.size();i++)
	{
		hash[s[i]]++;
		
	}
	char c;
	cout<<"Enter the Charecter to Get No of Occurences of it:"<<endl;
	cin >>c;
	cout<<hash[c];
	return 0;
}
