# 2022-10-11 
畫星星(兩層迴圈)
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
#輾轉相除法
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
##2022 10/18
#比較 int 整數 及 long long int
```c
#include <stdio.h>
int main()
{
    int n=9876543210;
    printf("int 印出來 %d\n",n);


    long long int a=9876543210;
    printf("long long int 印出來 %lld\n",a);
}
```
#最大公因數, 改用 long long int實作
```c
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);

    long long int ans;
    for(long long int i=1;i<=a;i++){
        if(a%i==0 && b%i==0)ans=i;
    }
    printf("最大公因數是:%lld\n",ans);
}
```
#輾轉相除法 改用long long int實作
```c
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld",&a,&b);
    while(1){
        c=a%b;
        printf("a:%lld b:%lld c:%lld\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}
```
#10進位轉2進位(剝皮法)
```c
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;


}
```
#質數判別
```c
#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int bad=0;
   for(int i=2;i<n;i++){
    if(n%1==0)bad=1;

    }
    if(bad==0)printf("%d 是質數",n);
    else printf("%d 不好 不是質數",n);
}
```
#迴圈(增加sum))
```c
#include <stdio.h>
int main()
{
    printf("請輸入五個數字(要加起來):");
    int n;
    int sum=0;
    for(int i=0;i<5;i++){
            scanf("%d",&n);
            sum+=n;
    }
    printf("總和是:%d",sum);
}
```
#while迴圈
```c 
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        for(int k=1;k<=n-i;k++)printf(" ");
        for(int k=1;k<=i;k++)printf("*");
        printf("\n");
    }
}
```
#右方直角三角形
```c 
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        for(int k=1;k<=n;k++){
            if(k<=n-i)printf(" ");
            else printf("*");
    }
    printf("\n");
}

}

