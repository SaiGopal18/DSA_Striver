	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int n;
		int arr[n];
		cout<<"Enter the Number of Elements:"<<endl;
		cin >>n;
		for(int i=0;i<n;i++)
		{
			cin >>arr[i];
		}
		cout<<"Elements are:"<<endl;
		for(int i=0;i<n;i++)
		{
			
			cout<<arr[i]<<" ";
			
		}
		cout<<endl;
		int hash[12]={0};
		
		for(int i=0;i<n;i++)
		{
			hash[arr[i]] += 1;
		}
		int q;
		cin >> q;
		while(q--)
		{
			int number;
			cin >>number;
			cout<<hash[number]<<endl;
		}
		
		
		return 0;
		
	}
