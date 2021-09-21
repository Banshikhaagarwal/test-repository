#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    disp(arr, 10);
    return 0;
    }
    void disp( int*num, int size)
    {
         int i;
    for (int i=0; i<size; i++)
    {
        printf("%d ", num[i]);
        }
        }