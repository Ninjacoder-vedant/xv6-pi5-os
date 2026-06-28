#include "types.h" // Contains uint types and other type definitions
#include "stat.h" // Contains struct stat definition
#include "user.h" // Contains stat and uint so need to include types.h and stat.h before this
#include "param.h" // Contains HZ macro definition

int main(int argc, char *argv[])
{
    // Convert ticks to seconds by dividing uptime() by HZ and print the result to console
    printf(1, "System Uptime: %d s\n", uptime() / HZ);

    exit();
}