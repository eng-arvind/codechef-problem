#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#include<unordered_map>
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
    ll w,h,n,m;
    cin>>w>>h>>n>>m;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    cin>>v[i];
    vector<ll> arr(m);
    for(ll i=0;i<m;i++)
    cin>>arr[i];
    ll i,j;
  unordered_map<int, int> m1, m2;
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
        ll dst=abs(v[i]-v[j]);
        m1[dst]++;
      }
    }
    for(i=0;i<m-1;i++)
    {
      for(j=i+1;j<m;j++)
      {
        ll dst=abs(arr[i]-arr[j]);
        m2[dst]++;
      }
    }
    ll ans=0;
    for (auto i = m1.begin(); i != m1.end(); i++)
    {
         if (m2.find(i->first) != m2.end())
          {
             ans += (i->second * m2[i->first]);
         }
    }
    cout<<ans<<endl;
    return 0;
  }
