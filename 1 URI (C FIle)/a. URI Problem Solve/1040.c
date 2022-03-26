#include <stdio.h>

int main(){

    double a, b, c, d, avg, avg2, score;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    avg = (a*2 + b*3 + c*4 + d*1) / (2 + 3 + 4 + 1);

    printf("Media: %0.1lf\n", avg);

    if(avg >= 7.0) {
        printf("Aluno aprovado.\n");
    }

    if(avg < 5.0) {
        printf("Aluno reprovado.\n");
    }

    if(avg >= 5.0 && avg <= 6.9) {

        printf("Aluno em exame.\n");

        scanf("%lf", &score);
        printf("Nota do exame: %0.1lf\n", score);

        avg2 = (avg + score) / 2;

        if(avg2 >= 5.0){
            printf("Aluno aprovado.\n");
        }

        if(avg2 <= 4.9) {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %0.1lf\n", avg2);
    }
    return 0;
}
