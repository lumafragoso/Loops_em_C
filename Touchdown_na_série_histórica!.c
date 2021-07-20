#include <stdio.h>

int main(){

    //VARIAVEIS
    int TD_saints, FG_saints, PAT_saints, TD_buc, FG_buc, PAT_buc, placar_saints, placar_buc, N, soma_saints, soma_buc;
    int i=1,TD_totais_saints=0, TD_totais_buc=0, FG_totais_saints=0, FG_totais_buc=0, PAT_totais_saints=0, PAT_totais_buc=0; 
    TD_saints= FG_saints= PAT_saints= TD_buc= FG_buc= PAT_buc= placar_saints= placar_buc= N= soma_saints= soma_buc=0;

    scanf("%d", &N);
    
    for (i = 1; i <=(2*N); i++){

        //JOGOS BUCC
        if (i % 2 == 0){
            scanf(" %d %d %d", &TD_buc, &FG_buc, &PAT_buc);
            soma_buc = soma_buc + (TD_buc*6) + (FG_buc*3) + (PAT_buc*1);
            TD_totais_buc = TD_totais_buc + TD_buc;
            FG_totais_buc = FG_totais_buc + FG_buc;
            PAT_totais_buc = PAT_totais_buc + PAT_buc;
            }
        //JOGOS SAINTS
        if (i % 2 != 0){
            scanf(" %d %d %d", &TD_saints, &FG_saints, &PAT_saints);
            soma_saints = soma_saints + (TD_saints*6) + (FG_saints*3) + (PAT_saints*1);
            TD_totais_saints = TD_totais_saints + TD_saints;
            FG_totais_saints = FG_totais_saints + FG_saints;
            PAT_totais_saints = PAT_totais_saints + PAT_saints;
            }
    }
    //COMPARANDO PLACAR TOTAL
    if (soma_buc > soma_saints){
        printf("Bucaneers é o campeão na série histórica!\nPlacar: %d x %d\n", soma_buc, soma_saints);
    }
    else if (soma_buc< soma_saints){
        printf("Saints é o campeão na série histórica!\nPlacar: %d x %d\n", soma_saints, soma_buc);
    }
    else{
        printf("Série histórica empatada em %d pontos!\n", soma_buc);
    }
    //COMPARANDO TD
    if (TD_totais_buc > TD_totais_saints){
        printf("Bucaneers marcou mais Touch Downs(%d)\n", TD_totais_buc);
    }
    else if (TD_totais_buc < TD_totais_saints){
        printf("Saints marcou mais Touch Downs(%d)\n", TD_totais_saints);
    }
    else{
        printf("Número de Touch Downs empatado(%d)\n", TD_totais_buc);
    }
    //COMPARANDO FG
    if (FG_totais_buc > FG_totais_saints){
        printf("Bucaneers marcou mais Field Goals(%d)\n", FG_totais_buc);
    }
    else if (FG_totais_buc < FG_totais_saints){
        printf("Saints marcou mais Field Goals(%d)\n", FG_totais_saints);
    }
    else{
        printf("Número de Field Goals empatado(%d)\n", FG_totais_buc);
    }
    //COMPARANDO PAT
    if (PAT_totais_buc > PAT_totais_saints){
        printf("Bucaneers marcou mais Pontos Extras(%d)\n", PAT_totais_buc);
    }
    else if (PAT_totais_buc < PAT_totais_saints){
        printf("Saints marcou mais Pontos Extras(%d)\n", PAT_totais_saints);
    }
    else{
        printf("Número de Pontos Extras empatado(%d)\n", PAT_totais_buc);
    }
    
    return 0;
}