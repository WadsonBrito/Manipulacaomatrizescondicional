# include <stdio.h>
int main(){
int matriz[3][3];
// incializando a matriz com base em condições simples
for (int i = 0; i < 3; i++){ //loop externo para linhas
    for (int j = 0; j < 3; j++){ // loop interno colunas
        if (j % 2 == 0){
            matriz[i][j] = 1; // Se a coluna for par, atrubui 1
        } else {
            matriz[i][j] = 0; // Se a coluna for ímpar, atribui 0
        }
    }
}
// impressão da matriz
for (int i = 0; i < 3; i++){ // Loop para imprimir cada linha
    for (int j = 0; j < 3; j++){ // Loop para imprimir cada coluna
        printf ("%d ", matriz[i][j]);
    }
    printf ("\n");
}
    return 0;
}