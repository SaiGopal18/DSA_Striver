#include<bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
        for(int j;j>0;j++)
		{
			cout<<"*";
		}
        for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}

}
int main()
{
    int n,t;
    cin>>t;
    for(int i=0;i<=t;i++)
    {
        cin>>n;
        print1(n);
    }
    return 0;   
}

