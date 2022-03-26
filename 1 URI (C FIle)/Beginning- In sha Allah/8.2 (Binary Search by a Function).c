#include <stdio.h>

int find_num(int array[], int low, int high, int num) {     /* Function creating*/

    int mid;

    while(low <= high) {
        mid = (low + high)/2;

        if(num == array[mid]) {
            break;
        }
        else if(num < array[mid]) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }

    return array[mid];
}                                                           /* Function creating End*/

int main()
{
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;
    int num = 97;
    int mid_indx;

    mid_indx = find_num(ara, low_indx, high_indx, num);
    printf("%d is found in the array. It is %dth element of array.", ara[mid_indx], mid_indx);

    return 0;
}

