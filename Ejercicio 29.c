#include <stdio.h>
#include <conio.h>
#define TAM 3

void cargamat (float [][TAM]);
void muestra (float,float,float,float,float,float);
void calcula (float [][TAM]);
void main()
{
float matriz [TAM][TAM]={{0}};
int condseguir;

while(condseguir!=0)
    {system("cls");
    fflush(stdin);
    cargamat(matriz);
    calcula (matriz);
    puts("\n\nIngrese 0(cero) para salir,1(uno) para continuar");
    do
        {scanf("%d",&condseguir);
    }while(condseguir!=0&&condseguir!=1);
}}

void cargamat (float matriz[][TAM])
{int i,j;
    for(i=0;i<TAM;i++)
        {for(j=0;j<TAM;j++)
            {printf("Ingrese valor de la posición [%d][%d]\n",i,j);
            scanf("%f",&matriz[i][j]);
            }
        }
}

void muestra (float diagprin,float supprin,float infprin,float diagsec,float supsec,float infsec)
{
    printf("Diagonal principal: %f\nSuperior Principal: %f\nInferior Principal: %f\nSuperior principal + Diagonal principal: %f\nInferior Principal con Diagonal: %f\n\nDiagonal secundaria: %f\nSuperior Secundaria:%f\nInferior Secundaria:%f\nSuperior Sec+Diagonal Sec:%f\nInferior Sec+Diag Sec:%f",diagprin,supprin,infprin,supprin+diagprin,infprin+diagprin,diagsec,supsec,infsec,supsec+diagsec,infsec+diagsec);
}

void calcula (float matriz[][TAM])
{   int i,u,diagonalprin=0,diagonalsec=0,inferiorprin=0,superiorprin=0,superiorsec=0,inferiorsec=0;
    for(i=0;i<TAM;i++)
    {
    for(u=0;u<TAM;u++)
        {
        if(i==u)
            diagonalprin+=matriz[i][u];
        else
            if(i<u)
                superiorprin+=matriz[i][u];
            else
                inferiorprin+=matriz[i][u];
        if(i+u==TAM-1)
            diagonalsec+=matriz[i][u];
        else
            if(i+u<=TAM-2)
                superiorsec+=matriz[i][u];
            else
                inferiorsec+=matriz[i][u];
        };
    };
    muestra(diagonalprin,superiorprin,inferiorprin,diagonalsec,superiorsec,inferiorsec);
}

