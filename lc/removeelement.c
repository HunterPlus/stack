#include <stdio.h>

void swap (int *a, int *b) { int t = *a; *a = *b; *b = t; }

int rmelement (int a[], int n, int key)
{
    int l = n;
    int i = 0;
    while (i < l)
    {
        if (a[i] == key)
        {
            swap(&a[i], &a[l - 1]);
            l--;
            continue;
        }
        i++;
    }
    return l;
}
void printarray (int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main()
{
    int arr[] = {0,1,2,2,3,0,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 2;
    printarray(arr, n);
    
    int l = rmelement(arr, n, val);
    printarray(arr, n);
    printf("%d\n", l);

    return 0;
}
