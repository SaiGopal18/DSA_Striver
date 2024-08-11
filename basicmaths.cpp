    #include<bits/stdc++.h>
    using namespace std;
    void countintegers(int n)
    {

        int count=0;
        int start=0;
        int it=n;
        
        while (n>0)
        {
            /* code */
            start=n%10;
            if(start!=0 && it%start==0) count++;
            n=n/10;
            //cout<<it<<endl;
            
        }
        cout<<count<<endl;
        


    }
    void reversenumber(int n)
    {
        int revnum =0;
        int it = n;
            while(it>0)
            {
                int start=it%10;
                
                it=it/10;
                revnum=(revnum*10)+start;
                

            }
            cout<<revnum<<" "<<n<<endl;
            if(revnum!=n) cout<<"not palindrome";
            else cout<<"a palindrome";
    }
    int amstrongnum(int n)
    {
        long long dup=n;
        long long res=0;
        int k;
        //int k=to_string().length();
        while(n>0)
        {
            long long start =n%10;
            res += pow(start,k);
            n = n/10;
        }

        if(res!=dup) return 0;
        else return 1;

    }
    void caldivisor(int n)
    {
        int count=0;
        int count1=0;
        int count2=0;


        for(int i=1;i<=sqrt(n);i++)
        {
        
            if(n%i==0)
            {
                count +=i;
                if((n/i)!=i)
                {
                    count2 +=i;

                }
            }
            for(int j=1;j<=(n-i);j++)
            {
                if((n-i)%j==0) count1 += j;
            }
            
            
            
            
        }
        cout<<count+count1+count2<<endl;

    }
    void primenumber(int n)
    {
        //time complexity of this is 0(root(n))
        int cnt=0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            /* code */
            if(n%i==0) cnt++;
            {
                if((n/i)!=1) cnt++;
             }
        }
        if(cnt==2) cout<<"prime";
        else cout<<"not prime";
        

    }
    void calculategcd(int n,int m)
    {
        //decreasing the time complexity
        int res=1;
        for (int i = 1; i <=min(n,m); i++)
        {
            /* code */

        if(n%i==0 && m%i==0) res = i;

        }
        cout<<res;
        

    }
    void calculateusingeuclidian(int n,int m)
    {
        //we are using euclidian algo to decrease the complexity
        // gcd(int a,int b) = gcd(a-b,b)
        while(n>0 && m>0)
        {
            if(n>m) n=n%m;
            else m=m%n;
        }
        //cout<<"n:"<<n<<"m:"<<m<<endl;
        if(n==0) cout<<m;
        else cout<<n;
    }
    void calculatelcmandgcd(int a,int b)
    {
                int lcm,gcd;
                int oa=a;
                int ob=b;
                lcm==gcd==0;
                while(a>0 && b>0)
                {
                    if(a>b) a=a%b;
                    else b=b%a;
                    if(a==0) gcd=b;
                else gcd =a;

                }
                int lcm = (oa*ob)/b;

                gcd=(oa*ob)/gcd;
                cout<<lcm<<" "<<b<<endl;
            }
    int main()
    {
        int n=14;
        int m=8;
    //    int result = amstrongnum(n);
    //    if(result ==1) cout<<"Amstrong number";
    //    else cout<<"Not an Amstrong";
    //caldivisor(n);
       // primenumber(n);
       calculatelcmandgcd(n,m);
        return 0;
    }
