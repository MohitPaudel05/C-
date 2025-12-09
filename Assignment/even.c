#include <stdio.h>
#include <string.h>

int main() {
    char binarymessage[100];
    int onesCount = 0;
    int parityType, parityBit;

    
    printf("Enter binary message: ");
    scanf("%s", binarymessage);

    
    for (int i = 0; binarymessage[i]; i++)
        if (binarymessage[i] == '1')
         onesCount++;

    
    printf("Select parity type:\n1. Even Parity\n2. Odd Parity\nChoice: ");
    scanf("%d", &parityType);

    
    if (parityType == 1) {
        parityBit = (onesCount % 2 == 0) ? 0 : 1; 
        printf("\nEven Parity selected\n");
    } else {
        parityBit = (onesCount % 2 == 0) ? 1 : 0;  
        printf("\nOdd Parity selected\n");
    }

    
    int len = strlen(binarymessage);
    binarymessage[len] = parityBit + '0';
    binarymessage[len + 1] = '\0';

    
    printf("Original message + parity bit: %s\n", binarymessage);

    return 0;
}
