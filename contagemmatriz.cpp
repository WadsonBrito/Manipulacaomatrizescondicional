// contagem condicional em uma Matriz
# include <stdio.h>
int main(){
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int EvenCount = 0, OddCount = 0;
    for (int i = 0; i < 3; i++){ // loop externo para as linhas
        for (int j = 0; j < 3; j++){ // loop interno para as colunas
            if (matriz[i][j] % 2 == 0){
                EvenCount ++;// Incrementa o contador de pares
            } else{
                OddCount ++; // Incrementa o contadorde ímpares
            }
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }
    // Impressão dos Resultados
        printf ("Número de elemntos pares: %d\n", EvenCount);
    printf ("Número de elementos ímpares: %d\n", OddCount);
    return 0;
}