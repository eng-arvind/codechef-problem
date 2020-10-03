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
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    vector<ll> vct;
    for(ll i=0;i<n;i++)
    {
      ll a;
      cin>>a;
      vct.pb(a);
    }
    vector<ll> ans;
    for(ll i=0;i<n;i++)
    {
      ll cnt1=0,cnt2=0;
      for(ll j=i;j>=0;j--)
      {
        if(vct[j]>vct[i])
        cnt1++;
      }
      for(ll k=i;k<n;k++)
      {
        if(vct[k]<vct[i])
        cnt2++;
      }
      ans.pb(cnt1+cnt2+1);
    }
    sort(ans.begin(),ans.end());
    cout<<ans[0]<<" "<<ans[ans.size()-1]<<endl;
  }
    return 0;
  }
