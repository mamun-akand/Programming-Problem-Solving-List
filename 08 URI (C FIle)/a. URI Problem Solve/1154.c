#include <stdio.h>

int main(){

    int age, sum=0, count=0;
    double avg;

    while(1){
        scanf("%d", &age);

        if(age>=0){
            count++;
            sum = sum + age;
        }
        else{
            break;
        }
    }

    avg = (double)sum/count;

    printf("%0.2lf\n", avg);

    return 0;
}
