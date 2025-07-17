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
    int arr[1005]={};
    set<int> vec;
    for(int i=0; i<number; i++)
    {
        int a;
        cin >> a;
        arr[a]++;
        vec.insert(a);
    }
    int height = 0;
    for(int i=0; i<1005; i++)
    {
        height = max(height,arr[i]);
    }
    cout << height << " " << vec.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}