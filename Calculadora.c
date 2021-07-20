#include <stdio.h>
#include <math.h>

int main(){
    //VARIAVEIS
    double n1=0.0, n2=0.0;
    int n3=0;
    char operacao;

    scanf(" %s", &operacao);
    
    //LOOP PARA ENQUANTO NÃO FOR DIGITADO "E"
    while (operacao != 'e'){
        
        //CASO SEJA POTENCIA E O EXPOENTE DEVE SER INTEIRO
        if(operacao == '^'){
            scanf(" %lf %d", &n1, &n3);
        }
        else{
            scanf(" %lf %lf", &n1, &n2);
            //CASO A OPERAÇAO SEJA A DIVISÃO E O DENOMINADOR IGUAL A ZERO
            //*if( operacao =='/' &&  n2==0){
                //printf("Digite novamente, denominador zero!");
                //scanf(" %lf %lf", &n1, &n2);}
            }
        
        switch (operacao){
        case '+':
            printf("%.3lf+%.3lf=%.3lf\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.3lf-%.3lf=%.3lf\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.3lf*%.3lf=%.3lf\n", n1, n2, n1 * n2);
            break;
        case '/':
            printf("%.3lf/%.3lf=%.3lf\n", n1, n2, n1/n2);
            break;
        case '^':
            printf("%.3lf^%d=%.3lf\n", n1, n3, round(pow(n1, n3)));
            break;
        }
        
        //LER VARIÁVIEIS
        scanf(" %c", &operacao);
    }
    return 0;
}