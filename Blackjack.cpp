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
    	ll n,x,y;
    	cin>>n>>x>>y;
    	if(x>y)
    		swap(x,y);
    	vector<ll> v(n);
    	ll sm=0;
    	for(ll i=0;i<n;i++)
    	{
    		cin>>v[i];
    		sm+=v[i];
    	}
    	ll mn=*min_element(v.begin(),v.end());
    	if(n==1)
    	{
    		if(sm>=x && sm<=y)
    			cout<<0<<endl;
    		else
    			cout<<-1<<endl;
    	}
    	else if(n==2)
    	{
    		if((v[0]>=x && v[0]<=y) ||(v[1]>=x && v[1]<=y))
    			cout<<0<<endl;
    		else
    			cout<<-1<<endl;
    	}
    	else
    	{
    		//ll sm=sm-v[n-1];
    		if(sm<x)
    			cout<<-1<<endl;
    		else
    		{
    			sm=0;
    			bool flag=false;
    			for(ll i=0;i<n-1;i++)
    			{
    				sm+=v[i];
    				if(sm>=x)
    				{
    					flag=true;
    					break;
    				}
    			}
    			if(flag)
    			{
    				cout<<0<<endl;
    				continue;
    			}
    			cout<<1<<endl;
    		}
    	}

    }
    return 0;
  }