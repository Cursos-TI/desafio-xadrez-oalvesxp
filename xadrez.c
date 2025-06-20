#include <stdio.h>

int main(void) {
  char columns[] = "ABCDEFGH";  // X do tabuleiro (index de 0 ao 7)

  /** Posições iniciais das peças */
  int tourX = 0, tourY = 0;     // A1
  int bishopX = 2, bishopY = 0; // C1
  int queenX = 7, queenY = 0;   // H1

  int i;

  printf("Movimentando a Torre (5 casas para a direita a partir de A1)...\n");
  for(i = 1; i <= 5 && tourX < 8; i++)
  {
    printf("Torre: %c%d\n", columns[tourX + i], tourY + 1);
  }

  i = 1;  // reiniciando contador
  printf("Movimentando o Bispo (5 casas na diagonal superior direita a partir de C1)...\n");
  while (i <= 5 && bishopX + i < 8 && bishopY + i < 8)
  {
    printf("Bispo: %c%d\n", columns[bishopX + i], bishopY + i + 1);
    i++;
  }

  i = 1;  // reiniciando contador
  printf("Movimentando a Rainha (8 casas para a esquerda a partir de H1)...\n");
  do
  {
    // O index nunca poderá ser negativo
    if(queenX -i >= 0) // 0 = A
    {
      printf("Rainha: % c%d\n", columns[queenX - i], queenY + 1);
      i++;  
    }
  } while (i <= 8 && queenX - i + 1 > 0);

  return 0;
}
