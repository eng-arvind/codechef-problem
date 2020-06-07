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
ll a[1000][1000];
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      w(t)
      {
        ll n;
        cin>>n;
        ll num=1;
        for(ll i=0;i<n;i++)
        {
          if(num%2!=0)
          {
            for(ll j=0;j<n;j++)
            {
              a[i][j]=num;
              num++;
            }
            num--;
          }
          else
          {
            for(ll j=0;j<n;j++)
            {
              a[i][j]=num;
              num--;
            }
            num++;
          }
          num+=n;
        }
        for(ll i=0;i<n;i++)
        {
          for(ll j=0;j<n;j++)
          {
            cout<<a[i][j]<<" ";
          }
          cout<<endl;
        }
      }
    return 0;
  }
