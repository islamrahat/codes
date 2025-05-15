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
    vi vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    int minim=*min_element(all(vec));
    if(minim==1)
    {
        int count=0;
        for(int i=0; i<number; i++) count+=(vec[i]-1);
        cout << count << endl;
        return;
    }
    int div=(minim*2)-1, count=0;
    for(int i=0; i<number; i++)
    {
        if(vec[i]>div) count+=(vec[i]/div);
    }
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