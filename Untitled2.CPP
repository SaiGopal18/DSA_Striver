#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cout<<"Enter the Number of Elements in Array:"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
    cout<<"The Elements in an Array are:";
    for (int i=0; i<n; i++) 
	{
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int hash[13] = {0};
    for (int i = 0; i < n; i++) 
	{
        hash[arr[i]] += 1;
    }

	for (int i=0; i<13; i++) 
	{
        cout<<"The value of "<<i<<":"<<hash[i]<<endl;
    }

	
    return 0;
}
