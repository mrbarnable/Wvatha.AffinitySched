#include <stdio.h>
#include <errors.h>


#ifndef __WIN32
#define __WIN32

#include <Windows.h>
#endif



void parse_args();


int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        perror("Provide executables to use the app.\n");
        exit(-1);
    }


    // TODO: Parse the arguments


    



    return 0;
}



void parse_args() {
    // IMPLEMENT
}