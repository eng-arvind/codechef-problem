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
	ll t=0;
	cin>>t;

	while(t--)
	{
	     ll n=0;
	     cin>>n;

	     ll v[n];
	     for(ll i=0;i<n;i++)
	     {
	          cin>>v[i];
	     }

	     ll q=0;
	     cin>>q;

	     while(q--)
	     {
	          ll r;
	          cin>>r;
	          ll a,sum=0;
	          ll flag=0;
	          for(ll i=1;i<=r;i++)
	          {
	               a=(i-1)%n + 1;

	               if(v[a-1]%2==0 || a==n || i==r && flag==0)
	               {
	                    sum+=v[a-1];
                      sum=sum % mod;
	               }

	               else if(v[a-1]%2!=0 && v[a-1]!=1 && flag==0)
	               {
	                    sum=sum+(v[a-1]-1);
                      sum=sum % mod;
	               }

	               else if(v[a-1]==1 && a!=n && i!=r)
	               {
	                    flag=1;
	                    break;
	               }

	               if(i==n)
	               {
	                    flag=0;
	               }

	          }

	          cout<<sum<<endl;
	     }
	}
	return 0;
}
