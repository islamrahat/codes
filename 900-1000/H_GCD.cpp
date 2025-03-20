#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    cout << gcd(n,m) << " ";
    cout << lcm(n,m) << endl;
    return 0;
}