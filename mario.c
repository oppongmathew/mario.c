#include <stdio.h>
#include <string.h>
int main() {
    // to store the input
    char word[100];
    printf("Enter a three-letter word: ");
    scanf("%s", word);//read the input word

    //get the number of characters
    int length = strlen(word);

    if (length ==3)
        {
            printf("Correct\n");
        }
    else if (length >=4)
        {
            printf("Hei! did u read the question well?\n");
        }
    else
        {
       printf("Too short\n");
        }
    return 0;

}
