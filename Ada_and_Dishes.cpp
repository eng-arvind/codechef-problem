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
      vector<int> v(n);
      for(ll i=0;i<n;i++)
      {
        cin>>v[i];
      }
      if(n==1)
      {
        cout<<v[0]<<endl;
        continue;
      }
      else
      {
      sort(v.begin(),v.end());
      ll sm1=0,sm2=0;
      for(ll i=n-1;i>=0;i--)
      {
        if(sm1<=sm2)
          sm1+=v[i];
        else
          sm2+=v[i];
     }
     cout<<max(sm1,sm2)<<endl;
    }
  }
    return 0;
  }
