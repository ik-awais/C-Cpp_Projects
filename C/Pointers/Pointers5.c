// Find length of string with pointers
// Excluding null character.
#include <stdio.h>
int main(){
    char string[] = "Awais";
    char *count = &string[0];
    int index = 0;
    while(*count != '\0')
    {
        index++;
        count++;
    }
    printf("Length of string: %d\n", index);
return 0;
}