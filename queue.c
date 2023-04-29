#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
  int value;
  struct node *next;
} node;

typedef struct queue
{
  node *first;
  node *last;

}queue;

queue *create_queue()
{
  queue *new_queue= malloc(sizeof(queue));
  new_queue->first=NULL;
  new_queue->last=NULL;
  return new_queue;

  
}
void push(queue* queue, int value)
{
  if(queue->first==NULL)
  {
    node *new_node =malloc(sizeof(node));
    new_node->value=value;
    new_node->next=NULL;
    
    queue->first=new_node;
    queue->last=new_node;
     }

  else
  {
    node *new_node =malloc(sizeof(node));
    new_node->value=value;
    new_node->next=NULL;
    queue->last->next=new_node;
    queue->last=new_node;
   
  }
 }

int pop(queue*queue)
{
  if(queue->first==NULL)
  {
    perror("Segfault");
    return -1;
  }
    node *temp=queue->first;
    int tempvalue=queue->first->value;
    queue->first=queue->first->next;
    free(temp);
  return tempvalue;
}

int main(int argc, char *argv[])
{
  queue *queue = create_queue();
  push(queue, 5);
  push(queue, 7);
  push(queue, 10);
  printf("Value is: %d" ,pop(queue));
  printf("Value is: %d" ,pop(queue));
  printf("Value is: %d" ,pop(queue));

  

}
