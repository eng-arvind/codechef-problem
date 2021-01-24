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
    	ll n,m;
    	cin>>n>>m;
    	vector<ll> A(n);
    	vector<ll> B(m);
    	for(ll i=0;i<n;i++)
    		cin>>A[i];
    	for(ll i=0;i<m;i++)
    		cin>>B[i];
    	unordered_set<ll> st;
        ll x;
        stack<ll> s;
        s.push(0);
    	while(!s.empty())
    	{
    		x=s.top();
            s.pop();
    		for(ll i=0;i<n;i++)
    		{
    			ll y=A[i];
                if(st.find(x | y)==st.end())
                {
                    st.insert(x | y);
                    s.push(x | y);
                }
    		}
            for(ll i=0;i<m;i++)
            {
                ll y=B[i];
                if(st.find(x & y)==st.end())
                {
                    st.insert(x & y);
                    s.push(x & y);
                }
            }
    		
    	}
    	cout<<st.size()<<endl;
    }
    return 0;
  }