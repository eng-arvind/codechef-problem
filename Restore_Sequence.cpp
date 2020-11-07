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
ll mx=4000001;
vector<ll> primes;
vector<bool> prime(mx);
void genrate()
{
  for(ll i=0;i<mx;i++)
  prime[i]=true;
  for(ll p=2;p*p<mx;p++)
  {
    if(prime[p])
    {
      for(int i=p*p;i<mx;i+=p)
      prime[i]=false;
    }
  }
  for(ll i=2;i<mx;i++)
  {
    if(prime[i])
    primes.pb(i);
  }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    genrate();
    while(t--)
    {

      ll n;
      cin>>n;
      map<ll,ll> hm;
      ll a[n];
      for(ll i=0;i<n;i++)
      {
        cin>>a[i];
        hm[a[i]]++;
      }
      vector<ll> v;
      for(ll i=0;i<n;i++)
      {
        v.pb(primes[a[i]]);
        hm[a[i]]--;
      }
      for(ll i:v)
      cout<<i<<" ";
      cout<<endl;
    }
    return 0;
  }
