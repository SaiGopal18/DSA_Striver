#include<bits/stdc++.h>
using namespace std;
	void addNumbers(int &x)
	{
		x+=5;
		cout<<x<<endl;
		x+=10;
		cout<<x<<endl;
}
int  main()
{
	int x=10;
	//cin>>x>>y;
	addNumbers(x);
	cout<<x;
	return 0;
}
