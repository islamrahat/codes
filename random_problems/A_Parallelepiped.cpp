#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int ar1, ar2, ar3;
    cin >> ar1 >> ar2 >> ar3;
    int a, b, c;
    a=sqrt((ar1*ar3)/ar2);
    b=sqrt((ar1*ar2)/ar3);
    c=sqrt((ar2*ar3)/ar1);
    int ans=(a+b+c)*4;
    cout << ans << endl;
    return 0;
}