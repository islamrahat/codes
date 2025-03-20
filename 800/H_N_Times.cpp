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
void repeat(int n, char c);
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int n;
        char c;
        scanf("%d", &n);
        scanf(" %c", &c);
        repeat(n,c);
    }
    return 0;
}
void repeat(int n, char c)
{
    for(int i=0; i<n; i++)
    {
        printf("%c ", c);
    } printf("\n");
}