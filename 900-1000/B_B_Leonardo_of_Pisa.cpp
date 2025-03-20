#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int a, b, x, f=1;
        cin >> a >> b >> x;
        if(max(a,b)>x) {cout << 0 << endl; continue;}
        int ans=a+b, count=1, prev=max(a,b);
        while(ans<=x)
        {
            int temp=ans;
            ans+=prev;
            prev=temp;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}