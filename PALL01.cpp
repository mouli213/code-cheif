#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,d;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	   int temp=n;
	    int res=0;
	    while(n)
	    {
	        d=n%10;
	        res=res*10+d;
	        n=n/10;
	    }
	    if(res==temp) cout<<"wins\n";
	    else cout<<"loses\n";
	}

}
