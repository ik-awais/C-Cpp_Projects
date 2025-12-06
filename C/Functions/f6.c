// Function to find if a string is palindrome
//Specified data
#include <stdio.h>
#include <string.h>

#define SIZE 3
void check_palindrome();
int main(){
    check_palindrome();
    return 0;
}

void check_palindrome(){
    char array[SIZE] = {'A', 'w', 'A'};
    int check = 0;
    // printf("Enter a string: ");
    // fgets(array, sizeof(array), stdin);
    // array[strcspn(array, "\n")] = '\0'; 
    // Above statement was added by my Professor to support input-orinted programme
 
    for(int i = 0; i < strlen(array); i++)
    {
        for(int j = strlen(array) - 1; j > strlen(array)/2; j--)
        {
            if(array[i] == array[j])
            {
                check++;
                i++;
            }
            else
            {
                check--;
                break;
            }
        }
    }
    if(check > 0)
    {
        printf("Palindrome.\n");
    }
    else
    {
        printf("Not Palindrome.\n");
    }
}