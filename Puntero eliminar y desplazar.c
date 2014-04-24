#include<stdio.h>
#define TAM 5

void main()
{int i,*pv,v[TAM],pe;

for(i=0;i<TAM;i++)
    {v[i]=0;
    }
    for(i=0;i<TAM;i++)
        {printf("\nIngrese valor de Pos. n°%d:",i+1);
    scanf("%d",&v[i]);
        }
        printf("\nIngrese Pos. a eliminar: ");
        scanf("%d",&pe);
        pv=&v[pe--];
        for(i=pe--;i<TAM;i++)
            {v[i]=*pv;
            pv++;
            }
            printf("\nIngrese valor de la ultima posicion: ");
            scanf("%d",&v[TAM-1]);
            for(i=0;i<TAM;i++)
                {printf("Los valores son: %d\n",v[i]);
                }
}
