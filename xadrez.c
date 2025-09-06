
#include <stdio.h>


int main() {
        // Nível Novato - Movimentação das Peças
        
        // variaveis constantes iniciais do nível iniciante.
        
        const int passosBispos = 5;
        const int passosTorre = 5;
        const int passosRainha = 8;
        
        //movimentacao do bispo usando for:
        printf("movimento do bispo\n\n");
        for (int i = 0; i < passosBispos; i++)
        {
                printf("Para Cima\n");
                printf("Para Direita\n");
        }
        
        // movimento da torre usando while
        
        printf("\nmovimento da torre\n");
        int t = 0;
        while (t < passosTorre)
        {
                printf("Para Direita\n");
                t++;
        }
        
        //movimento da rainha no tabuleiro usando do-while

        printf("\nmovimento da rainha\n");
        int r = 0;
        do
        {
                printf("Para Esquerda\n");
                r++;
        } while (r < passosRainha);

        //movimento do cavalo com o loop while e for alinhados
            printf(" \n ===== movimento do cavalo ===== \n\n");
            int cb = 0;
            while (cb < 2)
            {
                  printf("O cavalo se move para baixo (%d) vezes\n",cb+1);
                  cb++;
                  if ( cb == 2)
                  {
                        for (int ce = 0; ce < 1; ce++)
                        {
                              printf("O cavalo se move para a esquerda (%d) vez\n",ce+ 1);
                              break;
                        }
                  }
                  
            }
        return 0;
}
