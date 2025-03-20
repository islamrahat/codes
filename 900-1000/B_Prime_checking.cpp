#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
bool isPrime(long long int a)
{
    if(a%2==0 && a!=2) return false;
    else if(a<=1) return false;
    for(int i=3; i<=sqrt(a); i++)
    {
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
    long long int number;
    cin >> number;
    if(isPrime(number)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}