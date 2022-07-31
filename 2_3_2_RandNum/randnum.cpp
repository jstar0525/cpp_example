#include <Turboc.h>

int main()
{
    int num;
    int input;

    randomize();

    for (;;) {
        num=random(100)+1;
        printf("\n���� ���� ���ڸ� ���� ������.\n");
        do {
            printf("���ڸ� �Է��ϼ���(���� ���� 999) : ");
            scanf("%d", &input);
            if (input==999) {
                exit(0);
            }
            if (input==num) {
                printf("������ϴ�.\n");
            } else if (input>num) {
                printf("�Է��� ���ں��� �� �۽��ϴ�.\n");
            } else {
                printf("�Է��� ���ں��� �� Ů�ϴ�.\n");
            }
        } while (input!=num);
    }

    return 0;
}

/*

���� ���� ���ڸ� ���� ������.
���ڸ� �Է��ϼ���(���� ���� 999) : 55
�Է��� ���ں��� �� Ů�ϴ�.
���ڸ� �Է��ϼ���(���� ���� 999) : 400
�Է��� ���ں��� �� �۽��ϴ�.
���ڸ� �Է��ϼ���(���� ���� 999) : 200
�Է��� ���ں��� �� �۽��ϴ�.
���ڸ� �Է��ϼ���(���� ���� 999) : 194
�Է��� ���ں��� �� �۽��ϴ�.
���ڸ� �Է��ϼ���(���� ���� 999) : 150
�Է��� ���ں��� �� �۽��ϴ�.
���ڸ� �Է��ϼ���(���� ���� 999) : 130
�Է��� ���ں��� �� �۽��ϴ�.
���ڸ� �Է��ϼ���(���� ���� 999) : 120
�Է��� ���ں��� �� �۽��ϴ�.
���ڸ� �Է��ϼ���(���� ���� 999) : 110
�Է��� ���ں��� �� �۽��ϴ�.
���ڸ� �Է��ϼ���(���� ���� 999) : 100
������ϴ�.

���� ���� ���ڸ� ���� ������.
���ڸ� �Է��ϼ���(���� ���� 999) :
*/