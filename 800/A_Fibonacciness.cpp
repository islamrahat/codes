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
	int test;
	scanf("%d", &test);
	while(test--)
	{
		int a, b, c, d, sum, sub;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        sum = a+b;
        sub = c-b;
        if(sum+c==d && b+sum==c) printf("3\n");
        else if(sum+c==d || b+sum==c) printf("2\n");
        else if(sub+c==d) printf("2\n");
        else printf("1\n");
    }
    return 0;
}
