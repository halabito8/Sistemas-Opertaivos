#include<stdio.h>
#include<time.h>

int main(){
    int i;
    clock_t empieza, acaba;
    double diferencia;
    empieza=clock();
    printf("Codigo haciendo algo\n");
    for(i=0;i<90000000;i++);
    acaba=clock();
    diferencia=(double)(acaba-empieza)/CLOCKS_PER_SEC;
    printf("El codigo tardo %lf segundos en ejecutarse\n",diferencia);
}
