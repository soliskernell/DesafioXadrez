#include <stdio.h>
int main(){
    
    // **** MOVIMENTANDO O BISPO, DIAGONAL USANDO O FOR ****
    
    // int c3 = 3 > coluna 3(C), inicial do bispo
    // int l1 = 1 > linha 1,  inicial do bispo

    printf("\n¨¨¨¨MOVIMENTO DO BISPO DA CASA C1 ATÉ A CASA G5¨¨¨¨\n");

    for ( int l1 = 1, c3 = 3 ; l1 <= 5 && c3 <=7; l1++ , c3++){
        char coluna = 'A' + (c3 - 1);
        if(l1 == 1 && c3 == 3){
            printf("INÍCIO: LINHA %d, COLUNA %c\n", l1, coluna);
        }else {
            printf("SOBE LINHA %d, DIREITO COLUNA %c\n", l1, coluna);
        }

        
    }
    
    // **** MOVIMENTO TORRE USANDO WHILE*****
    printf("\n\n¨¨¨¨MOVIMENTAÇÃO DA TORRE  DE A1 A A6¨¨¨¨\n");

    int l_torre = 1, c_torre = 1; // LINHA INICIAL DA TORRE = 1, COLUNA = 1(A)
    char colunaTorre = 'A';
    while (l_torre <= 6 && c_torre <= 1)
    {
        //PONTO INICIAL
      if( l_torre == 1 && c_torre == 1){
        printf("*** INÍCIO: LINHA %d, COLUNA %c\n", l_torre, colunaTorre);
      } else{
        printf("SOBE LINHA %d, COLUNA %c\n", l_torre, colunaTorre);
      }
      l_torre++;
    }


    // **** MOVIMENTADO A RAINHA DE E1 A H4 E DEPOIS PARA D8 === DO...WHILE ****
    printf("\n\n¨¨¨¨MOVIMENTAÇÃO DA RAINHA - DE E1 PARA H4¨¨¨¨\n");

    int l_rainha = 1; // LINHA INICIAL DA RAINHA 
    int c_rainha  = 5;// COLUNA INICIAL 5(E)
    char coluna_rainha = 'E'; // COLUNA "E", INICIAL DA RAINHA NO XADREZ
    
    do {
        if(l_rainha == 1 && c_rainha == 5){
            printf("*** INÍCIO: LINHA %d, COLUNA %c\n", l_rainha, coluna_rainha);
        }else{
            printf("SOBE LINHA %d, DIREITO COLUNA %c\n", l_rainha, coluna_rainha);
        }      
      l_rainha++ , coluna_rainha++;
    } while (l_rainha <= 4 && c_rainha <= 5); 


    //SEGUNDO MOVIMENTO
    printf("\n>>> SEGUNDA JOGADA - DE H4 PARA D8>>>\n");
    
    // VARIÁVEIS DA LINHA E COLUNA ATUAL DA RAINHA
    int linha4 = 4;
    char colunah = 'H';
    // RAINHA SAI DE H4 E VAI PARA D8
    do{
        if(linha4 == 4 && colunah == 'H') {
            printf("*** SAINDO DA LINHA %d, COLUNA %c\n", linha4, colunah);
        } else{
            printf("SOBE LINHA %d, ESQUERDO COLUNA %c\n", linha4, colunah); 
        }    
      linha4++;
      colunah--;
    } while (linha4 <=8);
    
    //MOVIMENTO DO CAVALO 
    printf("\n*\n");
    printf("¨¨¨¨MOVIMENTO DO CAVALO SAINDO DE G8 PARA F6\n");

    int l_cavalo = 8; // LINHA ATUAL
    char c_cavalo = 'G'; // COLUNA ATUAL
    // FOR, PARA MOVER O CAVALO PARA A LINHA 7 E 6
    for(int i = 0; i < 2; i++){
      l_cavalo--;
      printf("DESCE LINHA: %d, COLUNA %c\n", l_cavalo, c_cavalo);

      int movimento_esquerdo = 0;
      /* WHILE MOVE PARA A ESQUERDA QUANDO: (movimento_esquerdo) FOR MENOR QUE i,
      ISSO ACONTECE QUANDO: (for) FAZ A SEGUNDA REPETIÇÃO E PASSA A VALER 1 */
      while( movimento_esquerdo < i){
        c_cavalo--;
        printf("PARA NA LINHA: %d, MOVE ESQUERDO COLUNA: %c\n", l_cavalo, c_cavalo);
        movimento_esquerdo++;
      }
    }
  return 0;
    
}   





