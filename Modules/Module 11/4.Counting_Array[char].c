#include<stdio.h>
#include<string.h>
int main(){

char s[100];
scanf("%s",s);
int cnt[26]={0};
for (int i = 0; i < strlen(s); i++)
{
     int value=s[i]-'a';
     cnt[value]++;
}

for (int i = 0; i < strlen(s); i++)
{
     int value=s[i]-'a';
     if (cnt[value]!=0)
     {
         printf("%c - %d\n",value+97,cnt[value]);
     }
    
     cnt[value]=0;
}



// //TO print serially 
// for (int i = 0; i < strlen(s); i++)
// {
//      int value=s[i]-'a';
//      printf("%c - %d\n",value+97,cnt[value]);
// }
// OUTPUT
// a - 3
// b - 1
// c - 1
// a - 3
// z - 1
// d - 1
// e - 1
// a - 3





// // TO PRINT VALUE ONLY PRESENT IN THE INPUT 
// for (int i = 0; i <strlen(s); i++)
// {
//     if (cnt[i]!=0)
//     {
//         int value=s[i]-'a';
//          printf("%c - %d\n",i+97,cnt[i]);
//     }
    
   
// }

// OUTPUT
// a - 3
// b - 1
// c - 1
// d - 1
// e - 1


    
    return 0;
}