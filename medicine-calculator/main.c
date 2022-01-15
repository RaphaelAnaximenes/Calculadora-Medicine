#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(void)
{


// VARIAVEIS ETC...

  int idade, peso;
  setlocale(LC_ALL,"");
  system("color 0b");

// REQUEST
 printf(" Bem vindo ao WebDoctor!\n ");
 // desculpa pela piada infame NAVA
 printf("Hoje íremos lhe ajudar na dosagem de 'C'-toprofeno !\n ");
 printf(" Digite a idade do paciente: ");
 scanf("%d", &idade);
printf(" Digite o peso do paciente: ");
 scanf("%d", &peso);
printf("\n");

     printf("DESAFIO NAVA: RAPHAEL ANAXIMENES - ADS 1\n");

    for (int i = 0; i < 10; i++) {
        printf("Carregando %d %%", i* 10);
        for (int j = 0; j < 20; j++) {
            printf(".");
            Sleep(10);
        }
        printf("\r");
        for (int j = 0; j < 30; j++) {
            printf(" "); // apaga a linha anterior
        }
        printf("\r");
    }
    printf("\nAnalisamos nosso WebDoctor... Veja as orientações a seguir: \n");






// CONTEMPLADOS 12 ANOS +  E 12 ANOS -
 if(idade > 12 && peso >= 60){
    printf("Você deve tomar 1000mg");
} else if (idade > 12 && peso < 60){
  printf(" Voce deve tomar 875mg");
// MENORES DE 12 POR PESO.
} else if(peso >= 5 && peso <= 9){
  printf("Voce deve tomar 125mg");
}else if(idade < 12 && (float)peso > 9.1 && (float)peso < 16){
    printf("Você deve tomar 250 mg");
}else if(idade < 12 && (float)peso > 16.1 && (float)peso < 24){
    printf("Você deve tomar 375 mg");
}else if(idade < 12 && (float)peso > 24.1 && peso < 30){
    printf("Você deve tomar 500 mg");
// SE PESO OU IDADE INCOMPATIVEIS
}else {
    printf("Você não possui idade ou peso adequados para tomar o medicamento, procure um pediatra.");
}
getch();
  return 0;

}

