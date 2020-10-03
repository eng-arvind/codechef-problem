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
ll easy(ll n,ll k,vector<ll> v)
{
    ll carry=0,i;
  for(i=0;i<n;i++)
  {
    v[i]+=carry;
    if(v[i]<k)
    return i+1;
    carry=v[i]-k;
  }
  if(carry)
  return i+carry/k+1;
  else
  return i;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      ll k;
      cin>>k;
      vector<ll> v;
      for(ll i=0;i<n;i++)
      {
        ll a;
        cin>>a;
        v.pb(a);
      }
      cout<<easy(n,k,v)<<endl;
    }
    return 0;
  }
