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

int BinarySearch(vi vec, int target)
{
    int n=vec.size();
    int l=0, r=n;
    while(l<r)
    {
        int m=l+(r-l)/2;
        if(vec[m]<=target) {l=m+1;}
        else if(vec[m]>target) {r=m;}
    }
    return l;
}

void solve()
{
    int number;
    cin >> number;
    vi vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    sort(all(vec));
    int q;
    cin >> q;
    while(q--)
    {
        int a;
        cin >> a;
        cout << BinarySearch(vec,a) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}