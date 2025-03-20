#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    string s;
    cin >> s;
    int len=s.size();
    for(int i=0; i<len; i++)
    {
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    for(int i=0; i<len; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        {
            s.erase(s.begin()+i);
            len--;
            i--;
        }
    }
    for(int i=0; i<len*2; i+=2)
    {
        s.insert(s.begin()+i, '.');
    }
    cout << s << endl;
    return 0;
}