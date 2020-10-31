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
bool solve(ll n, vector<ll> &v)
{
  for(ll i=0;i<n-1;i++)
  {
    if((v[i] & v[i+1])<=0)
    return false;
  }
  return true;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      if(!(n&(n-1)) && n>1)
      {
        cout<<"-1"<<endl;
        continue;
      }
      if(n==1)
      {
        cout<<"1"<<endl;
        continue;
      }
      if(n==3)
      {
        cout<<"1 3 2"<<endl;
        continue;
      }
      if(n==5)
      {
        cout<<"2 3 1 5 4"<<endl;
        continue;
      }
      if(n==6)
      {
        cout<<"1 3 2 6 4 5"<<endl;
        continue;
      }
      vector<ll> v;
      v.pb(1);
      v.pb(3);
      v.pb(2);
      v.pb(6);
      v.pb(4);
      v.pb(5);
      for(ll i=7;i<=n;i++)
      {
        ll bk=v.back();
        v.pop_back();
        ll k1=v.back();
        if((!(bk&(bk-1))) && (bk&k1)<=0)
        {
          v.pb(i);
          v.pb(bk);
        }
        else
        {
              v.pb(bk);
              v.pb(i);
        }

      }
      for(ll i=0;i<v.size();i++)
      cout<<v[i]<<" ";
      cout<<endl;
    }
    return 0;
  }
