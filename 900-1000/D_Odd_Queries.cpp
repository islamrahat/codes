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
bool isSumOdd(int len, vector<int> arr)
{
    int odd=0;
    for(int i=0; i<len; i++) if(arr[i]&1) odd++;
    if(odd&1) return true;
    else return false;
}
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int number, q;
        cin >> number >> q;
        vector<int> vec(number), reserve(number);
        for(int i=0; i<number; i++) cin >> vec[i];
        reserve=vec;
        while(q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            for(int i=l-1; i<r; i++) vec[i]=k;
            if(isSumOdd(number,vec)) cout << "YES" << endl;
            else cout << "NO" << endl;
            vec=reserve;
        }
    }
    return 0;
}