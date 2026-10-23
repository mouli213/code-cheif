#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int re=0;
        while(n)
        {
            d=n%10;
            re=re*10+d;
            n=n/10;
        }
        cout<<re<<"\n";
    }
	

}
