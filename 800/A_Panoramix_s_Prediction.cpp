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
bool isPrime(int n)
{
    int f=1;
    for(int i=2; i<n; i++)
    {
        if(n%i==0) f=0;
    }
    if(f==0) return false;
    return true;
}
int main()
{
    bool f;
    int n, m;
    scanf("%d%d", &n, &m);
    for(int t=n+1; t<m; t++)
    {
        f = isPrime(t);
        if(f) break;
    }
    if(!isPrime(m)) f=true;
    if(f) printf("NO\n");
    else printf("YES\n");
    return 0;
}