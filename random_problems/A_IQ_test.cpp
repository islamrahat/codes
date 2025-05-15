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
    int ev=0, od=0, indev, indod;
    for(int i=0; i<number; i++)
    {
        cin >> vec[i];
        if(vec[i]%2==0)
        {
            ev++;
            indev=i+1;
        }
        else {od++; indod=i+1;}
        if(od>1 && ev==1) {cout << indev << endl; return;}
        if(ev>1 && od==1) {cout << indod << endl; return;}
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}