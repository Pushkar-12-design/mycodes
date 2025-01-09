#include <stdio.h>
#define MAX 100

typedef struct {
    int atomic_num ;
    char name[MAX];
    char symbol[MAX];
   char class[MAX];
   float weight ;
   int electrons[7];
} atom;
void scan_element (atom *elem)

{
printf("Enter atomic number: ");
scanf("%d" ,&elem->atomic_num);
printf("Enter element name:");
scanf("%s \n" , elem->name);
printf("Enter element symbol:");
scanf("%s \n" , elem->symbol);
printf("Enter element class:");
scanf("%s \n" , elem->class);
printf("Enter element weight:");
scanf("%f" ,&elem->weight);
printf("Enter electrons in each shell:");
for (int i=0;i<7;i++)
scanf("%d",&elem->electrons[i] );
}
void print_element (const atom *elem)
{
    
    printf("Enter atomic number: ");
    printf("Enter element name:");
    printf("Enter element symbol:");
   printf("Enter element class:");
    printf("Enter element weight:");
    printf("Enter electrons in each shell:");
    for (int i=0;i<7;i++)
    printf("%d",&elem->electrons[i] );
}

void main() {
   atom elem;
   scan_element(&elem);
   print_element(&elem);
}
