#include <iostream>
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
#define w(t) int t; cin>>t; while(t--)
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
     w(t)
     {
       ll n,k,cnt=1;
       cin>>n>>k;
       vector<ll> a;
       for(ll i=0;i<n;i++)
       {
         ll nm;
         cin>>nm;
         a.pb(nm);
       }
       vector<ll> cmp(a);
       sort(cmp.begin(),cmp.end());
       if(cmp==a)
       {
         cout<<"0"<<endl;
         return 0;
       }
       ll c=0;
       for(ll i=0;i<n;i++)
       {
         if(a[i]!=i+1)
         c++;
       }
       if(c<3)
       {
         cout<<"-1"<<endl;
         return 0;
       }
       while(k--)
       {
         ll p1,p2,p3;
         ll index;
         for(ll i=0;i<n;i++)
         {
           if(a[i]==i+1)
           continue;
           else
           {
             p1=a[i];
             index=i;
             break;
           }
         }
         p2=a[p1-1];
         p3=a[p2-1];
         a[index]=p3;
         a[p1-1]=p1;
         a[p2-1]=p2;
         cout<<cnt++<<endl;
         ll b[]={p1,p2,p3};
         sort(b,b+3);
         cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
         if(a==cmp)
         break;
       }
       // for(ll i=0;i<n;i++)
       // cout<<a[i]<<" ";
       // cout<<endl;
       // for(ll i=0;i<n;i++)
       // cout<<cmp[i]<<" ";
       if(cmp!=a)
       cout<<"-1"<<endl;
     }
    return 0;
  }
