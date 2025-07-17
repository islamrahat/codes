#include<bits/stdc++.h>
using namespace std;
typedef long long         ll;
typedef vector<int>       vi;
typedef vector<long long> vl;
#define pb push_back
#define ff                first
#define ss                second
#define yes               cout << "YES\n";
#define no                cout << "NO\n";
#define all(a)            a.begin(), a.end()
#define rall(a)           a.rbegin(), a.rend()
#define poin(x)           cout << fixed << setprecision(x);

void solve()
{
    char c;
    int number;
    cin >> c >> number;
    if(number%4==0) {cout << c << endl; return;}
    if(number%4==1)
    {
        if(c=='R') {cout << "D" << endl;}
        else if(c=='U') {cout << "R" << endl;}
        else if(c=='D') {cout << "L" << endl;}
        else {cout << "U" << endl;}
        return;
    }
    if(number%4==2)
    {
        if(c=='R') {cout << "L" << endl;}
        else if(c=='U') {cout << "D" << endl;}
        else if(c=='D') {cout << "U" << endl;}
        else {cout << "R" << endl;}
        return;
    }
    if(number%4==3)
    {
        if(c=='R') {cout << "U" << endl;}
        else if(c=='U') {cout << "L" << endl;}
        else if(c=='D') {cout << "R" << endl;}
        else {cout << "D" << endl;}
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}