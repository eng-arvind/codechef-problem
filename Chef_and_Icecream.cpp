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
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(t) int t; cin>>t; while(t--)
#define ll long long int
using namespace std;
ll chef_icecream(vector<ll> a,ll n)
{
  int f_coins=0,t_coins=0,h_coins=0;
  for(ll i=0;i<n;i++)
  {
    if(a[i]==5)
    f_coins++;
    else if(a[i]==10)
    {
      if(f_coins>0)
      {
        f_coins--;
        t_coins++;
      }
      else
      return 0;
    }
    else
    {
      if(t_coins>0)
      {
        t_coins--;
      }
      else if(f_coins>=2)
      {
        f_coins-=2;
      }
      else
      return 0;
    }
  }
  return 1;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      w(t)
      {
          ll n;
          cin>>n;
           vi a;
          for(ll i=0;i<n;i++)
          {
            int b;
            cin>>b;
            a.pb(b);
          }
          if(chef_icecream(a,n))
          cout<<"YES"<<endl;
          else
          cout<<"NO"<<endl;
      }
    return 0;
  }
