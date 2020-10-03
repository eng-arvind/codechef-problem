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
#define vi vector<int>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(t) int t; cin>>t; while(t--)
#define ll long long int
using namespace std;
ll count=0;
ll solve(ll p,ll q,ll r,ll a,ll b,ll c)
{
  ll cnt=0;
  while(1)
  {
    ll mn=INT_MAX;
    if(p!=a)
    mn=a-p;
    if(q!=b)
    mn=min(mn,b-q);
    if(r!=c)
    mn=min(mn,c-r);
  //  cout<<mn<<endl;
    ll mn2=INT_MAX;
    if(p!=a)
    {
      if((a/p)!=0)
      mn2=a/p;
    }
    if(q!=b)
    {
      if((b/q)!=0)
      mn2=min(mn2,b/q);
    }

    if(r!=c)
    {
      if((c/r)!=0)
      mn2=min(mn2,c/r);
    }
    //cout<<mn2<<endl;
    if(((p*mn2<=a) || p==a) &&((q*mn2<=b) || q==b) && ((r*mn2<=c) || r==c) && mn2>1)
    {
      if(p!=a)
      p=p*mn2;
      if(q!=b)
      q=q*mn2;
      if(r!=c)
      r=r*mn2;
    }
    else
    {
      if(p!=a)
      p=p+mn;
      if(q!=b)
      q=q+mn;
      if(r!=c)
      r=r+mn;
    }
  //  cout<<"p="<<p<<" "<<"q="<<q<<" "<<"r="<<r<<endl;
   cnt=cnt+1;
    if(p==a && q==b && r==c)
    break;
  }
 return cnt;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
        w(t)
        {
          ll p,q,r;
          cin>>p>>q>>r;
          ll a,b,c;
          cin>>a>>b>>c;
        cout<<solve(p,q,r,a,b,c)<<endl;
        }
    return 0;
  }
