#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nx=0;
    long long ans=0;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        nx =max(x,nx);
        ans +=nx-x;
    }
    cout<<ans;    

    return 0;
}