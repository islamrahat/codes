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
    string s;
    cin >> s;
    vector<char> vowel={'A', 'E', 'I', 'O', 'U', 'Y'};
    int ans=1, temp=1;
    s='A'+s+'A';
    for(int i=0; i<s.size()-1; i++)
    {
        if(find(all(vowel), s[i])!=vowel.end() && !(find(all(vowel),s[i+1])!=vowel.end()))
        {
            temp++;
        }
        else if(!(find(all(vowel), s[i])!=vowel.end()) && !(find(all(vowel),s[i+1])!=vowel.end()))
        {
            temp++;
        }
        else {ans=max(temp,ans); temp=1;}
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}