#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
//arrays:
// int main(){
//     // int intgers[10] = {1, 123, 12, -24, 123, 123, 123, 123, 123, 123};
//     // printf("%llu", sizeof(intgers));
//     int array[10];
//     printf("Please enter the first 5 scores");
//     scanf("%d", &array[0]);
//     scanf("%d", &array[1]);
//     scanf("%d", &array[2]);
//     scanf("%d", &array[3]);
//     scanf("%d", &array[4]);
//     printf("Coul&d you please enter the remaining values?");
//     scanf("%d", &array[4]);
//     scanf("%d", &array[4]);
//     scanf("%d", &array[4]);
//     scanf("%d", &array[4]);
//     //compute the average:
//     int total;
//     for(int i = 0; i < 10; i++){
//         total += array[i];
//     }
//     float average = total / 10;
//     average = floor(average);
//     printf("The average score is: %d", (int)average);
// }
// int main(){
//     int id;
//     int temp;
//     char id_exists = 'F';
//     int ids[10] = {
//         33, 34, 35, 36, 37, 38, 39, 40, 41, 42
//     };
//     float balances[10] = {
//         0, 0, 0, 0, 0, 0, 0, 0, 0, 0
//     };
//     printf("Type in the id to check: \n");
//     scanf("%d", &id);
//     do{
//         for(int i = 0; i < 10; i++){
//             if(ids[i] == id){
//                 temp = id;
//                 id_exists = 'T';
//                 break;// to save a few loops if an id is found not on the tenth place of an array.
//             }
//         }
//         if(id_exists == 'F'){
//             printf("Wrong id\n");
//             printf("Try again\n");
//             scanf("%d", &id);
//         }
       
//     }while(id_exists == 'F');
//     //to check the balance:
//     printf("Your balance is: %.2f", balances[temp]);
//     printf("Would you like to add a debt?\n");
//     char answer;
//     scanf("%c", &answer);
//     float value;
//     if(tolower(answer) == 'T'){
//         printf("Please enter the amount of money.\n");
//         scanf("%f", &value);
//         balances[temp] += value;
//         printf("Your balance is saved.\n");
//         printf("Exiting ...\n");
//     }else{
//         printf("Exiting ...");

//     }
// // }
// int main(){
//     int gameScores[10] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10};
//     int gameRebounds[10] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};
//     int gameAssists[10] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};
//     //who scored the most:
//     int winner = 0;
//     for(int i = 0; i < 10; i++){
//         if(gameScores[i] > winner){
//             winner = gameScores[i];
//         }
//     }
//     //find the winner in the other arrays:
//     printf("The winner scored: %d, made  rebounces and  assists.", winner);

// }
// int main(){
//     //the buble sorting algorithm:
//     int array[10] = {1, 4, 2, 4, 6, 7, 4, 8, 9, 2};
//     //sorting:
//     int helpvalue;
//     char done = 'F';
//     // do{
//     //      for(int i = 0; i < 10; i++){
//     //         if(array[i] > array[i + 1]){
//     //             helpvalue = array[i];
//     //             array[i] = array[i + 1];
//     //             array[i + 1] = helpvalue;
//     //         }
//     //      }
//     //     for(int i = 0; i < 10; i++){
//     //         if(array[i] > array[i + 1]){
//     //             done = 'F';
//     //             break;
//     //         }else{
//     //             done = 'T';
//     //         }
//     //     }
//     // }while(done == 'F');
//     for(int i = 0; i < 10; i++){
//         for(int j = 0; j < 10; j++){
//             if(array[i] < array[j]){
//                 helpvalue = array[i];
//                 array[i] = array[j];
//                 array[j] = helpvalue;
//             }
//         }
//     }
//     for(int j = 0; j < 10; j++){
//         printf("%d\t", array[j]);
//     }
//     char * donePointer = &done; //assigned a pointer to donePointer, essentially it just points to variable done;

//     char wife = 'F';
//     char * wife_pointer = &wife;
//     printf("Do I have a wife? - %c", *wife_pointer);
//     printf("The address of the pointer is: %p", wife_pointer);
// }
// int main(){
//     //a name of an array is a pointer to the first value inside that array:
//     int array[] = {10, 20, 30, 40, 50};
//     // printf("This is the first element of the array: %d\n", array[0]);
//     // printf("This is the first element fo the array too: %d", *array);
//     // //deferencing an array:
//     // printf("%d\t", array[0]);
//     // printf("%d\t", array[1]);
//     // printf("%d\t", array[2]);
//     // printf("%d\t", array[3]);

//     // printf("%d\n", array[4]);
//     // printf("%d\t", *array);
//     // printf("%d\t", *(array + 1));
//     // printf("%d\t", *(array + 2));
//     // printf("%d\t", *(array + 3));

//     // printf("%d\n", *(array + 4));



//     char * text1 = "The first element of this text is supported and referenced by a pointer.";
//     printf("%s", text1);

// }
// int main(){
//     //movie rating:
//     char * movies[9] = {
//         "Armour", "Beast of the Southern Wild", "Django Unchained", "Les Miserables", "Life of Pi", 
//         "Lincoln", "Silver Linings Playbook", "Zero dark trilogy", "Silvester-linings Playbook"
//     };
//     int movieratings[9];
//     char * tempmovie = "This will be used for sorting the movies";
//     printf("*** Oscar season 2012 is here ***\n");
//     printf("Time to rate this year's best picture nominees:\n");
//     //loop through the first array, to see if 
//     char answer;
//     int ctr = 0;
//     for(int i = 0; i < 9; i++){
//         printf("Did you see the movie: %s?\n", movies[i]);
//         scanf("%c", &answer);
//         getchar();//to get rid of that enter;
//         if(toupper(answer) == 'Y'){
//             printf("How would you rate this movie on a scale from 1 to 10: \n");
//             scanf("%d", &movieratings[i]);
//             getchar();//to get rid of that enter
//             //to print only the movies I've seen:

//             ctr++;
//             continue;
           
//         }else{
//             movieratings[i] = -1;
//         }

//     }
//     //now let's sort the values of movieratings:
//     int helpvalue;
//     for(int i = 0; i < 9; i++){
//         for(int j = i; i < 9; i++){
//             if(movieratings[i] > movieratings[j]){//< because we want the values from the biggest to the smallest.
//                 helpvalue = movieratings[i];
//                 movieratings[j] = movieratings[i];
//                 movieratings[i] = helpvalue;
//             }
//         }
//     }
//     //now we have a sorted array, from which we need to output only the first ctr values:
    
//     if(ctr > 0){
//         printf("This is current rating: \n");
//         for(int i = 0; i < ctr; i++){
//             printf("%s has a rating: %d\n", movies[i], movieratings[i]);
//         }
//     }else{
//         printf("Exiting ...");

//     }
//     return 0;
//     int * temps[50];
//     int num;
//     for(int i = 0; i < 50; i++){
//         //allocation of the memory, each of 50 pointers points to a memory allocated integer:
//         printf("How many readings for the city?");
//         scanf("%d", &num);
//         temps[i] = (int *)(malloc(num * sizeof(int)));
//     }
//     //deallocate the memory:
//     for(int i = 0; i < 50; i++){
//         free(temps[i]);
//     }
// }
//memory allocation:
// int main(){
//     //memory allocation:
//     int * numArray;
//     int num;
//     printf("How many integers would you want to have?");
//     scanf("%d", &num);
//     numArray = (int *)malloc(num * sizeof(int));
//     for(int i = 0; i < num; i++){
//         numArray[i] = rand();
//     }
//     //calculate the total, the biggest and the smallest values:
//     int biggest = 0, smallest = 0, total;
//     for(int i = 0; i < num; i++){
//         total += numArray[i];
//         if(biggest < numArray[i]){
//             biggest = numArray[i];
//         }else if(smallest > numArray[i]){
//             smallest = numArray[i];
//         }
//     }
//     printf("The total of the numbers is: %d\n", total);
//     printf("The biggest number is %d\n", biggest);
//     printf("The smallest number is %d\n", smallest);
//     printf("The average is: %.2d\n ", total / num);
//     //free up the memory:
//     free(numArray);
//     //it works!!!!
// }
int main(){
    //working with structures:
    struct book{
        char name[10];
        int pages;
        char author[20];
        int public_year;

    };
    for(int i = 0; i < 2; i++){
        printf("Tell me the name of the book");
        fgets(book[i].name, 10, stdin);
        

    }
}