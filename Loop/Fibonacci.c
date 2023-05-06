//Problem: Write a program (WAP) that will print Fibonacci series upto Nth terms.

    int i,n,first=0,second=1,fibo=0;
    printf("Enter value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i<=1)
        {
            fibo=i;
            if(i == n)
            {
                printf("%d",fibo);
            }
            else
            {
                printf("%d, ",fibo);
            }
        }
        else
        {
            fibo=first+second;
            if(i == n)
            {
                printf("%d",fibo);
            }
            else
            {
                printf("%d, ",fibo);
            }
            first=second;
            second=fibo;
        }
    }
