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
#define ll int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      w(t)
      {
        ll pc,pr;
        cin>>pc>>pr;
        ll ans;
        if(pc%9==0)
        ans=pc/9;
        else
        ans=pc/9+1;
        ll ans1;
        if(pr%9==0)
        ans1=pr/9;
        else
        ans1=pr/9+1;
        if(ans>=ans1)
        cout<<"1"<<" "<<ans1<<endl;
        if(ans<ans1)
        cout<<"0"<<" "<<ans<<endl;

      }
    return 0;
  }
