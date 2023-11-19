#include <stdio.h>
#include <string.h>
int main(){
    // char gender;
    // int age;
    // char name[20];
    // char surname[20];
    // printf("What is your name?");
    // scanf("%s", name);
    // printf("What is your surname?");
    // scanf("%s", surname);
    // printf("How old are you?");
    // scanf("%d", &age);
    // printf("We know corrently only this about you: %s, %s, %d", name, surname, age);

    //now let's print two different output types (when dividing):
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    printf("The floating point answer is: %.2f\n", a / b);

    int x = 19;
    int y = 5;

    printf("The int answer is: %d\n", x / y);
    //let's check out the remainder operator:
    int z = 20;
    int p = 17;
    int answer = z % p;
    printf("The remainder of the quotient of z and p ... is: %d\n", answer);
}


// int question(){
//     int tires;
//     double priceone;

//     // int price(int price, int quantity)
//     // {
//     // int res = price * quantity;
//     // return res;
//     // }
//     printf("How many tires did you buy?");
//     scanf("%d", &tires);
//     printf("How much did you pay for each tire individually?");
//     scanf("%lf", &priceone);
//     // int result  =  price(price, tires);
//     int a, b, c, d, e;
//     a = b = c = d = e = 5;
//     return 0;
// }
// int average(){
//     int grade1, grade2, grade3, grade4;
//     float average, delta, percent;
//     grade1 = grade3 = 88;
//     grade2 = 99;
//     grade4 = 94;
//     average = (grade1 + grade2 + grade3 + grade4) / 4 ;
//     delta = 95 - average;
//     percent = 100 * ((95 - average) / 95);
//     printf("Your current state is following:\n average: %f\n delta: %f\n percent: %f"
//     , average, delta, percent);
//     return 0;
// }
// int average();
