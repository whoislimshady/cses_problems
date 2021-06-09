#include <bits/stdc++.h>
using namespace std;

long long n,s  =0;
int main(){
    cin>>n;
    for (int i = 1; i < n; ++i)
    {
        int a;
        cin>>a;
        s+=a;
    }
    cout<<n*(n+1)/2-s<<endl;

    return 0;
}