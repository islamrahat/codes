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
    int number, count=1, max=1;
    string s, ans(2,'0');
    cin >> number; cin >> s;
    string buffer(2,'0'); buffer[0]=s[0]; buffer[1]=s[1]; ans[0]=s[0]; ans[1]=s[1];
    for(int i=0; i<number-1; i++)
    {
        for(int j=i+1; j<number-1; j++)
        {
            if(s[j]==buffer[0] && s[j+1]==buffer[1]) count++;
        }
        if(count>=max) {ans[0]=buffer[0]; ans[1]=buffer[1]; max=count;}
        buffer[0]=s[i]; buffer[1]=s[i+1];
        count=1;
    }
    cout << ans << endl;
    return 0;
}