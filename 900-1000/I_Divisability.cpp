#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    int a, b, x;
    cin >> a >> b >> x;
    if(a>b) swap(a,b);
    if(a==b)
    {
        if(a%x!=0) {cout << 0 << endl; return 0;}
        else {cout << a << endl; return 0;}
    }
    if(a%x!=0) a=a+(x-(a%x));
    if(b%x!=0)b=b-((b%x));
    int elemnumber=((b-a)/x)+1;
    long long int sum=(elemnumber/2)*(a+b);
    cout << sum << endl;
    return 0;
}