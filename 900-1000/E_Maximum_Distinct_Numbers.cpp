#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    long long int number;
    cin >> number;
    long long int x=(sqrt((8*number)+1)/2)-0.5;
    cout << x << endl;
    return 0;   
}