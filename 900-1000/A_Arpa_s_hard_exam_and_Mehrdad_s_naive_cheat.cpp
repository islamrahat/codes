#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    int number;
    cin >> number;
    int modded=number%4;
    if(number==0) {cout << 1 << endl; return 0;}
    if(modded==0) cout << 6 << endl;
    else if(modded==1) cout << 8 << endl;
    else if(modded==2) cout << 4 << endl;
    else cout << 2 << endl;
    return 0;
}