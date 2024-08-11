#include<bits/stdc++.h>
using namespace std;
void print_details()
{
    //Algorithms
    //Containers
    //Functions
    //Interators
    pair<int,int> p ={1,2};
    pair<string,string> p2 ={"sai","gopal"};
    pair <int,int> arr[] = {{1,2},{3,4}};
    //                      arr[0], arr[1]
    //                      0.first,0.second
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<arr[0].first;

    
    
    }
    void print_details2()
    {
        vector<int> vc;
        vc.emplace_back(1);
        vector<int> vc2(5,10);
        vc2.emplace_back(200);
        cout<<vc2[2]<<endl;
        cout<<vc2.back()<<endl;
        for(auto it=vc2.end()-1;it!=vc2.begin();it--)
        {
            cout<<*(it)<<" ";
        }
        for(auto it:vc2)
        {
            cout<<(it)<<endl;
        }

    }
    
    
    int main()
    {
        print_details2();

    }
