// Substituição condicional de elemntos
# include <stdio.h>
int main (){
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){ 
        printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }
        printf ("\n");
    // Substituição condicional de elemntos
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){            
            if (matriz[i][j]  % 3 == 0){
                matriz[i][j] = -1; // Substitui múltiplos de 3 por - 1 
            }
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }
    return 0;
    }