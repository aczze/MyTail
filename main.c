#include <stdio.h>
#include <stdlib.h>


void MyStream(char* argv[])
{
    char* Stream;
    char* c;
    int Amount = 0;
    int LettersToPrint = atoi(argv[1]);
    while(c != EOF)
    {
        c = getchar(stdin);
       Stream[Amount] = c;
       Amount++;

        if(c == EOF)
        {
            break;
        }
    }
    Stream = (char*)malloc(Amount*sizeof(char));

    for(int i = Amount - LettrsToPrint; i <= Amount; i++)
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
