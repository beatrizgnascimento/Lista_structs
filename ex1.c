#include <stdio.h>
#include <string.h>
typedef struct endereco {
  char rua[40];
  int numero_rua;
}endereco;

typedef struct pessoa
{
  char nome[40];
  int idade;
   struct endereco ender;
}pessoa;

int main()
{
  pessoa a;
  scanf("%[^\n]", a.nome);
  scanf("%d", &a.idade);
  scanf(" %[^\n]", a.ender.rua);
  scanf(" %d", &a.ender.numero_rua);

 printf("Nome: %s\nIdade: %d\nEndereco: %s, %d", a.nome, a.idade, a.ender.rua, a.ender.numero_rua);

  return 0;
}
