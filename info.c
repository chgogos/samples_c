// https://blog.kowalczyk.info/article/j/guide-to-predefined-macros-in-c-compilers-gcc-clang-msvc-etc..html

#include <stdio.h>

int main()
{
    // CHECK OS
    #ifdef _WIN32
        printf("WIN32\n");
    #endif
    #ifdef _WIN64
        printf("WIN64 & WIN32\n");
    #endif
    #ifdef __APPLE__
        printf("APPLE\n");
    #endif
    #ifdef __linux__
        printf("LINUX\n");
    #endif

    // CHECK COMPILER
    #ifdef _MSC_VER
        printf("Visual Studio compiler\n");
    #endif
    #ifdef __GNUC__
        printf("gcc %d.%d.%d compiler\n", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
    #endif
    #ifdef __clang__
        printf("clang %d.%d.%d compiler\n", __clang_major__, __clang_minor__, __clang_patchlevel__);
    #endif
    #ifdef __MINGW32__
        printf("MINGW 32bit\n");
    #endif
    #ifdef __MINGW64__
        printf("MINGW 64bit\n");
    #endif

    // CHECK PROCESSOR ARCHITECTURE
    #ifdef __i386__
        printf("32bit processor architecture\n");
    #endif
    #ifdef __x86_64__
        printf("64bit processor architecture\n");
    #endif

    printf("%s\n", __VERSION__);
}