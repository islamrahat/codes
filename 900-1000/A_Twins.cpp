#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    int number, count=0;
    cin >> number;
    vector<int> vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    sort(vec.rbegin(), vec.rend());
    long long int ans1=0, ans2=0;
    for(int i=0; i<number; i++)
    {
        for(int j=0; j<=i; j++) ans1+=vec[j];
        for(int j=i+1; j<number; j++) ans2+=vec[j];
        if(ans1<=ans2) count++;
        else break;
        ans1=0; ans2=0;
    }
    cout << count+1 << endl;
    return 0;
}