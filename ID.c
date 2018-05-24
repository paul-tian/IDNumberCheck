#include <stdio.h>
#include <string.h>

int main(void) {
    int weight[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    int modArray[11] = {    0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   10};
    char checkArray[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    char idChar[18], idCheck = 0;
    int sum = 0, modSum = 0;
    int i = 0;
    memset(idChar, 0, sizeof(idChar));

    printf("Input ID number:\n");
    char temp = 0;
    while((temp = fgetc(stdin)) != '\n') {
        if(temp == 'x') temp = 'X';
        idChar[i++] = temp;
        if (i > 18) 
            break;
    }
    
    for(int i = 0; i < 17; i++)
        sum += (idChar[i] - '0') * weight[i];
    modSum = sum % 11;
    idCheck = checkArray[modSum];

    if(idChar[17] == idCheck)
        printf("Correct.\n");

return 0;
}