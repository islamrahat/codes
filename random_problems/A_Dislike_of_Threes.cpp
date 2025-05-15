#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int test, k=1;
    cin >> test;
    vector<int> vec(1000);
    for(int i=0; i<1000; i++)
    {
        if(k%3!=0 && k%10!=3) {vec[i]=k;}
        else i--;
        k++;
    }
    while (test--)
    {
        int number;
        cin >> number;
        cout << vec[number-1] << endl;  
    }
    return 0;
}