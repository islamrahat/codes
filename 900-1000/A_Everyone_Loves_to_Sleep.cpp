#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int number, h, m, minimum;
        cin >> number >> h >> m;
        int slept=(h*60)+m;
        minimum=1439;
        while(number--)
        {
            int h1, m1, alarm, ans;
            cin >> h1 >> m1;
            alarm=(h1*60)+m1;
            if(alarm>=slept) {ans=alarm-slept;}
            else
            {
                int diff=1440-slept;
                alarm+=diff;
                ans=alarm;
            }
            if(ans<=minimum) minimum=ans;
        }
        cout << minimum/60 << " " << minimum%60 << endl;
    }
    return 0;
}