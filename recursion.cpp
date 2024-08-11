#include<bits/stdc++.h>
using namespace std;
//int k=1;
// void rec()

// {
//     //int n=1;
//     cout<<n<<endl;
//     n++; 
    
//     while(n<10)
//     {
//         rec();
//             }

// }
// // void fun(int n)
// {
//     cout<<k<<" ";
//     k++;
//     if(k>n) return;
//     else fun(n);

// }
void printName(int n)
{
   
    
    if(n<=0) return;
     //This is called as a backtracking

     printName(n-1);
    cout<<n<<" ";
}
int sumusingrecursion(int n)
{
    
    if(n==0)  return 1;

    
    
    //sumusingrecursion(n-1);
    return n*sumusingrecursion(n-1);
    //return pow(n,3)+pow(sumusingrecursion(n-1),3);

}
void swappingarrays(int i,int arr[],int n)
{
    if(i>=(n/2)) return;
    swap(arr[i],arr[n-i-1]);
    swappingarrays(i+1,arr,n);
}
bool palindromecheck(int i,string &s)
{
    if(i>=(s.size()/2)) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return palindromecheck(i+1,s);
     
};
void check(string &s) {
    cout<<s.erase()<<endl;
    cout<<s<<endl;
        
    }
int fibanocciseries(int n)
{
    int one;
    int last;
    if(n<=1)
    {
        return n;
    }
    else
     one = fibanocciseries(n-1);
     last = fibanocciseries(n-2);
    return one + last ;
}
int main()
{
    // int res=fibanocciseries(8);
    // cout<<res<<endl;
    string s="Sai Gopal: Hello";
    check(s);
    return 0;
//     //int n=5;
//    // cin>>n;
   
//       string s="mam";
      
//     cout<<check(s);
//     if(check(s)==0) cout<<"false";
//     else cout<<"true";
//    //cout<< palindromecheck(i,s);
// //    if(palindromecheck(i,s)==1) cout<<"false";
// //    else cout<<"true";
// // //    int arr[n];
// //    for(int i=0;i<n;i++) cin>>arr[i];
// //     swappingarrays(0,arr,n);
// //     //cout<<x;
// //     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//      return 0;
}