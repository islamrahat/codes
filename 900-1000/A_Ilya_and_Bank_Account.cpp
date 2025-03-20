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
    string s;
    cin >> s;
    if(s[0]!='-') cout << s << endl;
    else
    {
        int len=s.size();
        if(len==2) cout << 0 << endl;
        else
        {
            if(len==3 && (s[len-2]=='0' || s[len-1]=='0')) {s.pop_back(); s.pop_back(); s[0]='0';}
            else if(s[len-1]>=s[len-2]) s.pop_back();
            else
            {
                s[len-2]=s[len-1];
                s.pop_back();
            }
            cout << s << endl;
        }
    }
    return 0;
}