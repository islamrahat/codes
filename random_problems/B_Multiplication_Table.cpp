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
    int arr[number][number];
    for(int i=0; i<number; i++)
    {
        for(int j=0; j<number; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<number; i++)
    {
        int ans;
        if(arr[i][0]!=0) ans=arr[i][0];
        else ans=arr[i][1]; 
        for(int j=0; j<number; j++)
        {
            if(arr[i][j])
            {
                ans=gcd(ans,arr[i][j]);
            }
        }
        cout << ans << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}