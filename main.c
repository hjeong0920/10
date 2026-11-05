#include <Stdio.h>
#include <string.h>

int main(void){
    char str[30] = "happy C programming";

    printf("length of String \"%s\"  : %zu\n", str, strlen(str));
    
    return 0;
}