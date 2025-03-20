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
        int count=0, power = 1, number, digit, real;
        scanf("%d", &number);
        real = number;
        while(number>0)
        {
            digit = number%10;
            number/=10;
            if(digit!=0) count++;
        }
        printf("%d\n", count);
        number = real;
        while(number>0)
        {
            digit = number%10;
            if(digit != 0)
            {
                real = digit * power;
                printf("%d ", real);
            }
            number/=10;
            power *= 10;
        }
        printf("\n");
    }
    return 0;
}