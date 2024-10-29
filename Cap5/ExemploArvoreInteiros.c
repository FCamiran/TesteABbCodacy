#include <stdio.h>
#include "Utils.h"
#include "ArvoreBinaria.h"

int main(){
    pDArvore pArvoreInt = criarArvore(2);
    pDArvore pArvoreInt2 = criarArvore(2);

    /* teste de inclusao */
    incluirInfo(pArvoreInt, alocaInt(5), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(8), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(6), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(3), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(7), comparaInt);
    /* teste de inclusao 2 */
    incluirInfo(pArvoreInt2, alocaInt(4), comparaInt);
    incluirInfo(pArvoreInt2, alocaInt(7), comparaInt);
    incluirInfo(pArvoreInt2, alocaInt(5), comparaInt);
    incluirInfo(pArvoreInt2, alocaInt(2), comparaInt);
    incluirInfo(pArvoreInt2, alocaInt(9), comparaInt);
    incluirInfo(pArvoreInt2, alocaInt(3), comparaInt);
    incluirInfo(pArvoreInt2, alocaInt(1), comparaInt);

    desenhaArvore(pArvoreInt, imprimeInt);

    printf("\nAltura: %d \n",    altura(pArvoreInt));
    printf("Qtde Folhas: %d \n", quantidadeFolhas(pArvoreInt));
    printf("Qtde Nohs: %d \n",   quantidadeNohs(pArvoreInt));

    desenhaArvore(pArvoreInt2, imprimeInt);

    //Exercicio 01//
    iguais(pArvoreInt,pArvoreInt2,comparaInt);

    //Exercicio 02//
    estritamenteBinaria(pArvoreInt);
    estritamenteBinaria(pArvoreInt2);

    //Exercicio 03//
    espelho(pArvoreInt2);
    desenhaArvore(pArvoreInt2,imprimeInt);
    //Exercicio04//

    //Exercicio 05//
    printf("comprimento interno da arvore = %d", comprimentoInterno(pArvoreInt2));


    //Exercicio 06//
    if (balanceada(pArvoreInt2) != 'S')
    printf("Arvore Desbalanceada!");
    else
    printf("Arvore Balanceada!");

    //Exercicio 07//
    if (verificarBST(arvore, compararInteiros)) {
        printf("\nA Arvore EH uma Arvore binaria de busca!\n");
    } else {
        printf("\nA Arvore NAO � uma Arvore binaria de busca1\n");
    }

}
