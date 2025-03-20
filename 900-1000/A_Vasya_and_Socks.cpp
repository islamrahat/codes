#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    int n, m, ans;
    cin >> n >> m;
    if(n==m) ans=n+1;
    else if(n<m) ans=n;
    else
    {
        ans=n;
        for(int i=1; i<=ans; i++)
        {
            if(i%m==0) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}