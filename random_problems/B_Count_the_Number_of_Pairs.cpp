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
    int number, limit;
    cin >> number >> limit;
    string s;
    cin >> s;
    int count=0;
    for(int i=0; i<number-1; i++)
    {
        if(s[i]=='-') continue;
        for(int j=i+1; j<number; j++)
        {
            if(s[j]=='-') continue;
            if(s[i]==(s[j]-32))
            {
                s[i]='-'; s[j]='-';
                count++;
                break;
            }
            if(s[j]==(s[i]-32))
            {
                s[i]='-'; s[j]='-';
                count++;
                break;
            }
        }
    }
    int changed=0;
    for(int i=0; i<number-1; i++)
    {
        for(int j=i+1; j<number; j++)
        {
            if(s[i]==s[j] && s[i]!='-')
            {
                if(changed<limit)
                {
                    s[i]='-'; s[j]='-';
                    changed++;
                    count++;
                } 
                else {cout << count << endl; return;}
            }
        }
    }
    cout << count << endl;
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