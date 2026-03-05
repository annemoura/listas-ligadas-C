#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//definição da estrutura do nó da lista
struct Node {
    char* data;
    struct Node* next;
};

//função para criarum novo nó com uma string
struct Node* newNode(char* value)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = strdup(value); //aloca memoria para a string e copia o valor
    temp->next = NULL;
    return temp;

}

//função para imprimir a lista
void printList(struct Node* node)
{
    while (node != NULL) {
        printf("%s -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main()
{
   //inicializar a lista como vazia
   struct Node* head = NULL;
   struct Node* second = NULL;
   struct Node* third = NULL;

    //alocar memoria para os nós
    head = newNode("Algoritmos");
    second = newNode("e Estrutura");
    third = newNode("de Dados");

    //conectar os nós
    head->next = second;
    second->next = third;

    //imprimir a lista
    printf("Lista Ligada de strings: ");
    printList(head);

    return 0;

}