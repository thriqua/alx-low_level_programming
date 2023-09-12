#include <unistd.h>

int main(void)
{
    const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, str, 59); // 59 is the length of the string including the newline character

    return 1;
}

