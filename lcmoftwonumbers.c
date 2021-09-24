//C program to find the lcm of two numbers
int findlcm(int a, int b)// function definition
{
    static int var = 1;//static variable initialized once and updated until lcm is found
    if(var%a==0&&var%b==0)
    {
        return var;
    }
    else
    {
        var++;
        findlcm(a,b);
        return var;
    }
}
#include<stdio.h>
int findlcm(int, int);
int main()
{
    int a,b,lcm;
    printf("Enter two numbers to find LCM: ");
    scanf("%d%d",&a,&b);
    lcm = findlcm(a,b);// function call
    printf("LCM of the numbers is: %d",lcm);
    return 0;
}
