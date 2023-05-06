// Problem: Write a program (WAP) that will print the factorial (N!) of a given number N. Please see the sample input output.

    int n,temp=1;
    scanf("%d",&n);
    printf("%d! = ",n);

    for(int i=n; i>=1; i--)
    {
        printf("%d",i);
        if(i>1){
            printf(" X ");
        }
        temp=temp*i;
    }
    printf(" = %d",temp);
