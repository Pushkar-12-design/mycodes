#include <stdio.h>
// int main(){
// char greetings[]= "Hello, World!";
// greetings[0]= 'P';
// printf("%s"  , greetings);
// return 0;
// }

void namaste();
void bonjour();
int main()
{
    printf("Enter F for french & I for Indian:");
    char ch;
    scanf("%c", &ch);
    if (ch=='I')
    {
        namaste();}
        else
        {
            bonjour();
        }
    
    return 0;
}
void namaste()
{
    printf("Namaste\n");
}
void bonjour()
{
    printf("Bonjour\n");
}

  