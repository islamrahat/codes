#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f=0;
    string s;
    cin >> s;
    int len=s.size();
    for(int i=0; i<len; i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9') f=1;
    }
    if(f) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}