/* Tamanho de campo com inteiros */
#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */

int main()
{
printf("Os alunos sao %d.\n", 350); // O campo tem 0 caracteres    
printf("Os alunos sao %2d.\n", 350); // O campo tem 2 caracteres, mas o número tem 3 dígitos
printf("Os alunos sao %4d.\n", 350); // O campo tem 4 caracteres
printf("Os alunos sao %5d.\n", 350); // O campo tem 5 caracteres
system("PAUSE");

return 0;
}

