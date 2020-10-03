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
#define ps(x,y) fixed<<setprecision(y )<<x
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    ll arr[21];
    memset(arr,0,sizeof(arr));
    arr[0]=1;
    for(ll i=1;i<21;i++)
    {
      arr[i] = 2*arr[i-1];
    }
    // for(ll i=0;i<21;i++)
    // cout<<arr[i]<<" ";

    while(t!=0)
    {
      ll n;
      cin>>n;
      cout<<1<<" "<<arr[20]<<endl;
      ll sm;
      cin>>sm;
      sm -= (arr[20]*n);
      ll xr=0;
      if(sm%2!=0)
      xr +=1;
      for(ll i=1;i<20;i++)
      {
        ll mysm;
        mysm = sm + (arr[i]*n);
        cout<<1<<" "<<arr[i]<<endl;
        ll chefsm;
        cin>>chefsm;
        if(((mysm - chefsm)/(arr[i]*2))%2!=0)
        xr += arr[i];
      }
      cout<<2<<" "<<xr<<endl;
      ll final;
      cin>>final;
      t--;
    }
    return 0;
  }
