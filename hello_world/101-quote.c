#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = strlen(quote);

    if (write(2, quote, len) != len)
    {
        perror("Error writing to standard error");
        return (1);
    }

    return (1);
}



