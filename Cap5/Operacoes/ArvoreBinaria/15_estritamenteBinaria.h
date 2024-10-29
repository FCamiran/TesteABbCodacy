#ifndef ESTRITAMENTE_BINARIA_H
#define ESTRITAMENTE_BINARIA_H

int EstritamenteBinariaRecursivo(pNohArvore raiz){
    if(raiz == NULL){
        return 1;
    }
    if(raiz->esquerda == NULL && raiz->direita != NULL){
        return 0;
    }
    if(raiz->esquerda != NULL && raiz->direita == NULL){
        return 0;
    }
    int esquerda = EstritamenteBinariaRecursivo(raiz->esquerda);
    int direita  = EstritamenteBinariaRecursivo(raiz->direita);
    return direita && esquerda;
}

void estritamenteBinaria(pDArvore arvore){
    int resultado = EstritamenteBinariaRecursivo(arvore->raiz);
    if(resultado !=0)
        printf("\nEh uma Arvore Estritamente Binaria!\n");
    else
        printf("\nNao e uma arvore estritamente Binaria!\n");
}

#endif
