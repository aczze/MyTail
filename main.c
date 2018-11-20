#include <stdio.h>
#include <stdlib.h>


void MyStream(char* argv[])
{
    char* Stream;
    int c;
    int Amount = 0;
    int LettersToPrint = atoi(argv[1]);
    Stream = (char*)malloc(Amount*sizeof(char));
    while((c = getchar()) != EOF)
    {
       Stream[Amount] = c;
       Amount++;
       if(Amount == LetersToPrint)
       {
           Amount = 0;
       }

        if(c == '\n')
        {
            break;
        }
    }

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
