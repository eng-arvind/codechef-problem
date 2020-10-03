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
string covid_run(ll n,ll k,ll x,ll y)
{
  if(k==0)
  {
    if(x==y)
      return "YES";
     else
        return "NO";
  }
  if(k==1)
  {
    return "YES";
  }
  vector<ll> v(n);
  for(ll i=0;i<n;i++)
  v.pb(i);
  while(v[x]!=1)
  {
    if(x==y)
      return "YES";
    v[x]=1;
    x=(x+k)%n;
  }
  return "NO";
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,k,x,y;
      cin>>n>>k>>x>>y;
      cout<<covid_run(n,k,x,y)<<endl;
    }
    return 0;
  }
