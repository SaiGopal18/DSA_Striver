#include <bits/stdc++.h>
using namespace std;

void pattern10(int n)
{
	for(int i=0;i<n;i++)
	{
		//char num='A';
		for(int j=0;j<(n-i-1);j++)
		{
			cout<<" ";
		}
		char num='A';
		for(int j=1;j<=2*i+1;j++)
		{
			
			int point = (2*i+1)/2;
			//cout<<num;
			if(j<=point)
			{
				cout<<num++;
			}
			else 
			cout<<num--;
			
			
			
		}
		
		for(int j=0;j<(n-i-1);j++)
		{
			
			cout<<" ";
		}
		//num+=1;
		cout<<endl;
	}
}

void pattern11(int n)
{
	
	for(int i=1;i<=n;i++)
	{
		//char num='E'-i+1;
		
		for(char ch='E';ch>='E'-i+1 ;ch--)
		{
			//num-=j-1;
			cout<<ch<<" ";
			
		}
		cout<<endl;
	}
}

void print12(int n)

{
	int in=0;
	for(int i=0;i<(n);i++)
	{
		
		for(int j=0;j<(n-i);j++)
		{
			cout<<"*";
		}
		for(int j=0;j<in;j++)
	{
			cout<<" ";
		}
		for(int j=0;j<(n-i);j++)
		{
			cout<<"*";
		}
		in += 2;
		cout<<endl;
		
		}
		in = 8;
		for(int i=1;i<=(n);i++)
		{
			
			for(int j=1;j<=i;j++)
			{
				cout<<"*";
			}
			for(int j=0;j<in;j++)
			{
				cout<<" ";
			}
			for(int j=0;j<i;j++)
			{
				cout<<"*";
			}
			in-= 2;
			cout<<endl;
			
		}

}

void print13(int n)
{
	
	int space = 2*n-2;
	
	for(int i=1;i<=(2*n-1);i++)
	{
		int stars = 1;
	if(i>n) stars=n*2-i;
	else stars = i;
		for(int j=1;j<=stars;j++)
		{
			cout<<"*";
		}
		for(int j=1;j<=space;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=stars;j++)
		{
			cout<<"*";
		}
		if(i>=n) space += 2;
		else space -= 2;
		cout<<endl;
		
	}
}

void print14(int n)
{

	for(int i=1;i<=n;i++)
	
	{
		
		for(int j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n)  cout<<"*";
			else cout<<" ";
		}
		
		cout<<endl;
		
		}
	}
	
void print15(int n ){
	for(int i=1;i<=(2*n);i++){
	
	
	for(int j=1;j<=(2*n);j++)
	{
		int top = i;
		int left = j;
		int right =(2*n-2)-j;
		int down =(2*n-2)-i;
		cout<<n-(min(min(top,down),min(left,right)));
		
		
		}	
		cout<<endl;
	
	}
}
		

int main()
{   
   
    int n = 5;
    //pattern10(n);
     //pattern11(n);
     print15(n);


    return 0;
}
