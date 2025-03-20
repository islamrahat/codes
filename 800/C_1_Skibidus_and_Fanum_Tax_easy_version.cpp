#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int gcd(int a, int b) {while (b != 0) {int temp = b;b = a % b;a = temp;}return a;}
#define inparr(n, arr) for(int i=0; i<n; i++){scanf("%d", &arr[i]);}
#define outparr(n, arr) for(int i=0; i<n; i++){printf("%d ", arr[i]);}
int max(int n, int arr[]) {int max;for(int i=0; i<n; i++){if(arr[i]>max) max = arr[i];}return max;}
int min(int n, int arr[]) {int min;for(int i=0; i<n; i++){if(arr[i]<min) min = arr[i];}return min;}
#define sortasc(n, arr) for(int i=0; i<n; i++){for(int j=0; j<n-1; j++){if(arr[j]>arr[j+1]){int temp = arr[j];arr[j] = arr[j+1];arr[j+1] = temp;}}}
#define sortdesc(n, arr) for(int i=0; i<n; i++){for(int j=0; j<n-1; j++){if(arr[j]<arr[j+1]){int temp = arr[j];arr[j] = arr[j+1];arr[j+1] = temp;}}}
bool isSorted(int n, int a[]);
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int n, m, f = 0;
        scanf("%d%d", &n, &m);
        int a[n], b;
        inparr(n, a)
        scanf("%d", &b);
        for(int i=0; i<n; i++)
        {
            a[i] = b-a[i];
            if(isSorted(n,a)) {f = 1; break;}
        }
        if(f==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
bool isSorted(int n, int a[])
{
    bool t = true;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1]) t = false;
    }
    return t;
}