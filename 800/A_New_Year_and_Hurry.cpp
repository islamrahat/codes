#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    int n, k;
    cin >> n >> k;
    int left=240-k;
    int ans=(-5+sqrt((25+(40*left))))/10;
    if(ans>n) ans=n;
    cout << ans << endl;
    return 0;
}