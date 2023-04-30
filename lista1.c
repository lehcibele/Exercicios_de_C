
#include<stdio.h>

int main(){
    
    //QUESTÃO 6:
    printf("Leticia Cibele\n\n");
    
    //QUESTÃO 7:
    printf("Maça Banana\n\n");
    
    //QUESTÃO 8:
    printf("Maça\nBanana\n\n");
    
    //QUESTÃO 9:
    float c;
    c = -3 + (875*434) - (144/12);
    printf("%.0f\n\n", c);
    
    //QUESTÃO 10:
    float r;
    r = ((-3+875)*(434-144))/12;
    printf("%.0f\n\n", r);
    
    //QUESTÃO 11:
    float d;
    d = ((-3+875)*(434-144))/12;
    printf("%f\n\n", d);
    
    //QUESTÃO 12:
/*  char letra;
    letra = getchar();
    printf("Oi ");
    putchar(letra);
    printf("!\n\n"); */
    
    //QUESTÃO 13:
/*  char le; 
    le = getchar();
    printf("Bom dia ");
    putchar(le);
    printf("!"); */
    
    //QUESTÂO 14:
/*  char nome[40];
    printf("Digite um nome: \n");
    scanf("%40s", nome);
    printf("Bom dia %s!", nome); */
    
    //QUESTÃO 15:
/*  int num1, num2, soma;
    float media;
    scanf("%d %d", &num1, &num2);
    soma = num1+ num2;
    media = (float)(soma/2);
    printf("A soma entre %d e %d é %d e a média é %.1f", num1, num2, soma, media); */ 
    
    //QUESTÃO 16:
/*  float num1, num2, soma, media;
    scanf("%f %f", &num1, &num2);
    soma = num1+ num2;
    media = (soma/2);
    printf("A soma entre %.1f e %.1f é %.1f e a média é %.1f", num1, num2, soma, media); */
    
    //QUESTÃO 17:
/*  float celsius, f;
    scanf("%f", &celsius);
    f = (((9*celsius)/5) + 32);
    printf("%.1f", f);*/
    
    //QUESTÃO 18:
/*  int num, soma;
    printf("Digite o primeiro valor: ");
    scanf("%d", &num);
    soma = soma + num;
    
    printf("Digite o segundo valor: ");
    scanf("%d", &num);
    soma = soma + num;
    
    printf("Digite o terceiro valor: ");
    scanf("%d", &num);
    soma = soma + num;
    
    printf("A soma é %d", soma); */
    
    //QUESTÃO 19: 
    int num1, num2;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    num2 = num1*1000000;
    
    printf("Digite o segundo valor: ");
    scanf("%d", &num1);
    num2 = num2 +(num1*1000);
    
    printf("Digite o terceiro valor: ");
    scanf("%d", &num1);
    num2 = num2 + num1;
    
    printf("Digite o quarto valor: ");
    scanf("%d", &num1);
    
    
    printf("A soma %d, %d, %d, %d é %d", (num2/1000000), ((num2%1000000)/1000), (num2%1000), num1, ( (num2/1000000) + ((num2%1000000)/1000) + (num2%1000) + num1 )  );
    return 0;
}

/*  ALGORITNOS DAS QUESTÕES:

QUESTÃO 6: 
    escreva("Leticia Cibele");
Fim

QUESTÃO 7: 
    escreva("Maça Banana");
Fim
    
QUESTÃO 8:
    escreva("Maça\nBanana");
Fim
    
QUESTÃO 9:
variaveis:
    float: c;
    c= -3 + (875*343) - (144/12);
Fim
    
QUESTÃO 10:
variaveis:
    float: r;
    r = ((-3+875)*(434-144))/12;
    escreva("%.0f", r);
Fim

QUESTÃO 11:
variaveis:
    float: d;
    d = ((-3+875)*(434-144))/12;
    escreva("%f", d);
Fim
  
QUESTÃO 12:
variaveis:
    caractere: letra;
    letra = getchar();
    escreva("Oi");
    putchar(letra);
    escreva("!");
Fim
    
//QUESTÃO 13:
variaveis:
    caractere: le;
    le= getchar();
    screva("Bom dia");
    putchar(le);
    escreva("!");
Fim

//QUESTÃO 14:
variaveis:
    caractere: nome[40];
    escreva("digite seu nome: ");
    leia(nome);
    escreva("Bom dia nome!");
Fim

//QUESTÃO 15:
variaveis:
    inteiros: num1, num2, soma;
    float: media;
    leia(num1);
    leia(num2);
    soma = num1 + num2;
    media = (float)(soma/2);
    escreva("a soma entre num1 e num2 é soma e a media é media");
Fim

//QUESTÃO 16:
variaveis:
    float: num1, num2, soma, media;
    leia(num1); 
    leia(num2);
    soma = num1 + num2;
    media = soma/2;
    escreva("a soma entre num1 e num2 é soma e a media é media");

//QUESTÃO 17:
variaveis:
    float: celsius, f;
    leia(celsius);
    f = ((9*c)/5)+32;
    escreva(f);
Fim

//QUESTÃO 18: 
variaveis: 
    inteiros: num soma;
    escreva(Digite o primeiro valor: );
    leia(num);
    soma = soma + num;
    escreva(Digite o segundo valor: );
    leia(num);
    soma = soma + num;
    escreva(Digite o terceiro valor: );
    leia(num)
    soma = soma + num;
    escreva(A soma é soma);
Fim

*/



