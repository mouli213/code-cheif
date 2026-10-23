#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        d=n%10;
        int s=0; 
        while(n)
        {
            if(n>0&&n<10)
            {
               s=n;
               break;
            }
            n=n/10;
        }
        cout<<s+d<<"\n";
    }
}