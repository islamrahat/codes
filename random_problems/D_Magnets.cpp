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
#define poin(x)           cout << fixed << setprecision(x);

void solve()
{
    string s="";
    while(s!="END")
    {
        int f=1;
        getline(cin,s);
        int count[150]={};
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=' ') count[s[i]]++;
        }
        for(int i=0; i<150; i++)
        {
            if(count[i]>1) {f=0; break;}
        }
        if(s=="END") {break;}
        if(f==1)
        {
            cout << s << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}