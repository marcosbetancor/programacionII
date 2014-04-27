#include<stdio.h>
#define TAM 12
int str_cmp(char*,char*);

void main()
{char vc1[TAM],vc2[TAM];
int recibe;

puts("Ingrese primer palabra");
fgets(vc1,sizeof(vc1),stdin);
puts("Ingrese segunda paralabra");
fgets(vc2,sizeof(vc2),stdin);
recibe=str_cmp(vc1,vc2);
if(recibe==0)
    puts("Las cadenas son iguales");
    else
        if(recibe>0)
            puts("La segunda cadena es mas grande");
            else
                puts("La primer cadena es mas chica");
}

int str_cmp(char*primpalabra,char* segpalabra)
{while(*primpalabra==*segpalabra&&*primpalabra&&*segpalabra)
    {primpalabra++;
    segpalabra++;
    }return *primpalabra-*segpalabra;
}
