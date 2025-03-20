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
#define printarr(n, arr) for(int i=0; i<n; i++) printf("%d ", arr[i]); printf("\n");

int main()
{
	int arr[4], f;
    inparr(4, arr)
    sortasc(4, arr)
    /// All
    if(arr[0]==arr[1] && arr[1]==arr[2] && arr[2]==arr[3]) f=3;
    /// Three
    else if(arr[0]==arr[1] && arr[1]==arr[2]) f=2;
    else if(arr[0]==arr[1] && arr[2]==arr[3]) f=2;
    else if(arr[0]==arr[1] && arr[1]==arr[3]) f=2;
    else if(arr[1]==arr[2] && arr[2]==arr[3]) f=2;
    /// Two
    else if(arr[0]==arr[1]) f=1;
    else if(arr[1]==arr[2]) f=1;
    else if(arr[2]==arr[3]) f=1;
    else if(arr[3]==arr[0]) f=1;
    else if(arr[1]==arr[3]) f=1;
    else if(arr[0]==arr[2]) f=1;
    /// None
    else f=0;
    printf("%d\n", f);
    return 0;
}
