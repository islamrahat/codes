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
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int number;
        cin >> number;
        vector<int> vec(number);
        for(int i=0; i<number; i++) cin >> vec[i];
        sort(vec.begin(),vec.end());
        int minimum=vec[0], maximum=vec[number-1];
        int countmin=0, countmax=0;
        for(int i=0; i<number; i++)
        {
            if(vec[i]==minimum) countmin++;
            if(vec[i]==maximum) countmax++;
        }
        cout << countmin*countmax*2 << endl;
    }
    return 0;
}