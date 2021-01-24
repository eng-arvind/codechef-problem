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
        vector<ll> a(n);
        vector<ll> b(m);
        ll sma=0,smb=0;
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
            sma+=a[i];
        }
        for (int i = 0; i < m; ++i)
        {
            cin>>b[i];
            smb+=b[i];
        }
        if(sma>smb)
        {
            cout<<"0"<<endl;
        }
        else
        {
            ll cnt=0;
            sort(a.begin(),a.end());
            sort(b.rbegin(),b.rend());
            ll i=0;
            while(sma<=smb &&i<n && i<m && a[i]<b[i])
            {
                sma=sma-a[i]+b[i];
                smb=smb-b[i]+a[i];
                cnt++;
                i++;
            }
            if(sma<smb || cnt==0)
                cout<<-1<<endl;
            else
                cout<<cnt<<endl;
        }

    }
    return 0;
  }