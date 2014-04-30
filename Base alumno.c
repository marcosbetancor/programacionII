#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int dd;
    int mm;
    int aa;}t_fecha;

 typedef struct{
    char apellido[30];
    char nombre[30];
    t_fecha fnac;
    float prom;
    int p1;
    int p2;}t_alumno;

void cargaalum(FILE*);

void main()
{FILE*basealumno;
fopen("arch.dat","w+b");
cargaalum(&basealumno);
fclose(basealumno);
 }


void cargaalum(FILE*basealumno)
    {t_alumno varreg;
    int salida=1;

    while(salida=1)
        {
        puts("Ingrese apellido");
        scanf("%s",varreg.apellido);
        puts("Ingrese nombre");
        scanf("%s",varreg.nombre);
        puts("Ingrese dia de nac.");
        scanf("%d",&varreg.fnac.dd);
        puts("Ingrese mes de nac.");
        scanf("%d",&varreg.fnac.mm);
        puts("Ingrese año de nac.");
        scanf("%d",&varreg.fnac.aa);
        puts("Ingrese nota de primero parcial");
        scanf("%d",&varreg.p1);
        puts("Ingrese nota de segundo parcial");
        scanf("%d",&varreg.p2);
        varreg.prom=varreg.p1*varreg.p2;
        fwrite(&varreg,sizeof(t_alumno),1,basealumno);
        puts("Para seguir ingresando alumnos ingrese 1, para salir 0");
        scanf("%d",salida);
        }
}
