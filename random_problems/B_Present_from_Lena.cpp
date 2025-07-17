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
#define PI                acos(-1.0)
#define poin(x)           cout << fixed << setprecision(x);

void solve()
{
    int number;
    cin >> number;
    
    // first zero
    for(int i=1; i<=number*2; i++) cout << " ";
    cout << 0 << endl;
    // first half (without the full one)
    for(int i=3; i<=number*2; i+=2)
    {
        // spacing
        for(int j=i; j<=number*2; j++)
        {
            cout << " ";
        }
        for(int j=0; j<i; j+=2) {cout << j/2 << " ";}
        for(int j=i-2; j>=2; j-=2) {cout << j/2 << " ";}
        if(i==1) {cout << endl;}
        else {cout << 0 << endl;}
    }
    
    // biggest line
    for(int i=0; i<=number; i++) {cout << i << " ";}
    for(int i=number-1; i>=1; i--) {cout << i << " ";}
    cout << 0 << endl;

    // last half
    for(int i=number*2; i>=3; i-=2)
    {
        // spacing
        for(int j=i-1; j<=number*2; j++) {cout << " ";}
        for(int j=0; j<i; j+=2) {cout << j/2 << " ";}
        for(int j=i-4; j>=2; j-=2) {cout << j/2 << " ";}
        if(i>2){cout << 0 << endl;}
        else {cout << endl;}
    }

    // last zero
    for(int i=1; i<=number*2; i++) {cout << " ";}
    cout << 0 << endl;
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}