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

void solve()
{
    int number, k;
    cin >> number >> k;
    vi vec(number), mod(number), modsix(number), modtwo(number);
    for(int i=0; i<number; i++)
    {
        cin >> vec[i];
        mod[i]=vec[i]%k;
    }
    int minim=*min_element(all(mod));
    if(minim==0) {cout << 0 << endl; return;}
    int temp=INT_MAX;
    if(k==4)
    {
        int six=count(all(vec),6);
        int two=count(all(vec),2);
        if(six>1 || two>1) {cout << 0 << endl; return;}
        else if(six>0 && two>0) {cout << 0 << endl; return;}
        int even=0;
        for(int i=0; i<number; i++)
        {
            if(!(vec[i]&1)) even++;
        }
        if(even==0) temp=2;
        else if(even==1) temp=1;
        else {cout << 0 << endl; return;}
    }
    int maxim=*max_element(all(mod));
    cout << min(k-maxim,temp) << endl;
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