#include <stdio.h>

typedef struct
{
    int idade;
    float altura; 
    char *nome;
}Humano;

void ImprimeHumano(Humano a)
{
  printf("Nome: %s Altura: %f idade: %i\n\n", a.nome, a.altura, a.idade);
}

int main(){
  Humano Gian;
  Humano Gabriel;
   
  Gian.idade = 18;
  Gian.altura = 1.8;
  Gian.nome = "Gian Angelo";

  Gabriel.idade = 17;
  Gabriel.altura = 1.87;
  Gabriel.nome = "Gabriel Felipe";


  ImprimeHumano(Gian);
  ImprimeHumano(Gabriel);

  return 0;
}

