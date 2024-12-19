#include <stdio.h> //inclusão stdio


int main(){

int idade = 0; //variavel idade
int status = 0;
printf("Digite sua idade: ");
scanf("%d",&idade);

if(idade >= 18) status = 1;
if((idade >= 16) && (idade < 18)) status = 2; //lógica and (E)
if(idade < 16) status = 3; 

switch (status)
{
case 1:

    printf("Libeardo");
    break;

case 2:    
    printf("Apresente termo de responsabilidade");
    break;

case 3:
    printf("Nao libeardo");
    break;

default:
    break;
}





return 0;
}

