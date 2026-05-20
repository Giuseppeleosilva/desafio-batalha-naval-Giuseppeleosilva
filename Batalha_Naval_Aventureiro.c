#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10


void tabuleiroEmogi () { //Criei uma função para mostrar tabuleiro com emogi\
        
    char *tabuleiro [10][10]; // Transforma em String pois int não recebe emogi nem char
    printf("   A B C D E F G H I J \n"); // Importante saber que coloquei 4 espaços para as letras ficarem na posição perfeita dos vetores

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            tabuleiro [i][j] = "🟦"; // Preciso preencher todos os campos da matriz com o emogi manualmente pois ele não preenche sozinho
        }
        
    }
    


    // Colocar navio de 3 casas na vertical
    tabuleiro [3][4] = "🚢"; // Defino as casas dos meus navios com emogis
    tabuleiro [3][5] = "🚢";
    tabuleiro [3][6] = "🚢";

    // Colocar navio de 3 casas na horizontal
    tabuleiro [5][5] = "🚢";
    tabuleiro [6][5] = "🚢";
    tabuleiro [7][5] = "🚢";




    for (int i = 0; i < LINHAS; i++) // Uso uma estrutura de repetição para criar o meu tabuleiro 
    {
        printf("%2d", i+1);
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%2s", tabuleiro [i][j]);
        }
        printf("\n");
    }

}



int main () {
    int tabuleiro [LINHAS][COLUNAS] = {0}; // Tabuleiro normal com numeros, pode ser preenchido totalmente por zeros
    printf("   A B C D E F G H I J \n"); // Importante saber que coloquei 4 espaços para as letras ficarem na posição perfeita dos vetores

    // Não preciso mais do loop acima para preencher todas as casas

    // Colocar navio de 3 casas na vertical
    tabuleiro [1][2] = 1;
    tabuleiro [1][3] = 1;
    tabuleiro [1][4] = 1;

    // Colocar navio de 3 casas na horizontal
    tabuleiro [6][6] = 2;
    tabuleiro [7][6] = 2;
    tabuleiro [8][6] = 2;

    // Variaveis do Navio Diagonal
    int linhaDiagonal_Normal = 3;
    int colunaDiagonal_Normal = 1;
    int tamanhoNavio = 3;
    int linhaDiagonal_Inversa = 7;
    int linhaColuna_Inversa = 3;

    
    // For para criar movimento na Diagonal

    for (int i = 0; i < tamanhoNavio; i++) // Movimentos na Diagonal Normal, sempre quando os valores da Matriz forem iguais
        {
            tabuleiro[linhaDiagonal_Normal + i][colunaDiagonal_Normal + i] = 3;
        }
    
    for (int j = 0; j < tamanhoNavio; j++) // Movimentos da Diagonal Inversa, mesma ideia, mas voltando as casas
    {
        tabuleiro[linhaDiagonal_Inversa + j][linhaColuna_Inversa - j] = 4;
    }
    
    


    for (int i = 0; i < LINHAS; i++) // Mesmo loop para criar a matriz 
    {
        printf("%2d", i+1); // Coloco i + 1 para começar do numero 1, já que os vetores se inciam do 0.
        // Coloco o %2d tambem para dar o espaçamento necessario para colocar duas casas decimais sem mudar muito a estruturação da matriz
        // Sem esse espaçamento, o 10 ficaria diferente das demais
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%2d", tabuleiro [i][j]);
        }
        printf("\n");
    }

    printf("\n");


    


return 0;

}





 

