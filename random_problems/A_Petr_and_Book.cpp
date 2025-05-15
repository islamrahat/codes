#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    vector<int> vec(7);
    for(int i=0; i<7; i++) cin >> vec[i];
    int ans=0, index;
    while(ans<number)
    {
        for(int i=0; i<7; i++)
        {
            ans+=vec[i];
            if(ans>=number) {index=i+1; break;}
        }
    }
    cout << index << endl;
    return 0;
}