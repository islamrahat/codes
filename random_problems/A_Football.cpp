#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    int f=0;
    cin >> s;
    if(s.size()<7) {cout << "NO" << endl; return 0;}
    for(int i=0; i<s.size()-6; i++)
    {
        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1')
        {
            cout << "YES" << endl;
            f=1;
            break;
        }
        if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0')
        {
            cout << "YES" << endl;
            f=1;
            break;
        }
    }
    if(f==0) cout << "NO" << endl;
    return 0;
}