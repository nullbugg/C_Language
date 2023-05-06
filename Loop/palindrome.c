/*
Problem: WAP that will determine whether an integer is palindrome number or not.
*/

int number,digit,reverse=0;
    scanf("%d",&number);
    int mainNumber = number;

    while(number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    if (mainNumber == reverse)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
