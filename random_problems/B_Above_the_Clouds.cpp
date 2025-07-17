#include<bits/stdc++.h>
using namespace std;
typedef long long         ll;
typedef vector<int>       vi;
typedef vector<long long> vl;
#define pb                push_back
#define ff                first
#define ss                second
#define yes               cout << "Yes\n";
#define no                cout << "No\n";
#define all(a)            a.begin(), a.end()
#define rall(a)           a.rbegin(), a.rend()
#define PI                acos(-1.0)
#define poin(x)           cout << fixed << setprecision(x);

void solve()
{
    int number;
    cin >> number;
    string s;
    cin >> s;
    map<char, int> count;
    for(int i=0; i<number; i++)
    {
        count[s[i]]++;
    }
    for(int i=1; i<min(number-1,29); i++)
    {
        if(count[s[i]]>1) {yes; return;}
    }
    no;
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