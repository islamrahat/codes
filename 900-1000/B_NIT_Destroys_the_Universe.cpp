#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int number;
        cin >> number;
        vector<int> vec(number);
        for(int i=0; i<number; i++) cin >> vec[i];
        int count=0;
        if(vec[number-1]!=0) {vec.push_back(0); number++;}
        for(int i=0; i<number-1; i++)
        {
            if(vec[i]!=0 && vec[i+1]==0) count++;
        }
        (count>2)? cout << 2 << endl: cout << count << endl;
    }
    return 0;
}