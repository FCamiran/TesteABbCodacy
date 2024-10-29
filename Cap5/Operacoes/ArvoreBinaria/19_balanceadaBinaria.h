#ifndef BALANCEADA_BINARIA_H
#define BALANCEADA_BINARIA_H

#include<stdlib.h>

//Problema no compilador do pc local, nao consegui testar e concluir//
//usei abs para modularizar e manter o numero positivo, e altura para saber a diferença, mas n consegui testar por problemas no pc//

char balanceadaRecursividade(pNohArvore raiz) {

if(raiz == NULL){
    return 'S';
}
    int alturaEsquerda = altura(raiz->esquerda);
    int alturaDireita = altura(raiz->direita);

    if (abs(alturaEsquerda - alturaDireita) > 1) {
        return 'N';
    }
    if(!balanceadaRecursividade(raiz->esquerda)|| !balanceadaRecursividade(raiz->direita))
    {
        return 'N';
    }
    else{
        return 'S';
    }
}
char balanceada(pDArvore arvore) {

if(arvore == NULL || arvore->raiz == NULL){
    return 'S';
}
    return balanceadaRecursividade(arvore->raiz);
}

#endif
