#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   long long  int n;
	    cin>>n;
	   long long int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    long long int b[n];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    sort(a,a+n);
	    sort(b,b+n);
	    unsigned long long  int sum=0;
	    for(int i=0;i<n;i++)
	    {
	     if(a[i]<b[i])
	     sum+=a[i];
	     else
	     sum+=b[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
