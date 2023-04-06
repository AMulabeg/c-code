#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
  int value;
  struct node *previous;
} node;

typedef struct stack
{
  node *top;

}stack;

stack *create_stack()
{
  stack *new_stack= malloc(sizeof(stack));
  new_stack->top=NULL;
  return new_stack;

  
}
void push(stack* stack, int value)
{
  node *new_node =malloc(sizeof(node));
  new_node->value=value;
  new_node->previous=stack->top;
  stack->top=new_node;
}

int pop(stack*stack)
{
  if(stack==NULL)
  {
    perror("Segfault");
  }
    node *temp=stack->top;
    int tempvalue=stack->top->value;
    stack->top=stack->top->previous;
    free(temp);
  return tempvalue;
}

int main(int argc, char *argv[])
{
  stack *stack = create_stack();
  push(stack, 5);
  push(stack, 7);
  push(stack, 10);
  printf("Value is: %d" ,pop(stack));
  printf("Value is: %d" ,pop(stack));
  printf("Value is: %d" ,pop(stack));

  

}
