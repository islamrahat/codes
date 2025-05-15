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
    int number;
    cin >> number;
    string s;
    cin >> s;
    reverse(all(s));
    vi vec(number);
    int maxim=number, minim=1;
    for(int i=0; i<number-1; i++)
    {
        if(s[i]=='>') {vec[i]=maxim;maxim--;}
        else {vec[i]=minim; minim++;}
    }
    vi check=vec;
    int f=0;
    sort(all(check));
    for(int i=1; i<number; i++)
    {
        if(check[i]!=i) {vec[number-1]=i; f=1; break;}
    }
    if(f==0) vec[number-1]=number;
    reverse(all(vec));
    for(int i=0; i<number; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
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