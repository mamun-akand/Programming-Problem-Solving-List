#include <stdio.h>

int find_sum(int ara[], int n);

int main()
{
    int array[] = {10, 20, 30, 40, 50, 10, 20, 30, 40, 50};
    int numbers_ara[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};

    int n1 = 10, n2 = 11, total_sum, numbers_total;

    total_sum = find_sum(array, n1);
    printf("%d\n", total_sum);

    numbers_total = find_sum(numbers_ara, n2);
    printf("%d\n", numbers_total);

    return 0;
}



int find_sum( int ara[], int n) {

    int sum = 0;
    int i;

    for( i=0; i<n; i++ ) {
        sum = sum + ara[i];
    }

    return sum;
}
