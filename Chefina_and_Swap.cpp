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
ll pos(ll sm)
{
  long double ans= sqrtl(1ul+4*(sm));
  ans=ans-1.0;
  ans=ans/2.0;
  ll fnas=ans;
  return fnas;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      if(n==1 || n==2 || n==0)
      {
        cout<<0<<endl;
        continue;
      }
      ll total=(n*(n+1))/2;
      if(total%2!=0)
      {
        cout<<0<<endl;
        continue;
      }
      ll x=pos(total);
      ll ssum=x*(x+1)/2;
      if(total/2==ssum)
      {
      ll result=(x*(x-1ul))/2l+((n-x)*(n-x-1ul))/2l+(n-x);
      cout<<result<<endl;
        }
      else
      cout<<n-x<<endl;
    }
    return 0;
  }
