#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], *kanan, *kiri;
    gets(str);
    kanan = &str[strlen(str)-1];
    kiri = str;

    while(kanan>kiri){
        if(*kanan==*kiri){
            kanan--;
            kiri++;
            continue;
        }
        printf("Bukan Palindrome");
        return 0;
    }
    printf("Palindrome");
    return 0;
}
