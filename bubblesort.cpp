#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
	for(int i=n-1;i>=1;i--)
	{
		for(int j=0;j<=i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
}
int main()
{
	int n;
	cout<<"Enter the Number of Elements:"<<endl;
	cin >> n;
	int arr[n];
	cout<<"Enter Elements of Array:";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	bubblesort(arr,n);
	cout <<"Elements After Sorting:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
