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
int seqCheck(int len, int arr[])
{
    int maximum=1, count=1, i=0;
    for(int j=i; j<len-1; j++)
    {
        if(arr[j]<=arr[j+1])
        {
            count++;
            if(count>=maximum) maximum=count;
            continue;
        }
        count=1;
        i++;
        j=i-1;
    }
    return maximum;
}
int main()
{
    int number;
    cin >> number;
    if(number==1) {cout << 1 << endl; return 0;}
    int arr[number];
    inparr(number,arr)
    cout << seqCheck(number,arr) << endl;
    return 0;
}