#include <stdio.h>
void insertion_sort(int *arr, int sz);
int main()
{
    int unsorted_arr[] = {5,10,6,1,21,87,4};
    insertion_sort(unsorted_arr, 7);
     printf("The sorted array is: ");
    for (int i = 0 ; i < 7; i++)
    {
        printf("%d ", unsorted_arr[i]);
    }
}
void insertion_sort(int *arr, int sz)
{
    for (int i = 1; i < sz; i++)
    {
        int key = arr[i];
        int j = i - 1;
        int place = i;
        while (place > j && arr[j] > key)
        {
            int temp = arr[j];
            arr[j] = arr[place];
            arr[place] = temp;
            place--;
            j--;
            if (j < 0)
            {
                break;
            }
        }
    }
}
