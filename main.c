#include <stdio.h>
#include <string.h>
int main(void)
{
    char textInput[500];

    printf("Enter text: \n");
    fgets(textInput, sizeof(textInput), stdin);

    printf("Your input was: \n%s", textInput);

    int textInputLength = strlen(textInput)-1;
    printf("The length of your string is:%d\n", textInputLength);
    int wordCounter = 1;
    int wordCounterIndex = 0;
    while (textInput[wordCounterIndex] != '\0')
    {
        if (textInput[wordCounterIndex] == ' ')
        {
            wordCounter++;
        };
        wordCounterIndex++;
    }
    printf("The number of words in your string is: %d", wordCounter);
    return 0;
}
