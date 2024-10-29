#ifndef IGUAIS_ARVORE_H
#define IGUAIS_ARVORE_H

int iguaisRecursivo(pNohArvore raiz1, pNohArvore raiz2, FuncaoComparacao fc){

    if(raiz1 == NULL && raiz2 == NULL){
        return 1;
    }

    if(raiz1 == NULL || raiz2 == NULL){
        return 0;
    }

    if(fc(raiz1->info, raiz2->info)!=0){
        return 0;
    }

    int esquerda = iguaisRecursivo(raiz1->esquerda, raiz2->esquerda, fc);
    int direita = iguaisRecursivo(raiz1 ->direita, raiz2->direita, fc);

    return esquerda && direita;

}


int iguais(pDArvore arvore1, pDArvore arvore2, FuncaoComparacao fc) {
 int resultado = iguaisRecursivo(arvore1->raiz, arvore2->raiz, fc);
 if(resultado !=0){
    printf("\nArvores Iguais\n");
 }
 else printf("\nArvores divergentes!\n");

}
#endif
