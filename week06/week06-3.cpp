#include <stdio.h>
int main()
{
    printf("�п�J2�Ӿ��,�n����: ");
    int a, b ;
    scanf("%d %d" , &a, &b);
    int ans;
    for(int i=1; i<=a; i++){
        if(a%1==0 && b%1==0){
            ans=i;
        }
    }
    printf("ans: %d �i����", ans);
}

