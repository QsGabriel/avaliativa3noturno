#include <stdio.h>

int converterRomanoParaDecimal(char romanNumber[]) {
    int decimalResult = 0;
    int previousValue = 0;
    int index = 0;

    while (romanNumber[index] != '\0') {
        int currentValue = 0;

        switch (romanNumber[index]) {
            case 'I': currentValue = 1; break;
            case 'V': currentValue = 5; break;
            case 'X': currentValue = 10; break;
            case 'L': currentValue = 50; break;
            case 'C': currentValue = 100; break;
            case 'D': currentValue = 500; break;
            case 'M': currentValue = 1000; break;
            break;
        }

        if (currentValue > previousValue) {
            decimalResult += currentValue - 2 * previousValue;
        } else {
            decimalResult += currentValue;
        }

        previousValue = currentValue;
        index++;
    }

    return decimalResult;
}

void decimalToBinary(int decimalNumber) {
    if (decimalNumber == 0) {
        printf("0");
        return;
    }

    int binaryRepresentation[32];
    int index = 0;

    while (decimalNumber > 0) {
        binaryRepresentation[index++] = decimalNumber % 2;
        decimalNumber /= 2;
    }

    while (index > 0) {
        printf("%d", binaryRepresentation[--index]);
    }

    printf("\n");
}

int main() {
    char romanNumeral[20];
    int decimalNumeral;

    scanf("%s", romanNumeral);

    decimalNumeral = converterRomanoParaDecimal(romanNumeral);

    if (decimalNumeral != -1) {
        printf("%s in base 2: ", romanNumeral);
        decimalToBinary(decimalNumeral);

        printf("%s in base 10: %d\n", romanNumeral, decimalNumeral);

        printf("%s in base 16: %x\n", romanNumeral, decimalNumeral);
    }

    return 0;
}
