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
    vi vec(number+1);
    vec[0]=0;
    ll power=0;
    for(int i=1; i<vec.size(); i++) cin >> vec[i];
    /// checking for leading ceros
    for(int i=1; i<vec.size(); i++)
    {
        if(vec[i]!=0) break;
        vec.erase(vec.begin()+i);
        i=0;
    }
    for(int i=1; i<vec.size(); i++)
    {
        if(vec[i]==0)
        {
            auto maxim=max_element(vec.begin(),vec.begin()+i+1);
            int maxint=*max_element(vec.begin(),vec.begin()+i+1);
            vec.erase(vec.begin()+i);
            vec.erase(maxim);
            power+=maxint;
            i=1;
        }
    }
    cout << power << endl;
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