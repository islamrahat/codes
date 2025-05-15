#include<bits/stdc++.h>
using namespace std;
typedef long long         ll;
typedef vector<int>       vi;
typedef vector<long long> vl;
#define pb push_back
#define ff                first
#define ss                second
#define forn(n)           for(int i=0; i<n; i++)
#define forc(cn,abc)      ((cn).find(abc)!=(cn).end())
#define yes               cout << "YES\n";
#define no                cout << "NO\n";
#define all(a)            a.begin(), a.end()
#define rall(a)           a.rbegin(), a.rend()
#define poin(x)           cout << fixed << setprecision(x);

// bool isCorrect(string s, string target)
// {
//     int i=0, j=0;
//     while(i<target.size() && j<s.size())
//     {
//         if(target[i]==s[j]) i++;
//         j++;
//     }
//     return i==target.size();
// }

bool isCorrect(const std::string& s1, const std::string& s2) {
    int i = 0;  // index for s1
    bool matched[256] = {false};  // Array to track matched characters in s1

    for (int j = 0; j < s2.length(); ++j) {
        if (i >= s1.length()) break;  // If all characters from s1 are matched
        
        if (s2[j] == s1[i]) {
            matched[s2[j]] = true;  // Mark current character from s1 as matched
            ++i;
        } else if (i > 0 && !matched[s2[j]] && s2[j] != s1[i]) {
            // If an element not used in s1 comes before next element
            return false;
        }
    }

    return i == s1.length();  // Check if all characters of s1 are matched
}

void solve()
{
    string s, target;
    cin >> s >> target;
    reverse(all(s));
    reverse(all(target));
    int number1=s.size(), number2=target.size(), k=0;
    for(int i=0; i<s.size(); i++)
    {
        if(find(all(target),s[i])!=target.end()) {}
        else {s.erase(s.begin()+i); i=-1;}
    }
    if(s.size()<target.size()) {no; return;}
    if(s[0]!=target[0]) {no; return;}
    if(isCorrect(s, target)) {yes; return;}
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