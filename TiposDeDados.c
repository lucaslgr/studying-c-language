
#include <stdio.h> // Para usar a função printf

int main(){
    //=================<Conversões automáticas de valores>==================
    int a, b;
    float c, d;
    a = 5.5;    //Conversão automática de float para int
    b = a /2.0; //Divisão de resultado real e conversão
    c = a/2;    //Divisão de resultado inteiro e conversão
    d = a/2.0;  //Divisão com resultado real
    printf("a=%d, b=%d, c=%f, d=%.3f\n\n", a, b, c, d); 

    //OBS: Divisão de float por inteior resultado é inteiro


    //=================<Conversões automáticas de valores>==================
    int a1, b1;
    float c1, d1;
    a1 = 5.5;    //Conversão automática de float para int
    b1 = a1 /(float)2.0; //Divisão de resultado real e conversão
    c1 = a1/(float)2;    //Divisão de resultado inteiro e conversão
    d1 = a1/(float)2.0;  //Divisão com resultado real
    printf("a=%d, b=%d, c=%f, d=%.3f\n\n", a1, b1, c1, d1); 


    //=================<Alinhamento de saída>==================
    printf("Valor: %10d\n", 10);
    printf("Valor: %10d\n", 110);
    printf("Valor: %25d\n", 20);
    printf("Valor: %25d\n\n", 20);

    

    //=================<Impressão de códigos especiais>==================
    /*
    -> \n pula linha
    -> \t executa uma tabulação
    -> \b executa um retrocesso
    -> \f leva o cursor para a próxima página
    -> \a emite um sinal sonoro(beep)
    -> \" exibe o caractere "
    -> \\ exibe o caractere \
    -> %% exibe o caractere %
    */


    return 0;
}