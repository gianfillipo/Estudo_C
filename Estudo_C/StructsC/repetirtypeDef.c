#include <stdio.h>

typedef struct
{
    char *nome;
    int idade;
    float peso;
    float altura;

}Pessoa;

void printPessoa(Pessoa a)
{
    printf("Nome: %s / Idade: %i / Peso: %f / Altura: %f \n\n", a.nome, a.idade, a.peso, a.altura);
}

int main (void)
{
    Pessoa Gian;

    Gian.nome = "Gian Fillipo";
    Gian.idade = 18;
    Gian.peso = 78;
    Gian.altura = 1.8;

    printPessoa(Gian);
}