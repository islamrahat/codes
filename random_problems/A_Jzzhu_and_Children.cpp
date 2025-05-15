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
    int number, chahida;
    cin >> number >> chahida;
    vi vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    int index=0;
    for(int i=0; i<number; i++)
    {
        vec[i]=ceil((float)vec[i]/chahida);
    }
    int maxim=*max_element(all(vec));
    for(int i=0; i<number; i++)
    {
        if(vec[i]==maxim) index=i+1;
    }
    cout << index << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}