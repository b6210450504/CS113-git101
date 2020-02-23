  
/* NAME        : JEERAPAT SOMSRI
   STUDENT ID  : 6210450504 */

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}Node;
void append_list (struct node **head ,struct node **tail,int n){
    struct node *temp;
    int i;
        if (*head==NULL){
            *head=*tail=(struct node *)malloc(sizeof(Node));
            (*head)->data=n;
            (*head)->next=NULL;
        }
        else{
            temp=(struct node *)malloc(sizeof (Node));
            temp->data=n;
            temp->next=NULL;
            (*tail)->next=temp;
            *tail=temp;    
        }
}
void print_list(struct node *head){
    for (; head;head=head->next){
        printf ("%d\n",head->data);
    }
}
void Sort(struct node **head)
{
    int temp;
    struct node *ptr1,*ptr2;

    for(ptr1=*head; ptr1!=NULL; ptr1=ptr1->next)
      {
        for(ptr2=ptr1->next; ptr2!=NULL; ptr2=ptr2->next)
          { 
            if(ptr2->data < ptr1->data)
              {
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
              }
           }
       }
}

int main() {
    int i=0,n,count=1;
    int numbers[100];
    struct node *head=NULL,*tail=NULL,*temp=head;
    scanf ("%d",&n);
    while (n!=-1){
        if (n!=-1){
            numbers[i]=n;
            append_list(&head,&tail,n);
            Sort(&head);
            count=0;
        }
        else
            break;
        i+=1;
        scanf("%d",&n);
    }

    if (count==1)
        printf ("Nah . _. it's only 1 number?");
    else
        print_list (head);
    return 0;
} 