// Problem: WAP that will find the GCD (greatest common divisor) and LCM (least common multiple) of two positive integers.

    int num1,num2,GCD,LCM;
    scanf("%d%d",&num1,&num2);
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            GCD = i;
        }
    }
    LCM = num1 * num2 / GCD;
    printf("GCD: %d\n",GCD);
    printf("LCM: %d\n",LCM);
