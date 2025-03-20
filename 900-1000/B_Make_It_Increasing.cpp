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
bool isIncreasing(int len, vector<int> arr)
{
    for(int i=0; i<len-1; i++) {if(arr[i]>=arr[i+1]) return false;}
    return true;
}
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int number, f=1, count=0;
        cin >> number;
        vector<int> vec(number);
        for(int i=0; i<number; i++) {cin >> vec[i]; if(vec[i]<i+1) {f=0;}}
        if(f==0) {cout << -1 << endl; continue;}
        while(1)
        {
            for(int i=0; i<number-1; i++)
            {
                if(vec[i]>=vec[i+1]) {vec[i]/=2; count++;}
            }
            if(isIncreasing(number,vec)) break;
        }
        cout << count << endl;
    }
    return 0;
}