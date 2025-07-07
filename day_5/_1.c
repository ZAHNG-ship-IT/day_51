#include <stdio.h>
//do  while语句
//do 循环语句  while(表达式)

int main()
{
    int i = 1;
    do
    {
        if(5 == i) break;//打印到4,到5终止
        // printf("%d\n",i);打印1到10
        // continue;这个会是四循环，因为到5，跳过i++，判断，任然是5，依旧判断。、、、、、循环往复
        printf("%d\n",i);
        i++;
    }
    while(i<=10);


}
