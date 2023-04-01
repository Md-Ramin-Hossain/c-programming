#include<stdio.h>
int main()
{
int n,result, num1,num2,choice;

printf("Please enter your password:");
scanf("%d",&n);

if( n==123)
{
printf("Basic calculator menu\n");

printf("What do you want ?\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Reminder\n");

printf("Please choice your option\n");
scanf("%d", &choice);





switch(choice)
{
case 1:
{

//Now I want to addition two numbers

printf("Please give me a two integer numbers:");
scanf("%d%d ",&num1,&num2);

// Here are addition of the two integer numbers

result=num1+num2;

printf("The total addition of four number is=%d", result);
break;
}


case 2:
{
//Now I want to subtraction two numbers

printf("Please give me a two integer numbers: ");
scanf("%d %d ",&num1,&num2);

//Here are subtraction of two integer numbers

result=num1-num2;
printf("The total subtraction of two number  is= %d ",result);

break;
}

case 3:
{

printf("Please give me a two integer numbers: ");
scanf("%d %d ",&num1,&num2);

//Here are multiplication of the two numbers

result=num1*num2;

printf("The total multiplication of the two number is= %d", result);

break;

}

case 4:
{

printf("Please give me a two integer numbers: ");
scanf("%d %d ",&num1,&num2);

//Here are division of the two numbers

result=num1/num2;

printf("The total division of the two number is= %d",result);

break;

}

case 5:
{

printf("Please give me a two integer numbers: ");
scanf("%d %d",&num1,&num2);

//Here are reminder of the two numbers


result=num1%num2;

printf("The total reminder of the two number is= %d",result);

break;

}

default:
{
printf("Not a correct option");
}

}
}
else
{

printf("Wrong password, please enter the right number");

}
return 0;

}
