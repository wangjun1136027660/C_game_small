#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("�����룬���������գ�\t(ѡ�A.05.11  B.08.12 C.07.11 D.08.11)\n");
    scanf("%c",x);
    if(x == 'A')
    {
        printf("������ȣ���ȻѡA��");
    }
    else if(x == 'B')
    {
        printf("����㣡B���ԣ�");
    }
    else if(x == 'C')
    {
        printf("�Ⲩ���ԣ����ӿɽ̣�����");
    }
    else
    {
        printf("�ϱϣ���û���ˣ�");
    }
    return 0;
}
