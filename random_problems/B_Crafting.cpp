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
    vi va(number), vb(number), sub(number);
    for(int i=0; i<number; i++) cin >> va[i];
    for(int i=0; i<number; i++) cin >> vb[i];
    int minus=0, cero=0;
    for(int i=0; i<number; i++) sub[i]=va[i]-vb[i];
    int maxneg=0, minpos=INT_MAX, minus=0, plus=0;
    for(int i=0; i<number; i++)
    {
        if(sub[i]<0 && sub[i]>maxneg) {maxneg=sub[i];}
        if(sub[i]>0 && sub[i]<minpos) {minpos=sub[i];}
        if(sub[i]<0) minus++;
        else if(sub[i]>0) plus++;
    }
    if(maxneg+minpos<0) {no;}
    else {yes;}
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