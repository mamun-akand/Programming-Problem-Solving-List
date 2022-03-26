#include <stdio.h>

double pi = 3.14;

void my_function(){
    double pi = 3.1416; /* 'double variable' use korar karone eti local variable hoye gese */
    return;
}

int main() {

    printf("%lf\n", pi);

    my_function();
    printf("%lf\n", pi);

    return 0;
}



