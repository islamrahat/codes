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
    vi ind;
    string s;
    cin >> s;
    if(find(s.begin(),s.end(),'R')!=s.end() && find(s.begin(),s.end(),'B')!=s.end()) {
        if(!(find(s.begin(),s.end(),'W')!=s.end())) {yes; return;}
    }
    else {no; return;}
    bool isCorrect = true;
    for(int i=0; i<number; i++)
    {
        if(s[i]=='W') {ind.push_back(i);}
    }
    if(find(s.begin(),s.begin()+ind[0],'R')!=s.begin()+ind[0] && find(s.begin(),s.begin()+ind[0],'B')!=s.begin()+ind[0]) {}
    else {no; return;}
    for(int i=0; i<ind.size()-1; i++)
    {
        if(find(s.begin()+ind[i],s.begin()+ind[i+1],'R')!=s.begin()+ind[i+1] && find(s.begin()+ind[i],s.begin()+ind[i+1],'B')!=s.begin()+ind[i+1])
        {
            isCorrect=true;
        }
        else
        {
            no;
            return;
        }
    }
    if(find(s.begin()+ind[ind.size()-1],s.end(),'R')!=s.end() && find(s.begin()+ind[ind.size()-1],s.end(),'B')!=s.end()) {}
    else {no; return;}
    yes;
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