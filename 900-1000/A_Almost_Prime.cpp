#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}
int main()
{
    int number, count=0, countind=0;
    cin >> number;
    for(int i=2; i<=number; i++)
    {
        for(int j=2; j<=i; j++)
        {
            if(isPrime(j) && i%j==0) countind++;
        }
        if(countind==2) count++;
        countind=0;
    }
    cout << count << endl;
    return 0;
}