#include <stdio.h>

int main()
{
  char first_card_state;
  char first_card_code[3];
  char first_card_city_name[50];
  int first_card_population;
  float first_card_area;
  float first_card_pib;
  int first_card_number_tourism_attractions;

  char secund_card_state;
  char secund_card_code[3];
  char secund_card_city_name[50];
  int secund_card_population;
  float secund_card_area;
  float secund_card_pib;
  int secund_card_number_tourism_attractions;

  printf("Carta 1:\n");
  printf("Digite o estado (A - H): ");
  scanf("%c", &first_card_state);

  printf("Digite o código da carta (Letra do Estado seguida do múmero de 01 a 04): ");
  scanf("%s", first_card_code);

  printf("Digite o nome da cidade (sem expaços): ");
  scanf("%s", first_card_city_name);

  printf("Digite a população: ");
  scanf("%d", &first_card_population);

  printf("Digite a área (use ponto para casas decimais): ");
  scanf("%f", &first_card_area);

  printf("Digite o PIB (use ponto para casas decimais): ");
  scanf("%f", &first_card_pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &first_card_number_tourism_attractions);

  printf("\n");

  printf("Carta 2:\n");
  printf("Digite o estado (A - H): ");
  scanf(" %c", &secund_card_state);

  printf("Digite o código da carta (Letra do Estado seguida do múmero de 01 a 04): ");
  scanf("%s", secund_card_code);

  printf("Digite o nome da cidade (sem expaços): ");
  scanf("%s", secund_card_city_name);

  printf("Digite a população: ");
  scanf("%d", &secund_card_population);

  printf("Digite a área (use ponto para casas decimais): ");
  scanf("%f", &secund_card_area);

  printf("Digite o PIB (use ponto para casas decimais): ");
  scanf("%f", &secund_card_pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &secund_card_number_tourism_attractions);

  printf("\n");
  printf("Carta 1:\n");
  printf("Estado: %c\n", first_card_state);
  printf("Código: %s\n", first_card_code);
  printf("Nome da cidade: %s\n", first_card_city_name);
  printf("População: %d\n", first_card_population);
  printf("Área: %.2f\n", first_card_area);
  printf("PIB: %.2f\n", first_card_pib);
  printf("Número de pontos turísticos: %d\n", first_card_number_tourism_attractions);

  printf("\n");
  printf("Carta 2:\n");
  printf("Estado: %c\n", secund_card_state);
  printf("Código: %s\n", secund_card_code);
  printf("Nome da cidade: %s\n", secund_card_city_name);
  printf("População: %d\n", secund_card_population);
  printf("Área: %.2f\n", secund_card_area);
  printf("PIB: %.2f\n", secund_card_pib);
  printf("Número de pontos turísticos: %d\n", secund_card_number_tourism_attractions);
  return 0;
}