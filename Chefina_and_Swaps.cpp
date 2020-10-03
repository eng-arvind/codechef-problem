#include <iostream>
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
#define vi vector<long long int>
#define mii unordered_map<long long int,long long int>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(t) int t; cin>>t; while(t--)
#define ll long long int
using namespace std;

int main() {
  //  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
      while(t-->0)
      {
        ll n;
        cin>>n;
        vi a;
        ll md=(ll)1e10;
        mii um;
        for(ll i=0;i<n;i++)
        {
          ll x;
          cin>>x;
          a.pb(x);
          um[a[i]]++;
          md=min(md,a[i]);
        }
          vi b;
        for(ll i=0;i<n;i++)
        {
          ll y;
          cin>>y;
          b.pb(y);
          um[b[i]]++;
          md=min(md,b[i]);
        }
        mii ans;
        bool pos=1;
        for(auto x : um)
        {
          if(x.s % 2)
          {
            pos=0;
            break;
          }
          else
          {
            ans[x.f] = x.s /2;
          }
        }
        if(!pos)
        {
          cout<<"-1"<<endl;
          continue;
        }
        mii final=ans;
        vi v,v1;
        for(ll i=0;i<n;i++)
        {
          if(final[a[i]])
          final[a[i]]--;
          else
          v.pb(a[i]);
        }
        final=ans;
        for(ll i=0;i<n;i++)
        {
          if(final[b[i]])
          final[b[i]]--;
          else
          v1.pb(b[i]);
        }
        if(v.size()==0)
        {
        cout<<"0"<<endl;
        continue;
       }
       ll put=0;
        sort(v.begin(),v.end());
        sort(v1.rbegin(),v1.rend());
        for(ll i=0;i<v.size();i++)
        {
          put+=min(2*md,min(v[i],v1[i]));
        }
        cout<<put<<endl;
        // for(ll j=0;j<a.size();j++)
        //   cout<<a[j]<<" ";
        //   cout<<endl;
        // for(ll j=0;j<b.size();j++)
        //   cout<<b[j]<<" ";
        // cout<<"\n";
      }
    return 0;
  }
