#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
#define inparr(n, arr) for(int i=0; i<n; i++){scanf("%d", &arr[i]);}
#define outparr(n, arr) for(int i=0; i<n; i++){printf("%d ", arr[i]);}
int max(int n, int arr[]) {int max=arr[0];for(int i=0; i<n; i++){if(arr[i]>max) max = arr[i];}return max;}
int min(int n, int arr[]) {int min=arr[0];for(int i=0; i<n; i++){if(arr[i]<min) min = arr[i];}return min;}
#define sortasc(n, arr) for(int i=0; i<n; i++){for(int j=0; j<n-1; j++){if(arr[j]>arr[j+1]){int temp = arr[j];arr[j] = arr[j+1];arr[j+1] = temp;}}}
#define sortdesc(n, arr) for(int i=0; i<n; i++){for(int j=0; j<n-1; j++){if(arr[j]<arr[j+1]){int temp = arr[j];arr[j] = arr[j+1];arr[j+1] = temp;}}}
int main()
{
    int number;
    cin >> number;
    int arr[number];
    for(int i=0; i<number; i++) cin >> arr[i];
    int fcount=0, zcount=0;
    for(int i=0; i<number; i++)
    {
        if(arr[i]==5) fcount++;
        else zcount++;
    }
    if(fcount<9 && zcount>0) cout << 0 << endl;
    else if(zcount==0) cout << -1 << endl;
    else
    {
        int range=fcount/9;
        for(int i=0; i<range*9; i++)
        {
            cout << 5;
        }
        for(int i=0; i<zcount; i++)
        {
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}