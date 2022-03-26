#include <stdio.h>

int main()
{
    int a, b, s, l, r, HCF;

    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    if(a<b) {
        s = a;
        l = b;
    }
    else {
        s = b;
        l = a;
    }                       /* till this with (if), Varifying Small (s) and Large (l) number */

    if(s==0) HCF=s;         /* if any number (s) zero, then HCF=0*/

    else if(l==0) HCF=l;    /* if any number (s) zero, then HCF=0*/

    else {
        while(s!=0) {
            r = l%s;
            l = s;
            s = r;
        }
        HCF = l;
    }

    printf("Highest Common Factor (HCF) is : %d\n", HCF);

    return 0;
}
