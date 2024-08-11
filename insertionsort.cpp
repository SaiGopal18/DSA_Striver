#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int j = i;
		while(j>0 && arr[j-1]>arr[j])
		{
			int temp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter the No of Elements in Array:";
	cin >>n;
	int arr[n];
	cout<<"Enter the Elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin >>arr[i];
	}
	insertionsort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
