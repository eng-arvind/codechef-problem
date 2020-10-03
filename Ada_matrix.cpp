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
#define ll  long long int
using namespace std;
void swp(vector<vector<ll> > &vt,ll size)
{
  for(ll x=0;x<size;x++)
  {
    for(ll y=x;y<size;y++)
    swap(vt[x][y],vt[y][x]);
  }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      vector<vector<ll> > vt;
      for(ll i=0;i<n;i++)
      {
        vector<ll> temp;
        for(ll j=0;j<n;j++)
        {
          ll a;
          cin>>a;
          temp.pb(a);
        }
        vt.pb(temp);
      }
      ll cnt=0;
      for(ll i=n-1;i>0;i--)
      {
        if(vt[i][i]!=vt[i][i-1]+1)
        {
          swp(vt,i+1);
           cnt++;
         }
      }
     cout<<cnt<<endl;

    }
    return 0;
  }
