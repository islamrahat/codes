#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int number, max, index, f=0;
        cin >> number;
        vector<int> vec(number+5);
        for(int i=0; i<number; i++) cin >> vec[i];
        max=*max_element(vec.begin(),vec.end());
        if(vec[0]==max)
        {
            if(vec[0]>vec[1]) {cout << 1 << endl; continue;}
        }
        if(vec[number-1]==max)
        {
            if(vec[number-1]>vec[number-2]) {cout << number << endl; continue;}
        }
        for(int i=1; i<number-1; i++)
        {
            if(vec[i]==max)
            {
                if(vec[i]>vec[i+1] || vec[i]>vec[i-1]) {index=i+1; f=1; break;}
            }
        }
        if(f) cout << index << endl;
        else cout << -1 << endl;
    }
    return 0;
}