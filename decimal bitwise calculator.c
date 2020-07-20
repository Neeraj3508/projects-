#include <stdio.h>
#include<math.h>
int count(int n) {
    int counter = 0;
    while(n != 0) {
        counter++;
        n/=2;
    }
    return counter;
}

int decimalToBinary(int n) {
    int k = pow(10,count(n) - 1), binary = 0;
    while(n != 0) {
        binary += (n % 2) * k;
        k /= 10;
        n /= 2;
    }
    return binary;

}

int binaryToDecimal(int input) {
    int decimal = 0, k=1;
    while(input != 0)
    {
        decimal += (input % 10) * k;
        k *= 2;
        input /= 10;
    }
    return decimal;
}

int main()
{
    int operatorChoice, answer, choice, inputOne, inputTwo, binaryInputOne, binaryInputTwo;
    printf("Number is in : \n1.Decimal\n2.Binary\n");
    scanf("%d",&choice);
    printf("\nEnter Number in according to choice %d\n",choice);
    if(choice == 1)
    {
        scanf("%d %d",&inputOne,&inputTwo);
    }
    else
    {
        scanf("%d %d",&binaryInputOne, &binaryInputTwo);
        inputOne = binaryToDecimal(binaryInputOne);
        inputTwo = binaryToDecimal(binaryInputTwo);
    }

    printf("\nEnter the operation number you want to operate : \n1.AND\n2.OR\n3.XOR\n\n");
    scanf("%d",&operatorChoice);
    if(operatorChoice == 1)
    {
        answer = inputOne & inputTwo;
        printf("Answer : %d\n",answer);
        printf("Answer in binary : %d",decimalToBinary(answer));
    }
    else if(operatorChoice == 2)
    {
        answer = inputOne | inputTwo;
        printf("Answer : %d\n",answer);
        printf("Answer in binary : %d",decimalToBinary(answer));
    }
    else if(operatorChoice == 3)
    {
        answer = inputOne ^ inputTwo;
        printf("Answer : %d\n",answer);
        printf("Answer in binary : %d",decimalToBinary(answer));
    }
    else{
        printf("Invalid Choice");
    }
    return 0;
}