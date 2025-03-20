#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    s1=s1+s2;
    sort(s1.begin(), s1.end());
    sort(s3.begin(),s3.end());
    if(s1.size()!=s3.size()) {cout << "NO" << endl; return 0;}
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]!=s3[i]) {cout << "NO" << endl; return 0;}
    }
    cout << "YES" << endl;
    return 0;
}