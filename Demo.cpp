#include<bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for(int i=1;i<=n;i++)
    {
      
      int num =n;
      
	    for(int j=1;j<=n;j++)
        {
            
            cout<<"*";
        }
        num-=2;
        cout<<endl;
    }

}
int main()
{
	int n=5;
    print1(5);
    return 0;
}
