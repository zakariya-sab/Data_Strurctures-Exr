#include "head.h"
/*
Réponse à la question numero 1: "Une fonction qui ajoute un élément au début d'une liste ;" .

node * : variable de type struct qui contien un varible nbr de type int et autre variable link de type pointeur sur node .

 head : l'adresse de l'1er element dans le list .

 n : donnée du nouvel element .
*/

node *debut_dune_list(node*head,int n ){
    if(head == NULL){
        node* new =malloc(sizeof(node));
        new->link=new;
        new->nbr=n;
        head = new ;
        return head;
    }
    else {
        node* new =malloc(sizeof(node));
        new->nbr=n;
        node*pt=head;
        while(pt->link!=head){
            pt=pt->link;
        }
        new->link=head;
        pt->link=new;
        return new ;
    }
}
