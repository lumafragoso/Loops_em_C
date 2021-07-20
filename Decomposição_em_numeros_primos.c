#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

	int i, j, contagem, primo;
    int numero, contagem_print=1, aux;
    bool controle;

    scanf(" %d", &numero);

    aux = numero;

	if(numero<=1){
		printf("Erro, número precisa ser maior do que 1!");
	}
	else{
		for (i = 1; i <= (numero) ; i++){
        
        	primo =0;

        	for(j=2; j<i; j++){
				if(i%j == 0)
					primo++;
        	}
        	if(primo == 0 && i != 1){
            	if(numero % i == 0){
                	controle = true;
                	while (controle){
                    	if(numero % i !=0){
                        	controle = false;
                    	}
                    	else{
                        	numero = numero - (numero/i);
				        	contagem++;
                    	}
                	}
            	}
        	}
        
        	if(contagem != 0 && i != 1){
            	contagem_print= contagem_print * round(pow(i, contagem));
            	if(contagem_print != aux){
                	printf("%d^%d*", i, contagem);
            	}
            	else{
                	printf("%d^%d", i, contagem);
					i=numero;
            	}
            
        	}
        	contagem = 0;
    	}
	}

	return 0;
}