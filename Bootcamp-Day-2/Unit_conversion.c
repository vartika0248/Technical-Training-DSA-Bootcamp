#include<stdio.h>
int main()
{
    float kg,g,m,cm;
    printf("Enter value in meter:\n");
    scanf("%f",&cm);
    printf("Enter value in Kilogram:\n");
    scanf("%f",&kg);
    m=cm/100;
    g=kg*1000;
    printf("%f centimeter is equal to %f meter\n",cm,m);
    printf("%f kg is equal to %f g\n",kg,g);
    return 0;
}