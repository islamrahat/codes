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
    ll number, uno=0, dos=0, tres=0, sum=0, quatro=0;
    cin >> number;
    vi vec(number);
    for(int i=0; i<number; i++)
    {
        cin >> vec[i];
        if(vec[i]==1) uno++;
        else if(vec[i]==2) dos++;
        else if(vec[i]==3) tres++;
        else if(vec[i]==4) quatro++;
    }
    if(tres<=uno)
    {
        sum+=tres;
        uno-=tres;
        tres=0;
    }
    else{
        sum+=uno;
        tres-=uno;
        uno=0;
    }
    if(dos%2==0)
    {
        sum+=(dos/2);
    }
    else {sum+=(dos/2); uno+=2;}
    sum+=ceil((float)uno/4);
    sum+=quatro;
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}