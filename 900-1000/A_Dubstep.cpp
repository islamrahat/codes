#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    string s;
    cin >> s;
    int len=s.size();
    for(int i=0; i<len-2; i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            s[i]='.';
            s.erase(s.begin()+i+1);
            s.erase(s.begin()+i+1);
            len-=2;
        }
    }
    int check=s.size()+20;
    len=s.size();
    while(check--)
    {
        for(int i=0; i<len-1; i++)
        {
            if(s[i]=='.' && s[i+1]=='.') {s.erase(s.begin()+i); len--;}
        }
    }
    if(s[0]=='.') s.erase(s.begin());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='.') s[i]=' ';
    }
    cout << s << endl;
    return 0;
}