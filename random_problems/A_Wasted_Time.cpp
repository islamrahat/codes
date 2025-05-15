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
    int number, k;
    cin >> number >> k;
    vector<pair<double,double>> vec(number);
    for(int i=0; i<number; i++) cin >> vec[i].first >> vec[i].second;
    double distance, total=0;
    poin(9);
    for(int i=1; i<number; i++)
    {
        distance=sqrt((vec[i].first-vec[i-1].first)*(vec[i].first-vec[i-1].first)+(vec[i].second-vec[i-1].second)*(vec[i].second-vec[i-1].second));
        total+=distance;
    }
    cout << (total*k*0.02) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}