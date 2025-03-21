#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    vector<int> vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    int sereja=0, dima=0, turn=0;
    int left=0, right=number-1;
    while(left<=right)
    {
        if(vec[left]>=vec[right])
        {
            if(turn==0)
            {
                sereja+=vec[left];
            }
            else dima+=vec[left];
            left++;
        }
        else
        {
            if(turn==0)
            {
                sereja+=vec[right];
            }
            else dima+=vec[right];
            right--;
        }
        turn=!turn;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}