#include <stdio.h>

void tabuleiroEmogi () { //Criei uma função para mostrar tabuleiro com emogi
        
    char *tabuleiro [10][10]; // Transforma em String pois int não recebe emogi nem char
    printf("   A B C D E F G H I J \n"); // Importante saber que coloquei 4 espaços para as letras ficarem na posição perfeita dos vetores

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
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


    for (int i = 0; i < 10; i++) // Uso uma estrutura de repetição para criar o meu tabuleiro 
    {
        printf("%2d", i+1);
        for (int j = 0; j < 10; j++)
        {
            printf("%2s", tabuleiro [i][j]);
        }
        printf("\n");
    }

}



int main () {
    int tabuleiro [10][10] = {0}; // Tabuleiro normal com numeros, pode ser preenchido totalmente por zeros
    printf("   A B C D E F G H I J \n"); // Importante saber que coloquei 4 espaços para as letras ficarem na posição perfeita dos vetores

    // Não preciso mais do loop acima para preencher todas as casas

    // Colocar navio de 3 casas na vertical
    tabuleiro [3][4] = 3;
    tabuleiro [3][5] = 3;
    tabuleiro [3][6] = 3;

    // Colocar navio de 3 casas na horizontal
    tabuleiro [5][5] = 3;
    tabuleiro [6][5] = 3;
    tabuleiro [7][5] = 3;


    for (int i = 0; i < 10; i++) // Mesmo loop para criar a matriz 
    {
        printf("%2d", i+1); // Coloco i + 1 para começar do numero 1, já que os vetores se inciam do 0.
        // Coloco o %2d tambem para dar o espaçamento necessario para colocar duas casas decimais sem mudar muito a estruturação da matriz
        // Sem esse espaçamento, o 10 ficaria diferente das demais
        for (int j = 0; j < 10; j++)
        {
            printf("%2d", tabuleiro [i][j]);
        }
        printf("\n");
    }
    
    printf("\n"); // Um espaço para os dois tabuleiros
    tabuleiroEmogi(); // Chamando a função do emogi, totalmente opicional e apenas um recurso estético 
    return 0;
}





 

