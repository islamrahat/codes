#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int number;
    cin >> number;
    list<int> ls;
    for(int i=0; i<number; i++)
    {
        int a; cin >> a;
        ls.push_back(a);
    }
    int sereja=0, dima=0, turn=0;
    for(int i=0; i<number; i++)
    {
        if(ls.front()>=ls.back())
        {
            if(turn==0)
            {
                sereja+=ls.front();
            }
            else dima+=ls.front();
            ls.pop_front();
        }
        else{
            if(turn==0) sereja+=ls.back();
            else dima+=ls.back();
            ls.pop_back();
        }
        turn=!turn;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}