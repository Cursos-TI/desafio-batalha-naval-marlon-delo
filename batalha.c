#include <stdio.h>

//VARIAVEIS
int main (){
int numero;
int i, j;
char linha [10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
int linhaPosicaoNavio = 2; 
int colunaPosicaoNavio = 3;
int colunFixa = 7;
int linhavariavel = 5;
// CARACTERES DO TABULEIRO
printf (
 "  A B C D E F G H I J \n");
//MATRIZ
 int tabuleiro[10][10] = {
 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0 ,0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
//LOGICA DO NAVIO HORIZONTAL
for (int i = 0; i < 10; i++)
{
  if (  linhaPosicaoNavio == i   ){
          for (int j = colunaPosicaoNavio; j <= (colunaPosicaoNavio + 2); j++)
          {
              tabuleiro[i][j] = 3;
          }         
  }
}//LOGIA DO NAVIO LINHA VERTICAL
for (int i = linhavariavel; i <= (linhavariavel + 2); i++)
{
    tabuleiro[i][colunFixa] = 3;
}         
//LOGICA BASE
for (int i = 0; i < 10; i++)
{
     printf ("%d ", i );
    for (int j = 0; j < 10; j++)
    {
   
     
     printf("%d ", tabuleiro[i][j]);
    }
     printf ("\n");
};
//VERIFICADOR DE ERRO
if (i , j > 7)
{
  printf ("********ERRO*******");
}

return 0;
}












