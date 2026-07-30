#include<stdio.h>
void sort(int *array, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(array[i] > array[j])
            {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    int n, i, arr[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    sort(arr, n);
}
