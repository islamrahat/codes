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
    vector<bool> vec(10000000,true);
    for(int i=2; i<10000000; i++)
    {
        if(vec[i])
        {
            for(int j=i+i; j<10000000; j+=i)
            {
                if(vec[j]) vec[j]=false;
            }
        } 
    }
    int k=2, ans;
    for(int i=0; i<number; i++)
    {
        for(k;k<10000000;k++) {if(vec[k]) {ans=k; k++; break;}}
        cout << ans << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}