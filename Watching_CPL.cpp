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
#define mod 10 00000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define ll long long int
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v(n);
    	ll sm=0;
    	for(ll i=0;i<n;i++) 
    	{
    		cin>>v[i];
    		sm+=v[i];
    	}
    	if(sm<(2*k) || n==1)
    		cout<<-1<<endl;
    	// else if(sm==(2*k) && n>1)
    	// 	cout<<n<<endl;
    	else
    	{
    		sort(v.begin(),v.end(),greater<int>());
    	    ll i=0;
    	    ll ans1=v[i];
    	    i++;
    	    while(ans1<k && i<n)
    	    {
    	    	if(ans1+v[i]<=k)
    	    		ans1+=v[i++];
    	    	else
    	    	{
    	    		ll p=0;
    	    		for(ll j=i+1;j<n;j++)
    	    		{
    	    			if(v[j]+ans1<=k)
    	    			{
    	    				p=j;
    	    				break;
    	    			}
    	    		}
    	    		if(p!=0)
    	    		{

    	    			swap(v[i],v[p]); 	    			
    	    		}
    	    		else
    	    		{
    	    			swap(v[i],v[n-1]);
    	    		}
    	    		sort(v.begin()+(i+1),v.end(),greater<int>());
    	    		ans1+=v[i++];
    	    	}
    	    }
               ll ans2=0;
    	if(i<n)
    	{
    		ans2=v[i];
    		i++;
    		while(ans2<k && i<n)
    			ans2+=v[i++];
    		if(ans1>=k && ans2>=k)
    			cout<<i<<endl;
    		else
    			cout<<-1<<endl;
    	}
    	  else
    	  	cout<<-1<<endl;
    	}
    	// for(ll i=0;i<n;i++)
    	// 	cout<<v[i]<<" ";
    	// cout<<endl;

    }
    return 0;
  }