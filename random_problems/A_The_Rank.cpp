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
    int number;
    cin >> number;
    vi sum(number);
    for(int i=0; i<number; i++)
    {
        for(int j=0; j<4; j++)
        {
            int a;
            cin >> a;
            sum[i]+=a;
        }
    }
    int thomas=sum[0];
    sort(rall(sum));
    for(int i=0; i<number; i++)
    {
        if(sum[i]==thomas) {cout << i+1 << endl; return;}
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}