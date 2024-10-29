#ifndef BUSCAR_INFO_H
#define BUSCAR_INFO_H

pNohArvore buscarInfoRecursivo (pNohArvore raiz, void *info, FuncaoComparacao pfc)
{
    if(raiz == NULL){
    return NULL;
    }

   if (raiz->info == info)
   {
       pNohArvore pnh = malloc(sizeof(NohArvore));
       pnh->info      = info;
       pnh->esquerda  = NULL;
       pnh->direita   = NULL;
       return pnh;
   }

   // caso recursivo
   if (pfc(raiz->info, info) <= 0)
       raiz->esquerda = buscarInfoRecursivo(raiz->esquerda, info, pfc);
   else
       raiz->direita = buscarInfoRecursivo(raiz->direita, info, pfc);

}

pNohArvore buscarInfo (pDArvore arvore, void *info, FuncaoComparacao pfc)
{
 if(arvore->raiz->info){
      arvore->raiz->info = info;
      return arvore->grau;
    }
    else
      buscarInfoRecursivo(arvore->raiz, info, pfc);
}

#endif
