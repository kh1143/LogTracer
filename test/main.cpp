#include <stdio.h>
#include <stdlib.h>
#include <execinfo.h>

#include <iostream>
#include "LogTracer.h"

int backtrace_res()
{
    void *buffer[64];
    int size = 0;

    size = backtrace( buffer, 64 );

    char **strings;
    strings = backtrace_symbols( buffer, 64 );

    for( int i = 0; i < size; i++ )
    {
        printf("[%d/%d] %s\n", i+1, size, strings[i]);
    }

    free(strings);

    return 0;
}

int bar()
{
    backtrace_res();

    return 0;
}

int foo()
{
    bar();

    return 0;
}

int main(int argc, char* argv[])
{
    printf( "Hello World!\n" );

#if _DEBUG
    printf(" Debug\n");
#else
    printf(" Release\n");
#endif

    LOG_ERROR( " test " );

    foo();

    return 0;
}
