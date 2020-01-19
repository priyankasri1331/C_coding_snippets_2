#include <stdio.h>
struct node
{
    int data;
    struct node* link;
};
void print_linked_list(struct node* a);


int main()
{

    struct node A;
    struct node B;
    struct node C;
    A.data = 3;
    A.link = &B;
    B.data = 4;
    B.link = &C;
    C.data = 5;
    C.link = NULL;
    print_linked_list(&A);

    return 0;
}

void print_linked_list(struct node* a)
{
    while(a != NULL)
    {
      printf("%d %p\n", a->data,a->link);
      a = a->link;
    }
}
