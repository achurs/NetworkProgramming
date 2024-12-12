#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ANSI escape codes for colors
    const char* CYAN = "\033[1;36m";
    const char* GREEN = "\033[1;32m";
    const char* YELLOW = "\033[1;33m";
    const char* RESET = "\033[0m";

    printf("%s", CYAN);
    printf("    *    *    *    *    *    *    *    \n");
    printf("   ***  ***  ***  ***  ***  ***  ***   \n");
    printf("  **********************************  \n");
    printf(" ************************************\n");
    printf("%s", YELLOW);
    printf("        🌟 Hello, World! 🌟\n");
    printf("%s", CYAN);
    printf(" ************************************\n");
    printf("  **********************************  \n");
    printf("   ***  ***  ***  ***  ***  ***  ***   \n");
    printf("    *    *    *    *    *    *    *    \n");
    printf("%s", GREEN);
    printf("\n→ This is a simple Hello World program.\n");
    printf("→ Now with added sparkle! ✨\n");
    printf("%s", RESET);
    return 0;
}
