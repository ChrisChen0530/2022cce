# 2022-10-11 畫星星(兩層迴圈)
```c
#include <stdio.h>
int main()
{
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("i:%d星星\n" , i);
    }

}
```
#最大公因數(暴力法)
```C
#include <stdio.h>
int main()
{
  for(int i=1;i<=5;i++){

    int space=5-i,star=2*i-1;
    for(int k=0;k<space;k++) printf(" ");
    for(int k=0;k<star;k++) printf("*");
    printf("\n");

  }
}
```
#
```C
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d",&a ,&b);
    while(1){
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案b: %d" , b);
}

```

