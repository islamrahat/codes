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
bool isLucky(int n)
{
    while(n>0)
    {
        if(n%10!=4 && n%10!=7) return false;
        n/=10;
    }
    return true;
}
void solve()
{
    int number;
    cin >> number;
    int f=0;
    int n=8;
    for(int i=1; i<=number; i++)
    {
        if(isLucky(i) && number%i==0) {yes; return;}
    }
    no;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}