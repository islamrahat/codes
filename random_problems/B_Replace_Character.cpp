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
    string s;
    cin >> s;
    vi count(150,0);
    for(int i=0; i<number; i++)
    {
        count[(int)s[i]]++;
    }
    auto max_ashche = max_element(all(count));
    int indexmax = distance(count.begin(), max_ashche);
    count[indexmax]=0;
    for(int i=0; i<150; i++)
    {
        if(count[i]==0) count[i]=100;
    }
    char maxchar = (char)indexmax;
    int indexone = -1;
    for(int i=0; i<150; i++)
    {
        if(count[i]==1 && i!=indexmax) indexone=i;
    }
    if(indexone=-1)
    {
        auto min_ashche = min_element(all(count));
        indexone = distance(count.begin(), min_ashche);
    }
    char minchar = (char)indexone;
    for(int i=0; i<number; i++)
    {
        if(s[i]==minchar) {s[i]=maxchar; break;}
    }
    cout << s << endl;
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