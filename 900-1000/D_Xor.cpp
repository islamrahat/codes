#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int ans(long long int a, long long int b, long long int q)
{
    if(q%3==1) return a;
    else if(q%3==2) return b;
    return a^b;
}
int main()
{
    long long int a, b, q;
    cin >> a >> b >> q;
    if(q==1) {cout << a << endl; return 0;}
    else if(q==2) {cout << b << endl; return 0;}
    cout << ans(a,b,q) << endl;
    return 0;
}