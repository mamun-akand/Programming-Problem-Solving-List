#include <stdio.h>
#include <math.h>

int size = 40;
int ara[size];

void print_ara()
{
    int i;

    for(i=2 ; i<size ; i++){
        printf("%4d", ara[i]);
    }
    printf("\n");

    for(i=2 ; i<size ; i++){
        printf("----");
    }
    printf("\n");

    for(i=2 ; i<size ; i++){
        printf("%4d", i);
    }
    printf("\n\n\n");
}

void sieve()
{
    int i, j, root;

    for(i=2 ; i<size ; i++){
        ara[i] = 1;
    }

    print_ara();

    root = sqrt(size);
    for(i=2 ; i<=root ; i++){
        if(ara[i]==1){
            for(j=2 ; i*j<size ; j++){
                ara[i*j] = 0;
            }
            print_ara();
        }
    }
}

int is_prime(int n)
{
    if(n<2){
        return 0;
    }

    return ara[n];
}

int main()
{
    sieve();

    int n;

    while(1){
        printf("Enter your number (Enter 0 to exit) : ");
        scanf("%d", &n);

        if(n == 0){
            break;
        }

        if(n >= size){
            printf("The number should be less than %d\n", size);
            continue;
        }

        if(ara[n] == 1){
            printf("The number is a 'PRIME' number.\n");
        }
        else{
            printf("The number is 'NOT PRIME' number.\n");
        }
    }
    return 0;
}
