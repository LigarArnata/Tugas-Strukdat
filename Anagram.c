#include<stdio.h>
#include<string.h>
#define CharSize 256

int Anagram(char *str1, char *str2)
{
    int count1[CharSize] = {0};
    int count2[CharSize] = {0};
    int i;

    for (i = 0; str1[i] && str2[i];  i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    if (str1[i] || str2[i]){
    return 0;
    }

    for (i = 0; i < CharSize; i++){
    if (count1[i] != count2[i])
    return 0;
}
    return 1;
}
int main()
{
    char str[100], str1[100];
    int flag = 0;

    printf("Masukkan kata pertama : ");
    gets(str);

    printf("Masukkan kata kedua : ");
    gets(str1);

    flag=Anagram(str, str1);
    if (flag==1)
    printf("Anagram");
    else
    printf("Bukan Anagram");

    return 0;
}
