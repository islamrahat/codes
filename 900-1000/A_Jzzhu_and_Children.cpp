#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    int number, candy;
    cin >> number >> candy;
    vector<int> vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    int index;
    int power=0, maximum=*max_element(vec.begin(),vec.end());
    while(maximum>candy){maximum/=candy; power++;}
    for(int i=0; i<number; i++)
    {
        vec[i]=ceil(vec[i]/pow(candy,power));
    }
    maximum=*max_element(vec.begin(),vec.end());
    for(int i=0; i<number; i++)
    {
        if(vec[i]==maximum) {index=i+1;}
    }
    cout << index << endl;
    return 0;
}