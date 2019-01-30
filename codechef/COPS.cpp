#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define ios ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main()
{
    ios;
    ll t; // number of testcases
    cin>>t;
    while(t--)
    {   
        /**
         * l -> range towards left cop_i can conver
         * r -> range towards right cop_i can conver
         * i and j are normal loop variables
         */
        ll x,y,l,r,i,j,n,num;
        vector<int> v(101,0);
        cin>>n>>x>>y;
        ll a[n];

        /** input cop house numbers */
        for(i=0;i<n;++i)
            cin>>a[i];

        /** for each cop */
        for(i=0;i<n;++i)
        {
            // find the left most house the cop_ can cover
            if(a[i]-x*y>0)
                l=a[i]-x*y;
            else
                l=1;

            // find the right most house the cop_i can cover
            if(a[i]+x*y<101)
                r=a[i]+x*y;
            else
                r=100;
            
            // mark all the houses from left to right as unsafe or cop hoses where the thief cannot hide
            for(j=l;j<=r;++j)
                v[j]=1;
        }

        // count safe houses
        num=0;
        for(i=1;i<101;++i)
        {
            if(v[i]==0)
            num++;
        }
        cout<<num<<"\n";
    }
}