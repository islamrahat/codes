#include<bits/stdc++.h>
using namespace std;
typedef long long         ll;
typedef vector<int>       vi;
typedef vector<long long> vl;
#define pb push_back
#define yes               cout << "YES\n";
#define no                cout << "NO\n";
#define all(a)            a.begin(), a.end()
#define rall(a)           a.rbegin(), a.rend()
#define poin(x)           cout << fixed << setprecision(x);

void solve()
{
    string s;
    cin >> s;
    int number=s.size();
    if(number%2==0) {cout << number/2 << endl; return;}
    int uno=0;
    for(int i=0; i<number; i++)
    {
        if(s[i]=='1') uno++;
    }
    if(uno>1) cout << (number/2)+1 << endl;
    else cout << number/2 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}