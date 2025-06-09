#include <stdio.h>

int main(){ 
    char estado, estado2;
    char lestado[20], lestado2[20];
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    float densidade, densidade2, areakm, areakm2;
    float pib, pib2, pibpc, pibpc2;
    float superpoder, superpoder2;
    int pontosturisticos, pontosturisticos2;
   
    

    
    printf("Digite a letra do estado(de A a H)\n");
    scanf(" %c", &estado);
    
    printf("Digite a letra do estado seguido de um codigo(ex:C01, H02):\n");
    scanf(" %19s", lestado);
    

    printf("Digite o nome da cidade:\n");
    scanf(" %19s", cidade);
   

    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%lu", &populacao);
    

    printf("Digite o tamanho da area em KM:\n");
    scanf("%f", &areakm);
    
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib);
 

    printf("digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosturisticos);
  

    densidade = (float)populacao / areakm;
    pibpc =  pib / (float)populacao; 
    superpoder = (float)populacao + areakm + pib + pontosturisticos + pibpc + (1 / densidade);
    


    printf("agora digite as informações da carta 02\n");

    printf("Digite a letra do estado(de A a H)\n");
    scanf(" %c", &estado2);
   

    printf("Digite a letra do estado seguido de um codigo(ex:C01, H02):\n");
    scanf(" %19s", &lestado2);
    

    printf("Digite o nome da cidade:\n");
    scanf(" %19s", &cidade2);
  

    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%lu", &populacao2);
   

    printf("Digite o tamanho da area em KM:\n");
    scanf("%f", &areakm2);
    
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
   ;

    printf("digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);
   ;
    
    densidade2 = (float)populacao2 / areakm2;
    pibpc2 = pib2 / (float)populacao2;
    superpoder2 = (float)populacao2 + (float)areakm2 + (float)pib2 + (float)pontosturisticos2 + pibpc2 + (1 / densidade2);
    

    printf("CARTA 01\n");
    printf("ESTADO: %c\n", estado);
    printf("CODIGO DA CARTA: %s\n", lestado);
    printf("NOME DA CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %lu\n", populacao);
    printf("ÁREA EM KM: %.2f\n", areakm);
    printf("PIB: %.2f\n", pib);
    printf("PONTOS TURISTICOS: %d\n", pontosturisticos);
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidade);
    printf("PIB PER CAPITA: %.2f\n", pibpc);
    printf("seu super poder: %.2f\n", superpoder);

 

    printf("-------------------------\n");
    printf("CARTA 02\n");
    printf("ESTADO: %c\n", estado2);
    printf("CODIGO DA CARTA: %s\n", lestado2);
    printf("NOME DA CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %lu\n", populacao2);
    printf("ÁREA EM KM: %.2f\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("PONTOS TURISTICOS:%d\n", pontosturisticos2);
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidade2);
    printf("PIB PER CAPITA: %.2f\n", pibpc2);
    printf("seu super poder é: %.2f\n", superpoder2);

    

   
    
    
    


return 0;





}
