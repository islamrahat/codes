#include<bits/stdc++.h>
using namespace std;
#define ll long long;
bool isDuplicate(int a, int b)
{
    if(a==b) return true;
    return false;
}
int main()
{
    int number, screen;
    cin >> number >> screen;
    vector<int> vec(number), reserve(screen);
    for(int i=0; i<number; i++) cin >> vec[i];
    queue<int> q;
    for(int i=0; i<number; i++)
    {
        for(int j=0; j<screen; j++)
        {
            reserve[j]=vec[i];
            i++;
        }
        int uniq = unique(reserve.begin(),reserve.end())-reserve.begin();
        cout << uniq << endl;
    }
    return 0;
}