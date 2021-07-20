#include <stdio.h>

int main(){

    int V=0, N=0, i=0, controle=0, nome=0;
    char C;

    scanf(" %d %d", &N, &V);

    for (i = 0; i < N; i++){
        
        scanf(" %c %d", &C, &controle);

        if(controle>14 && V>0){
            switch (C){
                case 'A':
                    V = V - 10;
                    nome = 1;
                    break;
                case 'I':
                    V = V - 10;
                    nome = 2;
                    break;
                case 'R':
                    V = V - 6;
                    nome = 3;
                    break;
                case 'W':
                    V = V - 8;
                    nome = 4;
                    break;
                case 'S':
                    V = V - 4;
                    nome = 5;
                    break;
                case 'C':
                    V = V - 1;
                    nome = 6;
                    break;
            }
        }
    }
    if(V>0){
        printf("Casa caiu!");
    }
    else{
        if(nome == 1){
            printf("Alyson derrotou o dragão!");
        }
        else if(nome == 2){
            printf("Isaac derrotou o dragão!");
        }
        else if(nome == 3){
            printf("Rafaela derrotou o dragão!");
        }
        else if(nome == 4){
            printf("Wellington derrotou o dragão!");
        }
        else if(nome == 5){
            printf("Salgado derrotou o dragão!");
        }
        else if(nome == 6){
            printf("Careca derrotou o dragão!");
        }
    }
    
    return 0;
}