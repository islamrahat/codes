#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    long long int a, b, oddsum, evensum, suma, sumb;
    cin >> a >> b;
    if(a>b) swap(a,b);
    suma=(a*(a+1))/2;
    sumb=(b*(b+1))/2;
    long long int sum=sumb-suma+a;
    if(a%2==0) a++;
    if(b%2==0) b--;
    oddsum=(((((b-a)/2)+1))*(a+b))/2;
    evensum=sum-oddsum;
    cout << sum << endl;
    cout << evensum << endl;
    cout << oddsum << endl;
    return 0;
}