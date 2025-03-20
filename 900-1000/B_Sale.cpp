#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number, range;
    cin >> number >> range;
    vector<int> vec(number);
    for(int i=0; i<number; i++)
        cin >> vec[i];
    sort(vec.begin(),vec.end());
    int sum=0;
    for(int i=0; i<range; i++)
    {
        if(vec[i]<=0) sum+=vec[i];
    }
    cout << abs(sum) << endl;
    return 0;
}    