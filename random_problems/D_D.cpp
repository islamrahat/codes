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
    int number, q;
    cin >> number >> q;
    vi vec(number), que(number), stck;
    for(int i=0; i<number; i++) cin >> vec[i];
    for(int i=0; i<q; i++) cin >> que[i];
    for(int i=0; i<q; i++)
    {
        auto it = find(all(vec),que[i]);
        stck.push_back(distance(vec.begin(),it+1));
        vec.erase(it);
        vec.insert(vec.begin(),que[i]);
    }
    for(int i:stck) cout << i << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}