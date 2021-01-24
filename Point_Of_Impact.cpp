#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define mk make_pair
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
        ll n,k,x,y;
        cin>>n>>k>>x>>y;
        vector<pair<int,int> > v;
        if(x==y)
            cout<<n<<" "<<n<<endl;
        else if(x>y)
        {
            
            v.pb(mk(n,n-x+y));
            v.pb(mk(n-x+y,n));
            v.pb(mk(0,v[1].second-v[1].first));
            v.pb(mk(v[2].second,v[2].first));
            ll index;
            index=(k-1)%4;
            cout<<v[index].first<<" "<<v[index].second<<endl;
        }
        else if(x<y)
        {
            v.pb(mk(n-y+x,n));
            v.pb(mk(n,n-y+x));
            v.pb(mk(v[1].first-v[1].second,0));
            v.pb(mk(v[2].second,v[2].first));
            ll index;
            index=(k-1)%4;
            cout<<v[index].first<<" "<<v[index].second<<endl;
        }
        // for (int i = 0; i < 4; ++i)
        // {
        //     cout<<v[i].first<<" "<<v[i].second<<endl;
        // }
    }

    return 0;
  }