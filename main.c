#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("请输入，王君的生日：\t(选项：A.05.11  B.08.12 C.07.11 D.08.11)\n");
    scanf("%c",x);
    if(x == 'A')
    {
        printf("你个逗比，居然选A！");
    }
    else if(x == 'B')
    {
        printf("认真点！B不对！");
    }
    else if(x == 'C')
    {
        printf("这波可以！孺子可教！：）");
    }
    else
    {
        printf("老毕，你没救了！");
    }
    return 0;
}
