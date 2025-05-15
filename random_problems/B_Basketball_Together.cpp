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
    int number, d, count=0;
    cin >> number >> d;
    list<int> vec;
    for(int i=0; i<number; i++)
    {
        int a; cin >> a; vec.push_back(a);
    }
    vec.sort();
    while(1)
    {
        if(vec.empty()) break;
        if(vec.back()>d)
        {
            count++;
            vec.pop_back();
        }
        else
        {
            int a=ceil((double)(d+1)/(vec.back()));
            if(vec.size()>=a)
            {
                for(int i=0; i<a-1; i++)
                {
                    vec.pop_front();
                }
                vec.pop_back();
                count++;
            }
            else break; 
        }
    }
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}