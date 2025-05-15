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
int win(int a, int b)
{
    if(a>b) return 1;
    if(a==b) return 0;
    else return -1;
}
void solve()
{
    int a, b, c, d, count=0;
    cin >> a >> b >> c >> d;
    if((win(a,c)+win(b,d))>0) count++;
    if((win(b,c)+win(a,d))>0) count++;
    if((win(a,c)+win(b,d))>0) count++;
    if((win(b,c)+win(a,d))>0) count++;
    cout << count << endl;
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