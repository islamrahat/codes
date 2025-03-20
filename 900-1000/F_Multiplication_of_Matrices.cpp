#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
int main()
{
    int ra, ca, rb, cb;
    cin >> ra >> ca;
    int arra[ra][ca];
    for(int i=0; i<ra; i++)
        for(int j=0; j<ca; j++)
            cin >> arra[i][j];
    cin >> rb >> cb;
    int arrb[rb][cb];
    for(int i=0; i<rb; i++)
        for(int j=0; j<cb; j++)
            cin >> arrb[i][j];
    int newMat[100][100]={0};
    for(int i=0; i<ra; i++)
    {
        for(int j=0; j<cb; j++)
        {
            for(int k=0; k<ca; k++)
            {
                newMat[i][j]+=arra[i][k]*arrb[k][j];
            }
        }
    }
    for(int i=0; i<ra; i++)
    {
        for(int j=0; j<cb; j++)
        {
            cout << newMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}