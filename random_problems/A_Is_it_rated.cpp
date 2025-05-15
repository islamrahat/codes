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
    vector<pair<int,int>> vec(number), check(number);
    for(int i=0; i<number; i++)
    {
        cin >> vec[i].first >> vec[i].second;
        if(vec[i].first!=vec[i].second)
        {
            cout << "rated" << endl; return;
        }
    }
    check=vec;
    sort(rall(check));
    if(vec==check) {cout << "maybe" << endl;}
    else cout << "unrated" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}