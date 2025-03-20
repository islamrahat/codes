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
    int number, test;
    scanf("%d%d", &number, &test);
    int arr[number];
    inparr(number, arr)
    sortasc(number, arr)
    while(test--)
    {
        int target;
        scanf("%d", &target);
        int low = 0, high = number-1;
        int mid = (low+high)/2;
        while(low<=high)
        {
            if(arr[mid]<target) low = mid+1;
            else if(arr[mid]>target) high = mid-1;
            else {printf("found\n"); break;}
            mid = (low+high)/2;
        }
        if(low>high) printf("not found\n");
    }
    return 0;
}