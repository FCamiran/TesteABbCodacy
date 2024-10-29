#ifndef ESPELHO_BINARIA_H
#define ESPELHO_BINARIA_H

void espelhoRecursivo(pNohArvore raiz){

    pNohArvore aux;
    aux = raiz->esquerda;
    raiz->esquerda = raiz->direita;
    raiz->direita = aux;

    if(raiz->esquerda != NULL)
        espelhoRecursivo(raiz->esquerda);

    if(raiz->direita != NULL)
        espelhoRecursivo(raiz->direita);

}

    void espelho(pDArvore arvore){
        espelhoRecursivo(arvore->raiz);
}
#endif

