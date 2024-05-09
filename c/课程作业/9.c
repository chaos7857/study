#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isValidID(const char* idNumber) {
    int aW[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
    int aXY[11] = { 1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2 };
    int sum = 0;
    int i;
    int remainder = sum % 11;
    int checkDigit;

    for (i = 0; i < 17; i++) 
    {
        if (idNumber[i] < '0' || idNumber[i] > '9') 
        {
            return 0;  
        }
        sum += (idNumber[i] - '0') * aW[i];
    }


    if (idNumber[17] == 'X') {
        checkDigit = 10;
    }
    else if (idNumber[17] >= '0' && idNumber[17] <= '9') {
        checkDigit = idNumber[17] - '0';
    }
    else {
        return 0;  
    }

    if (remainder == aXY[checkDigit]) {
        return 1;
    }
    else {
        return 0;  
    }
}

    int main()
    {
        char idNumber[19];

        while (1) {
            printf("������18λ���֤���룺");
            scanf("%s", idNumber);

            if (strlen(idNumber) != 18) {
                printf("���֤���볤�ȴ������������롣\n");
                continue;
            }

            if (isValidID(idNumber)) {
                printf("���֤������Ч��\n");
                break;
            }
            else {
                printf("���֤������Ч�����������롣\n");
            }
        }
    
        return 0;
    }