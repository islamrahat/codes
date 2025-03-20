#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    vector<int> vec(4);
    for(int i=0; i<4; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    int a, b, c;
    c=vec[3]-vec[0];
    a=vec[1]-c;
    b=vec[2]-c;
    cout << a << " " << b << " " << c << endl;
    return 0;
}