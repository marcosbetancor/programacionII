#include<stdio.h>
#define TAM 12
void str_cpy(char*,char*);

void main()
{char vc1[TAM],vc2[TAM];
puts("Ingrese nombre");
fgets(vc1,sizeof(vc1),stdin);
puts("Ingrese apellido");
fgets(vc2,sizeof(vc2),stdin);
str_cpy(vc1,vc2);
puts(vc1);
}

void str_cpy(char* destino,char *acopiar)
{while(*acopiar)
    {*destino=*acopiar;
    destino++;
    acopiar++;
    };
    *destino='\0';
}
