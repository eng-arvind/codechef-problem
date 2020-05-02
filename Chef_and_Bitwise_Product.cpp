#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#define w(t) int t; cin>>t; while(t--)
#define ll int
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
        w(t)
        {
         ll x,y,l,r;
          cin>>x>>y>>l>>r;
          string binary=bitset<64>(r).to_string();
          ll num=stoi(binary);
          string nm=to_string(num);
          ll len=nm.length();
          cout<<pow(2,len-1)-1<<endl;

        }
    return 0;
  }
