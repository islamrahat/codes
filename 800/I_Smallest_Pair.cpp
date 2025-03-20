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
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int number;
        scanf("%d", &number);
        int arr[number], ans, min=9999999;
        inparr(number, arr)
        for(int i=0; i<number; i++)
        {
            for(int j=i+1; j<number; j++)
            {
                ans = arr[i]+arr[j]+j-i;
                if(min>ans) min = ans;
            }
        }
        printf("%d\n", min);
    }
    return 0;
}