#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}
void pattern2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n)
{
     for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n+1-i);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n)
{

    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<(n-i-1);j++)
        {
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<(n-i-1);j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    
}
void pattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*n-2*i-1);j++)
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
void pattern9(int n)
{
    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<(n-i-1);j++)
        {
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<(n-i-1);j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*n-2*i-1);j++)
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
void pattern10(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        if(i==5) break;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                cout<<"*";
            }
           
            cout<<endl;
        }
}
void pattern11(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(j%2==0) cout<<"0";
            else cout<<"1";
        }
        cout<<endl;
    }
}
void pattern12(int n)

{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        //spaces
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
        cout<<j;
        }
        cout<<endl;
    }
}
void pattern13(int n)
{
    int num=1;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}
void pattern14(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(char ch='A';ch<'A'+i;ch++)
        {
            cout<<ch;
            
            
        }
        cout<<endl;
    }
}
void pattern15(int n)
{
    for(int i=1;i<=n;i++)
    {
        char num='A';
        for(int j=n;j>=i;j--)


        {
            cout<<num<<" ";
            num+=1;
            
            
            
        }
        cout<<endl;
    }
}
void pattern16(int n)
{
    char nums ='A';
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=i;j++)
        {
            cout<<nums;
        }
        nums+=1;
        cout<<endl;
    }
}
void pattern17(int n)
{
    for(int i=1;i<=n;i++)
    {
    //spaces
        char nums='A';
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        int k = (2*i+1)/2;
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<nums;
            if(j<k) nums++;
            else nums--;
           
            
            
        }
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        
       


            cout<<endl;
       
    }
}
void pattern18(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        
        
        for(char j='A'+n-i;j<'A'+n;j++)
        {
            cout<<j;
            

        }
        cout<<endl;
    }
}
void pattern19(int n)
{
    for(int i=0;i<n;i++)
    {
        //first-stars
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        //spaces
        for(int j=0;j<=2*(i)-1;j++)
        {
            cout<<" ";
        }
        //second-stars
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        //first-stars
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        //spaces
        for(int j=0;j<2*n-2*i-2;j++)
        {
            cout<<" ";
        }
        //second-stars
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}
void pattern20(int n)
{
    for(int i=1;i<2*n;i++)
    {
        int stars=0;
        if(i<=n)  stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        //spaces
        int spaces =0;
        if(i<=n) spaces = 2*n-2*i;
        else spaces =(i-n)*2;
        
        for(int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }


        cout<<endl;
        
    }
}
void pattern21(int n)
{
   for(int i=1;i<=n;i++)
   {
    int stars=0;
    if(i==1 || i==n){
    for(int j=1;j<=n;j++)

    {
        cout<<"*";
    }
    }
    else {
        for(int j=1;j<=1;j++)
        {
            cout<<"*";

        }
        for(int j=1;j<=n-2;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=1;j++)
        {
            cout<<"*";
        }
    }
    
    cout<<endl;

   } 
}
void pattern22(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int top=i;
            int left =j;
            int bottom=(2*n-2)-i;
            int right =(2*n-2)-j;
            cout<<n-min(min(top,bottom),min(left,right));


        }
        cout<<endl;
    }
    }
int main()

{
    int n;
    n=6;
    pattern22(n);
    return 0;
}