#include <stdio.h>

int main(int argc, char* argv[])
{
    printf( "Hello World!\n" );

#if _DEBUG
    printf(" Debug\n");
#else
    printf(" Release\n");
#endif

    return 0;
}
