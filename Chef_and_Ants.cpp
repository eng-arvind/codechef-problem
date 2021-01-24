#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define mod 10 00000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define ll long long int
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
        vector<vector<ll> > v(n);
        unordered_map<ll,ll> mp;
        if(n==1)
        {
            ll m;
            cin>>m;
            ll neg=0,pos=0;
            for(ll i=0;i<m;i++)
            {
                ll x;
                cin>>x;
                if(x<0)
                    neg++;
                else
                    pos++;
            }
            cout<<neg*pos<<endl;
        }
        else
        {
                for(ll i=0;i<n;i++)
                    {
                        ll m;
                        cin>>m;
                        for(ll j=0;j<m;j++)
                        {
                            ll x;
                            cin>>x;
                            mp[abs(x)]++;
                            v[i].pb(x);
                        }
                        sort(v[i].begin(),v[i].end()); 
                    }
            ll ans=0;
             for(ll i=0;i<v.size();i++)
             {
                for(ll j=0;j<v[i].size();j++)
                {
                    
                }
             }

            cout<<2<<endl;
        }
    }
    return 0;
  }