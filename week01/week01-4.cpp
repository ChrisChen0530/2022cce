#include <stdio.h>
#include <string.h>
int main()
{
    char c;char line[30]; ///陣列，字母的陣列，叫字串

     printf("請輸入字串，不要太長: ");
     scanf("%s",line);
    printf("你輸入:%s\n",line);

   int N = strlen(line);
   for(int i=0;i<N;i++){
    if(line[i]=='2'){
        printf("找到2\n");
    }
   }
}
