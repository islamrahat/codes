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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<ll> vec(10000000,1);
    for(ll i=2; i<10000000; i++)
    {
        if(vec[i]==1)
        {
            for(ll j=i+i; j<10000000; j+=i)
            {
                if(vec[j]) vec[j]=0;
            }
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        ll number;
        cin >> number;
        if(number<=1) {no; continue;}
        if(vec[number]) {yes;}
        else no;
    }

    return 0;
}