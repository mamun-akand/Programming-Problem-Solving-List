#include <stdio.h>

int find_min(int ara[], int n);

int main()
{
    int array[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int n = 11, min_num;

    min_num = find_min(array, n);
    printf("%d", min_num);

    return 0;
}


int find_min(int ara[], int n)
{
    int min = ara[0];
    int i;

    for( i=1; i<n; i++ ) {
        if(ara[i] < min) {
            min = ara[i];
        }
    }

    return min;
}
