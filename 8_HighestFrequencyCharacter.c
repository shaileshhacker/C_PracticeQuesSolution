#include<stdio.h>
char hFC(char* str);
int main()
{
    char str[50];
    printf("Enter string: ");
    scanf("%s",str);
    char ch=hFC(str);
    printf("Highest frequency character = %c",ch);
    return 0;
}
char hFC(char str[]){
    int i=0;
    int cnt[26]={0};
    while(str[i]!='\0'){
        cnt[str[i++]-'a']++;
    }
    int mx=cnt[0];
    int idx=0;
    for(i=1; i<26; i++)
    {
        if(mx<cnt[i]){
            mx=cnt[i];
            idx=i;
        }
    }
    return idx+'a';
}