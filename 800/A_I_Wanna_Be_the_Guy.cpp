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
	int level, n, m;
	scanf("%d", &level);
	scanf("%d", &n); int arr1[n]; inparr(n, arr1)
	scanf("%d", &m); int arr2[m]; inparr(m, arr2)
	int arr[n+m] = {}, i, f=1;
	for(i=0; i<n; i++) arr[i] = arr1[i];
	for(int j=0; j<m; j++) {arr[i] = arr2[j]; i++;}
	sortasc(n+m, arr)
    if(arr[0]!=1) {printf("Oh, my keyboard!\n"); return 0;}
	for(i=0; i<n+m-1; i++)
	{
		if(arr[i]-arr[i+1]>1 || arr[i]-arr[i+1]<-1) f=0;
	}
	if(arr[n+m-1]!=level) f=0;
	if(f==1) printf("I become the guy.\n");
	else printf("Oh, my keyboard!\n");
    return 0;
}