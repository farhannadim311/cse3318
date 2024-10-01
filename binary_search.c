#include <stdio.h>
int binary_search(int val, int N, int* A);

int main()
{
    int sorted_array[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int found = binary_search(10, 11, sorted_array);
    printf("The index is at %d \n" , found);
}
int binary_search(int val, int N, int* A)
{
    int m = N/2;
    int l = 0;
    int r = N;
    while (l < r)
    {
        if (A[m] == val)
        {
            return m;
        }
        else if (A[l] > val )
        {
           r = m;
        }
        else 
        {
            l = m;
        }
    m = (l + r) / 2;
    }
}
