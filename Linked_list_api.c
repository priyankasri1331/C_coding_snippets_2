#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* link;
};
void insertll(struct node* a, int b);
void print_linked_list(struct node* a);
int insert_giv_loc(int loc,struct node*a,int b);


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

    insertll(&A,7);
    print_linked_list(&A);
    int s = insert_giv_loc(4,&A,6);
    if (s !=0)
    {
        print_linked_list(s);
    }
    else
    {
        print_linked_list(&A);
    }
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

void insertll(struct node* a, int b)
{
    while(a->link != NULL)
    {
        a = a->link;
    }
    struct node *c = (struct node*)malloc(sizeof(struct node));

    a->link = c;
    a->link->data = b;
    a->link->link = NULL;

}
int insert_giv_loc(int loc,struct node*a,int b)
{
    int count = 0;
    if (loc == 1)
    {
        struct node *c = (struct node*)malloc(sizeof(struct node));
        c->link = a;
        c->data = b;
        int s = (int)c;
        return s;
    }
    else
    {
        while(count<loc-2)
        {
            a = a->link;
            count++;
        }
        struct node *c = (struct node*)malloc(sizeof(struct node));
        c->link = a->link;
        c->data = b;
        a->link = c;
        //printf("%d %d %d %d",a,a->data,a->link,c->link->data);
        return 0;
    }
}
