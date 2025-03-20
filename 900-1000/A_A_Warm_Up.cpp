#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int number, f=0;
        cin >> number;
        vector<int> vec(3);
        for(int i=0; i<3; i++) cin >> vec[i];
        if(vec[number-1]==0) {cout << "NO" << endl; continue;}
        int reserve=vec[number-1];
        if(vec[reserve-1]==0) {cout << "NO" << endl; continue;}
        cout << "YES" << endl;
    }
    return 0;
}