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
#define ll int
using namespace std;
ll solve(ll v[],ll n,ll x,ll p,ll k)
{
  if(v[p-1]==x)
  return 0;
  else if(k>=p && v[p-1]>=x)
  {
    ll op=0;
    for(ll i=p-1;i>=0;i--)
    {
      if(v[i]>x)
      op++;
    }
    return op;
  }
  else if(p>=k && v[p-1]<=x)
  {
    ll op=0;
    for(ll i=p-1;i<n;i++)
    {
      if(v[i]<x)
      op++;
    }
    return op;
  }
  else
  return -1;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,x,p,k;
      cin>>n>>x>>p>>k;
      ll v[n];
      for(ll i=0;i<n;i++)
      {
        // ll a;
        cin>>v[i];
        // v.pb(a);
      }
      sort(v,v+n);
      cout<<solve(v,n,x,p,k)<<endl;

}
    return 0;
  }
