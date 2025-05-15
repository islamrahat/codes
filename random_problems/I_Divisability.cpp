#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a, b, number;
    cin >> a >> b >> number;
    if(a>b) swap(a,b);
    int r1=ceil((double)a/number), r2=(b/number);
    long long int s1=(r1*(r1+1))/2, s2=(r2*(r2+1))/2;
    long long int sum=s2-s1+r1;
    cout << sum*number << endl;
    return 0;
}