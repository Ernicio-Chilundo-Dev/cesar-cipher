#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Check if the is correct
    if (argc != 2)
    {
        printf("Uso correto: ./cesar chave\n");
        return 1;
    }

    // Convert the key for to integer
    int chave = atoi(argv[1]);

    // Prompt the user to enter a message
    string texto = get_string("Simple text: ");

    printf("Encrypted text: ");

    // Cipher each character
    for (int i = 0; texto[i] != '\0'; i++)
    {
        char c = texto[i];

        if (isupper(c))
        {
            printf("%c", (c - 'A' + chave) % 26 + 'A');
        }
        else if (islower(c))
        {
            printf("%c", (c - 'a' + chave) % 26 + 'a');
        }
        else
        {
            printf("%c",c); // If it's not a letter, keep it as it is
        }

    }
    printf("\n");
    return 0;
}