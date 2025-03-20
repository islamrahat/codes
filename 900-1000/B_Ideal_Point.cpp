#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int number, k;
        cin >> number >> k;
        int L=0, R=60;
        while(number--)
        {
            int l, r;
            cin >> l >> r;
            if(l<=k && r>=k)
            {
                L=max(L,l);
                R=min(R,r);                
            }
        }
        if(L==R) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}