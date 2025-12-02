#include <stdio.h>
#define SIZE 20
void display(){
    char name[SIZE];
    fgets(name, sizeof(name), stdin);
    printf("Good Day %s", name);
}
int main()
{
    printf("What's your name Sir/Ma'am?\n");
    display();
    return 0;
}