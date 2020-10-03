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
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      vector<ll> v;
      for(ll i=0;i<n;i++)
      {
        ll a;
        cin>>a;
        v.pb(a);
      }
      if(n==1)
      {
        cout<<1<<" "<<1<<endl;
        continue;
      }
      vector<ll> ans;
      for(ll i=1;i<=n;i++)
      {
        ans.pb(1);
      }
      unordered_map<ll,ll> m;
      for(ll i=0;i<n;i++)
      {
        if(m.find(v[i])!=m.end() && v[i]!=0)
        m[v[i]]++;
        else
        m[v[i]]=1;
      }
      for(ll i=0;i<n;i++)
      {
        ll a1=v[i];
        ll fs = m[a1];
        if(ans[i]<fs)
        {
          ans[i]=fs;
        }
      }
      for(ll tt=1;tt<=n;tt++)
      {
      vector<ll> v1;
      unordered_map<ll,ll> m1;
      for(ll i=0;i<n;i++)
      {
        ll fb = (i+1)+v[i]*tt;
        v1.pb(fb);
        if(m1.find(fb)!=m1.end())
        m1[fb]++;
        else
        m1[fb]=1;
      }

      for(ll i=0;i<n;i++)
      {
        ll a1=v1[i];
        ll fs = m1[a1];
        if(ans[i]<fs)
        {
          ans[i]=fs;
        }
      }
    }
      sort(ans.begin(),ans.end());
      cout<<ans[0]<<" "<<ans[ans.size()-1]<<endl;
      }
    return 0;
  }
