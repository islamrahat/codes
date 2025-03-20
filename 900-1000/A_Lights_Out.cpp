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
    int arr[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) cin >> arr[i][j];
    int target[10][10]={{1,1,1},{1,1,1},{1,1,1}};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]&1)
            {
                target[i-1][j]=!target[i-1][j];
                target[i][j-1]=!target[i][j-1];target[i][j]=!target[i][j];target[i][j+1]=!target[i][j+1];
                target[i+1][j]=!target[i+1][j];
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << target[i][j];
        }
        cout << endl;
    }
    return 0;
}