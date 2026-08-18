// Conceito de Variável:
// É um espaço de memória reservado para armazenar dados de um
// determinado tipo, possuindo um nome para referenciar seu conteúdo.
// Exemplo de Declaração Múltipla:
// int num1, num2;
// int aviao, foguete, helicóptero;
// Podemos declarar várias variáveis do mesmo tipo em uma única instrução
// separando-as por vírgula.

/* Programa de declaração de variáveis */
// #include <stdio.h> /* Para printf() */
// #include <stdlib.h> /* Para system() */
// int main() {
// /* Declaração obrigatória */
// int num1;
// int num2;
// num1 = 44;
// num2 = num1 + 20; /* Soma: 64 */
// printf("\nO primeiro número é %d", num1);
// printf("\nO segundo número é %d", num2);
// system("PAUSE");
// return 0;

/* Inicialização de variáveis */
#include <stdio.h> /* Para printf() */
#include <stdlib.h> /* Para system() */
    int main() {
    int evento = 5;
    char corrida = 'C';
    float tempo = 27.25;
    printf("\nTempo vitorioso: %c", corrida);
    printf("\nCompetição %d: %f \n", evento, tempo);
    system("PAUSE");
    return 0;
}