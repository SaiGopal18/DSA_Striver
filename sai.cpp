#include<bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for(int i=1;i<=2*n-1;i++)
	{
		int stars = i;
		if(i>n) stars=(2*n)-i;
		for(int j=1;j<=stars;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
//		if(i>n) 
//		{
//		
//	
//			for(int j=1;j<=(2*n)-i;j++)
//			{
//				cout<<"*";
//			}
			
		}	
		
	

int main()
{
    int n;
            cin>>n;
        print1(n);
        //print2(n);
        return 0;
    }
       



