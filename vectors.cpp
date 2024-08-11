#include<bits/stdc++.h>
using namespace std;
void print_details()
{
    vector <int> v(5,10);
    for(auto i = v.begin() ; i!=v.end() ; i++)
    {
        cout<<*(i)<<" ";
        
    }
    cout<<endl;
    v.erase(v.begin()+1);
    for(auto i = v.begin() ; i!=v.end() ; i++)
    {
        cout<<*(i)<<" ";
        
    }
    cout<<endl;
    v.insert(v.begin(),30);
    for(auto i = v.begin() ; i!=v.end() ; i++)
    {
        cout<<*(i)<<" ";
        
    }
    cout<<endl;
    v.insert(v.begin()+1,4,25);
    for(auto i = v.begin() ; i!=v.end() ; i++)
    {
        cout<<*(i)<<" ";
        
    }
    cout<<endl;
    cout<<v.size()<<endl;
    v.pop_back();
    for(auto i = v.begin() ; i!=v.end() ; i++)
    {
        cout<<*(i)<<" ";
        
    }
    cout<<endl;
    vector <int> v2;
    v.swap(v2);
    for(auto i = v.begin() ; i!=v.end() ; i++)
    {
        cout<<*(i)<<" ";
        
    }
    cout<<endl;
    for(auto i = v2.begin() ; i!=v2.end() ; i++)
    {
        cout<<*(i)<<" ";
        
    }

    cout<<endl;
    cout<<v2.empty();
    v2.clear();

}
void printlist()
{
    list<int>sai(5,25);
    for(auto it=sai.begin();it!=sai.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    sai.emplace_front(199);
    for(auto it=sai.begin();it!=sai.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<sai.size()<<endl;
    sai.reverse();
    for(auto it=sai.begin();it!=sai.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    
    

}
void printstack()
{
    stack<string>names;
    names.push("kuldeep");
    names.push("arshdeep");
    names.push("bumrah");
    names.push("jadeja");
    names.push("hardik");
    names.push("axar");
    names.push("dubey");
    names.push("surya");
    names.push("panth");
    names.push("rohit");
    names.push("virat");
    cout<<names.size()<<" "<<names.top()<<endl;
    names.pop();
    cout<<names.size()<<" "<<names.top()<<endl;
    names.pop();
    cout<<names.size()<<" "<<names.top()<<endl;
    names.pop();
    cout<<names.size()<<" "<<names.top()<<endl;
    names.pop();
    cout<<names.size()<<" "<<names.top()<<endl;
    names.pop();
    cout<<names.size()<<" "<<names.top()<<endl;
    names.pop();
    cout<<names.size()<<" "<<names.top()<<endl;
    names.pop();
    cout<<names.size()<<" "<<names.top()<<endl;
    names.pop();
    cout<<names.size()<<" "<<names.top()<<endl;
    names.pop();
    cout<<names.size()<<" "<<names.top()<<endl;
    names.pop();
    cout<<names.size()<<" "<<names.top()<<endl;
    names.pop();
    cout<<names.size();

    
}
void printqueue()
{
    //FIFO --> First In First Out
    queue<int>qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    qu.push(6);
    qu.push(7);
    qu.push(8);
    qu.push(9);
    qu.push(10);
    cout<<qu.front()<<endl;
    cout<<qu.back();
}
void printpriorityqueue()
{
    priority_queue<int>ls;
    ls.push(10);
    ls.push(20);
    ls.push(30);
    ls.push(40);
    ls.push(50);
    ls.push(600);
    ls.push(70);
    ls.push(80);
    ls.push(90);
    ls.push(100);
   cout<<"1. "<< ls.top()<<endl;
   priority_queue<int,vector<int>,greater<int>> hyd;
   hyd.push(12);
   hyd.push(18);
   hyd.push(2);
   hyd.push(122);
   hyd.push(9);
   cout<<hyd.top()<<endl;
   hyd.pop();
   cout<<hyd.top()<<endl;
   hyd.pop();
   cout<<hyd.top()<<endl;
   hyd.pop();
   cout<<hyd.top()<<endl;




}
void printset()
{
    //set is unique and  sorted so that it maintains only 1 occurence of the value
    set<int>ar;
    ar.emplace(5);
    ar.emplace(9);
    ar.emplace(3);
    ar.emplace(18);
    ar.emplace(3);
    for (auto it = ar.begin(); it!=ar.end(); it++)
    {
        /* code */
        cout<<*(it)<<" ";
    }
    cout<<endl;
    auto it=ar.find(3);
    cout<<ar.count(13);
    //cout<<ar.lower_bound
    ar.erase(it);
    cout<<endl;
    for (auto it = ar.begin(); it!=ar.end(); it++)
    {
        /* code */
        cout<<*(it)<<" ";
    }
    
    
}
void printbinarysearch()
{
    set<int>hi;
    hi.emplace(5);
    hi.emplace(4);
    hi.emplace(9);
    hi.emplace(2);
    int n=hi.size();
    auto it =hi.lower_bound(9);
    if(it!=hi.end())
    {
        cout<<"Exist    "<<*(it);
    }
    else cout<<"doesnt exist";
}
void printmultiset()
{
    //it maintains mutliple occurences but sorted
    multiset<int> ml;
    ml.insert(2);
    ml.insert(4);
    ml.insert(5);
    ml.insert(2);
    ml.insert(25);
    ml.insert(2);
    for(auto it=ml.begin(); it!=ml.end(); it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    auto it =ml.find(2);
    ml.erase(it);
    
    for(auto it=ml.begin(); it!=ml.end(); it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
}
void printunorderedset()
{
    //maintains single occurences but not sorted
    //cannot execute lower and upper bound
    unordered_set<int>uo={1,2,5,8,1,6};
    for (auto it = uo.begin(); it!=uo.end(); it++)
    {
        /* code */
        cout<<*(it)<<" ";
    }
    cout<<endl;
    


}
void printmap()
{
    //key:value
    //key must unique where as values can be repeated
    //keys are sorted
    map<int,string>mp;
    mp.emplace(18,"Virat");
    mp.emplace(45,"Rohit");
    mp.emplace(17,"Risabh");
    mp.emplace(63,"Surya");
    mp.emplace(25,"Shivam");
    mp.emplace(33,"Hardik");
    mp.emplace(8,"Jadeja");
    mp.emplace(20,"Axar");
    mp.emplace(93,"Jasprit");
    mp.emplace(23,"Kuldeep");
    mp.emplace(2,"Arshdeep");
    
    for (auto it:mp)
    {
        cout<<"Jersey Number: "<<it.first<<" "<<"Player name: "<<it.second<<endl;
        /* code */
    }
    
    cout<<mp[18];
    
}
void printmultimap()
{
    //it is same as map but it doesnt maintain any uniqueness but maintains order
    multimap<int,string>ks;
    ks.emplace(18,"King");
    ks.emplace(17,"Chase-Master");
    ks.emplace(18,"Record-Breaker");
    ks.emplace(16,"GOAT");
    for(auto it:ks)
    {
        cout<<"Jersey Number : "<<(it.first)<<" Cricketer is:  "<<(it.second)<<endl;
    }

}
void printunorderedmap()
{
    unordered_map<int,string>ks;
     ks.emplace(18,"King");
    ks.emplace(17,"Chase-Master");
    ks.emplace(18,"Record-Breaker");
    ks.emplace(16,"GOAT");
    for(auto it:ks)
    {
        cout<<it.first<<" : "<<it.second<<endl;
    }

}
void sortvector()
    {
        vector<int>km;
        km.emplace_back(6);
        km.emplace_back(12);
        km.emplace_back(2);
        km.emplace_back(11);
        sort(km.begin(),km.end());
        for(auto it=km.begin();it!=km.end();it++)
        {
            cout<<*(it)<<" ";
            
        }
        cout<<endl;
        //to sort in the descending order we use the comparator
        sort(km.begin(),km.end(),greater<int>());
        for(auto it=km.begin();it!=km.end();++it)
        {
            cout<<*(it)<<" ";
            
        }
        cout<<endl;
    }
void createowncomparator()
{
    pair<int,int>ar[]={{2,5},{6,9},{7,5}};
//    // bool come(pair<int,int>p1,pair<int,int>p2){
//         if(p1.end<p2.end) return true;
//         if(p1.end>p2.end) return false;
//         if(p1.start>p2.end) return true;
//         else return false;
//         // it replaces the internally we need to write the funcitonality

//     }
    

}
void noofbits()
{
    int n=7;
    int cnt =__builtin_popcount(n);
    cout<<cnt;
}
void nextpermutation()
{
    string s="134";
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));
}
void maxelement()
{
    vector<int>kl={1,5,7,82,3,2};
    auto it = max_element(kl.begin(),kl.end());
    cout<<*(it)<<endl;
}
int main()
{
    //print_details();
    maxelement();
    return 0;
}