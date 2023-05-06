// Problem: WAP that will determine whether a number is prime or not.

    int number,isPrime=0;
    scanf("%d",&number);
    
    for (int i = 2; i <= number/2; i++)
    {
        if (number % i ==0)
        {
            isPrime++;
            break;
        }
    }
    if (isPrime==0 && number !=1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }
