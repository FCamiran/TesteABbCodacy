
#ifndef ISBST_BINARIO_H
#define ISBST_BINARIO_H





int isBST(pDArvore arvore, void *minValor, void *maxValor, FuncaoComparacao fc){
    if (noh == NULL) {
        return 1;
    }

    if (minValor != NULL && fc(noh->info, minValor) <= 0) {
        return 0;
    }
    if (maxValor != NULL && fc(noh->info, maxValor) >= 0) {
        return 0;
    }

    // Recursivamente verifica as subárvores, atualizando os limites
    return isBST(noh->esquerda, minValor, noh->info, fc) &&
           isBST(noh->direita, noh->info, maxValor, fc);
}


int verificarBST(pDArvore arvore, FuncaoComparacao fc) {
    return isBST(arvore->raiz, NULL, NULL, fc);
}

#endif

