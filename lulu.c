#include <stdio.h>
#include "funciones.h"
float interes(float a){
    float tasa = a/12;
    return tasa;
}
float calcularMontoMensual(float a, float b){
    float monto = (a * b)/100;
    return monto;
}
float calcularInteres (float a, float b){
    float gananmensual = a+b;
    return gananmensual;
}
float calcularahorromen (float a, float b){
    float ahorrado = a+b;
    return ahorrado;
}
int main()
{
    float inanu, montoan, meses, tasa, gananmensual, monto, inggen, ahorrado, montot, i ;
    printf ("Ingrese el monto a invertir: ");
    scanf ("%f",&inanu);

    printf ("Ingrese el interes anual que se tiene: ");
    scanf ("%f",&montoan);

    printf ("Ingrese los meses que se usara: ");
    scanf ("%f",&meses);

    tasa=interes(montoan);
    ahorrado=0+inanu;
    montot=meses*inanu;
    meses=meses+1;
    printf("Mes\tMont.m\tAhorro.m\n");
    i=0;
    printf("%.f\t%.2f\n", i, ahorrado);
    for (float i = 1; i < meses; i++) {
        monto = calcularMontoMensual(ahorrado, tasa);
        
        gananmensual = calcularInteres(monto,ahorrado);
        ahorrado = calcularahorromen(gananmensual, inanu);
        
        
        printf("%.f\t%.2f\t%.2f\n", i, gananmensual, monto);
}
 inggen=gananmensual-montot;
 printf("El interes generado es: %.2f", inggen);
    return 0;
}
