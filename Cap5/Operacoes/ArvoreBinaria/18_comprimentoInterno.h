#ifndef COMPRIMENTO_INTERNO_BINARIO_H
#define COMPRIMENTO_INTERNO_BINARIO_H

/*No livro  do Tenenbaum ele usa como formula do comprimento interno como
 a soma de todos os niveis de todos os nós, sendo necessario multiplicar o valor do nivel
 pela quantidade de infos no nivel e somado com os subsequentes, pg 518 cap 7) a
 formula deu certo para varias arvores que testei, mas em expecifico na de exemplo o valor
 desejado era 9 porém gerava resultados diferentes*/

int comprimentoInternoRecursivo(pNohArvore raiz, int camada){
    if(raiz == NULL){
        return 0;
    }

    int comprimentoEsquerda = comprimentoInternoRecursivo(raiz->esquerda, camada +1);
    int comprimentoDireita = comprimentoInternoRecursivo(raiz->direita, camada +1);

    return comprimentoDireita + comprimentoEsquerda + camada;
}

int comprimentoInterno(pDArvore arvore){

    int comprimento = comprimentoInternoRecursivo(arvore->raiz, 1);
    return comprimento - 1;
}


#endif
