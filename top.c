#include <stdio.h>
#include <string.h>
// int main(){
//     int ctr = 0;
//     // printf("The counter is at %d\n", ctr);
//     // ctr = ctr + 1;
//     // printf("The counter is at %d\n", ctr);
//     // ctr = ctr + 1;
//     // printf("The counter is at %d\n", ctr);
//     // ctr = ctr + 1;
//     // printf("The counter is at %d\n", ctr);
//     // ctr = ctr + 1;
//     // printf("The counter is at %d\n", ctr);
//     // ctr = ctr + 1;
//     // printf("The counter is at %d\n", ctr);
//     // ctr = ctr + 1;
//     // printf("The counter is at %d\n", ctr);
//     // ctr = ctr + 1;
//     // printf("The counter is at %d\n", ctr);
//     // ctr += 1;
//     // printf("The counter is at %d\n", ctr);
//     // ctr += 1;
//     // printf("The counter is at %d\n", ctr);
//     // ctr += 1;
//     // printf("The counter is at %d\n", ctr);
//     // ctr += 1;

//     int i = 5;
//     i *= 3 + 4;
//     printf("%d", i);
//     // float int_copy = (float)i;
//     printf("Here is our int_copy: %f\n", (float)i);
//     //let's play with some truths:
//     int a = (2 < 1);// the value of a is equal to 0 because the expression is false;
//     int b = (4 > 3);// the value b is equal to 1 because the expression is true;
//     if( a > b){
//         printf("A is bigger than b, is equal to: %d\n", a);
//     }else if( b > a){
//         printf("B is bigger than a, is equal to: %d\n", b);
//     }
//     return 0;
// }
// #define CURRENTYEAR 2023
// int main(){
//     int year_born, current_age;
//     printf("What year were you born in?");
//     scanf("%d", &year_born);
//     if(year_born > CURRENTYEAR){
//         printf("Really? Are you sure about your answer?");
//         scanf("%d", &year_born);

//     }
//     current_age = CURRENTYEAR - year_born;
//     printf("So you are %d years old.\n", current_age);
//     //determine if a person was born on a leap year:
//     if(year_born % 4 == 0){
//         printf("Congrats! You were born on a leap year!");
//     }
// }
// int main(){
//     //this function compares the value to another value and then creates an appropriate output:
//     int value;
//     printf("Choose a number between 0 and 10\n");
//     scanf("%d", &value);

//     if(value >= 0 && value <= 10){
//         if(value > 5){
//             printf("\nYou chose a number that is bigger than 5, you didn't win.");

//         }else if(value > 4){
//             printf("Sorry, your number was too small");

//         }else{
//             printf("Congratulations, you've won a new car!");
//         }
//     }else if(value < 0 || value > 10){
//         printf("You've typed the wrong number!\n");
//         printf("Please exit and try again.");
        
//     }

//     return 0;
// }
// int main(){
//     //this program asks for a name and then gives direction based on the fact, that the name starts on
//     //a certain letter:
//     char name[20];
//     printf("Could you write down your name, please?");
//     scanf(" %s", name);
//     //we don't need an & because it's a string type
//     if((name[0] >= 'P') && (name[0] <= 'Q')){
//         printf("\nPlease take your ticket and wait for your turn.");

//     }else{
//         printf("\nGo in the room number 2002");

//     }
//     printf("\nThank your for visiting us. Have a nice day!");
// }
// int main(){
//     //write a program that tests the numbers on a divisibility by one - ten:
//     int output;
//     printf("Write down your number: \n");
//     scanf("%d", &output);
//     printf("Your number %s divisible by 1.\n", ( output % 1 == 0) ? ("is") : ("isn't"));
//     printf("Your number %s divisible by 2.\n", ( output % 2 == 0) ? ("is") : ("isn't"));
//     printf("Your number %s divisible by 3.\n", ( output % 3 == 0) ? ("is") : ("isn't"));
//     printf("Your number %s divisible by 4.\n", ( output % 4 == 0) ? ("is") : ("isn't"));
//     printf("Your number %s divisible by 5.\n", ( output % 5 == 0) ? ("is") : ("isn't"));
//     printf("Your number %s divisible by 6.\n", ( output % 6 == 0) ? ("is") : ("isn't"));
//     printf("Your number %s divisible by 7.\n", ( output % 7 == 0) ? ("is") : ("isn't"));
//     printf("Your number %s divisible by 8.\n", ( output % 8 == 0) ? ("is") : ("isn't"));
//     printf("Your number %s divisible by 9.\n", ( output % 9 == 0) ? ("is") : ("isn't"));
//     printf("Your number %s divisible by 10.\n", ( output % 10 == 0) ? ("is") : ("isn't"));
//     return 0;
// }
// int main(){
//     int i = 2, j = 5, n;
//     // n = i++ * j; //in theory i should be incremented after the multiplication, so n = 10, i =3;
//     // printf("n = %d, i = %d", n, i);
//     n = ++i * j;
//     printf("n is %d, i is %d", n, i);
// }
// int main(){
//     int num = 0;
//     printf("Your number is: %d\n", num);
//     printf("Your number is: %d\n", num++);
//     printf("Your number is: %d\n", num++);
//     printf("Your number is: %d\n", num++);
//     printf("Your number is: %d\n", num++);

//     printf("Your number is: %d\n", num--);
//     printf("Your number is: %d\n", num--);
//     printf("Your number is: %d\n", num--);
//     printf("Your number is: %d\n", num--);
// }
// int main(){
//     //to check the sizes of each data type:
//     printf("The data size of char is: %llu", sizeof(char));
//     // char string[40] = "The text is written in plain english.\n";
//     // printf("The memory size of the printed text is: %llu\n", sizeof(string));
//     float integer = 14.123;
//     printf("The size of the integer is: %llu", sizeof(integer));
//     char string[] = "This is the defined string. Let's see the difference between sizeof() and strlen()";
//     printf("The length of the string: %llu, the size of the string is: %llu", strlen(string), sizeof(string));
// } 
int main(){
    
    // a valid name function
    char name[10];
    printf("Could you please enter your name?");
    scanf("%s", name);
    //don't need an ampersand because it's a string
    // char string_is_valid = 'F';
    // while(string_is_valid == 'F'){
    //     printf("You printed the wrong answer, please try again: ");
    //     scanf("%s", name);
    //     if(name = );
        
    // }
    //function that loops through the counter using the while loop:
    // int counter = 0; 
    // printf("The first value of counter is: %d\n", counter);

    // while(counter < 4){
    //     printf("The current value of counter is: %d\n", ++counter);
    // }
    // while(counter > 0){
    //     printf("The current value of counter is: %d\n", --counter);

    // }
}