#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    char dir;
    cin >> dir;
    string target, text;
    cin >> text;
    int len=text.size();
    target="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(dir=='R')
    {
        for(int i=0; i<len; i++)
        {
            for(int j=1; j<30; j++)
            {
                if(text[i]==target[j]) {cout << target[j-1]; break;}
            }
        }
        cout << endl;
    }
    else if(dir=='L')
    {
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<29; j++)
            {
                if(text[i]==target[j]) {cout << target[j+1]; break;}
            }
        }
        cout << endl;
    }
    return 0;
}