#include <stdio.h>
#include <stdlib.h>


void MyStream(char* argv[])
{
    char* Stream;
    int c;
    int Amount = 0;
    int LettersToPrint = atoi(argv[1]);
    while((c = getchar()) != EOF)
    {
       Stream[Amount] = c;
       Amount++;

        if(c == '\n')
        {
            break;
        }
    }
    Stream[Amount] = (char*)malloc(Amount*sizeof(char));

    for(int i = Amount - LettersToPrint; i <= Amount; i++)
    {
        printf("%c",Stream[i]);
    }

    free(Stream);
}


int main(int argc, char* argv[])
{
    MyStream(argv);
    return 0;
}
