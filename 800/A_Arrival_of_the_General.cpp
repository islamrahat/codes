#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    int number, f=0;
    cin >> number;
    vector<int> vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    int maximum=*max_element(vec.begin(),vec.end());
    int minimum=*min_element(vec.begin(),vec.end());
    int minind, maxind;
    for(int i=0; i<number; i++)
    {
        if(f==0) 
        {
            if(vec[i]==maximum){maxind=i; f=1;}
        }
        if(vec[i]==minimum)
        {
            minind=i;
        }
    }
    int count=0;
    if(maxind<minind) count=maxind+(number-minind-1);
    else count=maxind+(number-minind-2);
    cout << count << endl;
    return 0;
}