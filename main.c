#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <math.h> 
#include <time.h>
#include <stdlib.h>
// int main(){
//     //the function multiplies the two numbers until the user types 'n':
//     // char choice = 'Y';
//     // while(choice == 'Y'){
//     //     float num1, num2, result;
//     //     char answer;
//     //     printf("Choose your first number to multiply: \n");
//     //     scanf("%f", &num1);
//     //     printf("Choose your second number to multiply: \n");
//     //     scanf("%f", &num2);
//     //     result = num1 * num2;
//     //     printf("Your first number was %.2f, your second number was %.2f, your result is: %.2f\n",
//     //      num1, num2, result);
//     //     printf("Do you want to type again?");

//     //     scanf("%c", &answer);
//     //     if((char)answer == 'N'){
//     //         choice = 'N';
//     //     }
//     //     num1 = 0, num2 = 0;
//     // }
//     //the function above simply just doesn't work
//     // for(int i = 0; i < 5; i++){
//     //     printf("Hello, the %d'th time.\n", i);
//     // }
//     //finding out how many movies a user have seen:
//     char movies, movie_name[20], movie_fav[20];
//     int movies_q, movie_rating, favorrating = 0;

//     do
//     {
//     printf("How many movies did you watch?\n");
//     scanf("%d", &movies_q);
//     if(movies_q < 1){
//         printf("Oops, wrong value, try again: ");
//     }  
//     } while (movies_q < 1);
//     for(int i = 0; i < movies_q; i++){
//         printf("What is the name of your movie?\n");
//         printf("(one-word titles only)\n");
//         scanf("%s", movie_name);
//         printf("Could you tell me the movie's rating?\n");
//         scanf("%d", &movie_rating);
//         if(movie_rating > favorrating){
//             strcpy(movie_fav, movie_name);
//             favorrating = movie_rating;
//         }
//     }
//     printf("The movie that you liked the most is: \n");
//     printf("%s with a rating %d", movie_fav, favorrating);
//     return 0;
// }
// int main(){
//     //the function stops after i reaches value 5:
//     int value = 0;
//     for(int i = 0; i < 10; i++){
//         printf("The current value is: %d\n", i);
//         if(i == 5){
//             break;
//         }
//     }
// }
// int main(){
//     int total = 0, grade, students_count, average;
//     for(int i = 0; i < 25; i++){
//         printf("Type the %d's student grade:", i);
//         scanf("%d", &grade);
//         if(grade == -1){
//             students_count = i;
//             break;
//         }
//         total += grade;
//     }
//     average = total / students_count;
//     average = (int)average;
//     printf("The total of the student's points are: %d", average);
// }
// int main(){
//     //now let's see the continue in action:
//     for(int i = 0; i < 10; i++){
       
//         if( i % 3 == 0){
//             continue;
//         }
//          printf("%d\n", i);
//     }
// }
// int main(){
//     //the switch statements:
//     int choice;
//     printf("What do you want to do?\n");
//     printf("1. Add new contact\n");
//     printf("2. Editing existing contact\n");
//     printf("3. Call contact\n");
//     printf("4. Text contact\n");
//     printf("5. Exit contact\n");
//     do{
//         printf("Enter your choice: \n");
//         scanf("%d", choice);
//         switch (choice){
//             case (1): printf("To add you will need the ");
//                       printf("contact's ");
//                       printf("first name, last name and number.");
//                       break;
//             case (2): printf("\nGet ready to enter the name of ");
//                       printf("name of the \n");
//                       printf("contact you wish to change.");
//                       break;

//             case (3): printf("Which contact do you wish to call?\n");                      
//                       break;
//             case (4): printf("Which contact do you wish to text?\n"); 
                     
//                       break;
//             case (5): 
//                       break;//exits the program early
//             default: printf("%d needs a valid choice", choice);
//                      printf("Try again");
//                      break;
//         }
//     }
// }
// int main(){
//     char msg[] = "C is fun";
//     printf("The length of the string is: %llu, the size of the string is: %llu", strlen(msg), sizeof(msg));
//     for(int i = 0; i < strlen(msg); i++){
//         putchar(msg[i]);
//     }
// }
// int main(){
//     //the app gets an array of values from user and stores it in its own array:
//     char msg[25];
//     printf("Print up to 25 characters.\n");
//     for(int i = 0; i < 25; i++){
//         msg[i] = getch();
//         putch(msg[i]);
//         msg[i] = putch(msg[i]);
//         putch(msg[i]);
//         if(msg[i] == '\n'){
//             printf("This is the thing that you typed: %s", msg);
//             break;
//         }
//     }
//     // printf("%s", msg);
//     return 0;
// }
// int main(){
//     //an input testing function:
//     int digit;
//     char output, help_value;
//     printf("Type any character: ");
//     output = getchar();
//     help_value = getchar();//we don't do anything with this value, we just want to preserve the Enter, 
//     //remains the buffer 
    
//          if(isdigit(output)){
//          printf("You've just typed a digit.");
//          }

//          if(isalpha(output)){
//          printf("You've just typed a letter.");
        
//          }
//         // case(3): 
//         //              if(isalpha(output)){
//         //              printf("You've just typed a digit.");
//         //              break; 
//         //                  printf("Your output is unidentified.");  
        
    
// }
// int main(){
//     //this program checks the username and password;
//     int is_digit = 0, is_uppercase = 0, is_lowercase = 0;
//     char username[25], password[30];
//     printf("Please choose a username ( must be at least 4 characters long, maximum 10 characters)\n");
//     scanf("%s", username);
//     //check the validity of a username:

//     while(!(strlen(username) >= 4 && strlen(username) <= 10)){
//         printf("Please type a valid username\n");
//         scanf("%s", username);
//         //getting the input from a user;
//     }
//     //continues if the username is correct:
//     printf("Now please enter your password: \n");
//     scanf("%s", password);
//     //we go through each character in a password, and look if it is uppercase or a digit:
//     while(!(is_digit && is_uppercase && is_lowercase)){
//         printf("Please type a valid password: (contains uppercase and lowercase, digits\n");
//         scanf("%s", password);
//         for(int i = 0; i < strlen(password);  i++){
//             if(isdigit(password[i])){
//                 is_digit = 1;
//                 continue;
//             }else if(isupper(password[i])){
//                 is_uppercase = 1;
//                 continue;
//             }else if(islower(password[i])){
//                 is_lowercase = 1;
//             }
               
            
//         }
        
        
//         //Yes, it works!!!!!
//     }
//     printf("Congratulations, you've typed a valid password!");
//     // }
//     // //the username is correct, time for password:
//     // printf("Choose a strong password: \n 1 uppercase, 1 digit,");
    
    
//     // while(!(is_digit && is_uppercase)){
//     //     printf("Please choose a strong password: ");
//     //     for(int i = 0; i < 25; i++){
//     //     is_digit = isdigit(i);
//     //     is_uppercase = isupper(i);
//     //     password[i] = getchar();//now there is a problem, cause it counts also enter, so we should fix it later;
//     //     }
//  }
    
// int main(){
//     char string[100];
//     //let's see the output of toupper and tolower():
//     printf("Type a string: \n");
//     scanf("%s", string);
//     for(int i = 0; i < strlen(string); i++){
//         string[i] = toupper(string[i]);
//         //uppercases all the letters in a string;
//         if(string[i] == '\0'){
//             i = strlen(string);
//         }
//             //for optimisation, so it doesn't have to move through each element of an array

//     }
//     printf("Here is your string in uppercase: %s", string);
// }
// int main(){
//     char str1[25] = "Hi, my name is ";
//     char str2[20] = "Bob";
//     char string[25];
//     printf("Here is the output of string one before concatenation: %s\n", str1);
//     strcat(str1, str2);
//     printf("Here is the output of string after concatenation: %s", str1);
//     puts("At what time do you usually go to bed?");
//     gets(string);
//     printf("\n%s",string);

// } 
// int main(){
//     float a = 14.3323;
//     float b = 124.4423;
//     // float number;
//     // printf("The flooring of a: %.0f\n", floor(a));
//     // printf("The ceiling of a: %.0f\n", ceil(b));
//     // printf("Type any positive number");
//     // scanf("%f", &number);
//     // printf("This is the floating-point absolute value of your number: %.0f", fabs(number));
//     int two = 2;
    
//     printf("%f", pow(2, 5));
//     printf("%f", sqrt(25));
//     printf("%f", sqrt(-25));

// }
int main(){
    char ans[3];
    do{
       
        printf("Please write \"Yes\" if you want to play.");
        get(ans);
        if(ans == 'Yes'){
                //a truly random number:
            // time_t t;
            int dice1, dice2,total, guess, total2;
            char answer;
            // printf("The time %lld", t);
            // srand(time(&t));
            //let's print the guessing game:
            dice1 = ((rand() % 5) + 1);
            dice2 = ((rand() % 5) + 1);
            total = dice1 + dice2;
            printf("The current roll is: dice1: %d, dice2: %d, the total: %d\n", dice1, dice2, total);
            printf("What do you think will be the next roll?\n");
            scanf("%d", &guess);
            do{
                puts("Do you think the next roll will be ");
                puts("(H)igher, (L)ower or (S)ame?");
                puts("Enter H, L or S to reflect your guess.");
                scanf("%c", answer);
                answer = toupper(answer);
            }while(answer == 'H' || answer == 'L' || answer == 'S');
            //roll the dice the second time to get the second total:
            dice1 = ((rand() % 5) + 1);
            dice1 = ((rand() % 5) + 1);
            total2 = dice1 + dice2;
            printf("The second roll was: dice1: %f, dice2: %f", dice1, dice2);
            printf("The total is : %d", total);
            //now compare:
            if(answer == 'L' ){
                if(total2 < total){
                    printf("Good job you were right!\n");
                    printf("%d is lower than %d", total2, total);
                }else {
                    printf("Sorry, the %d is not lower than %d", total2, total);
                }
            }else if(answer == 'H'){
                if(total2 > total){
                    printf("Good job you were right!\n");
                    printf("%d is higher than %d", total2, total);
                }else {
                    printf("Sorry, the %d is not higher than %d", total2, total);

                }
            }else if(answer == 'S'){
                if(total2 = total){
                    printf("Good job you were right!\n");
                    printf("%d is the same as %d", total2, total);
                }else {
                    printf("Sorry, the %d is not the same as %d", total2, total);

                }
            }
        
    }
    }while(ans == 'Yes');
    return 0;
}