#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        n-=y;
        int ans=n/x;
        ans*=x;
        cout << ans+y << endl;
    }
    return 0;
}