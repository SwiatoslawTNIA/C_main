#include <stdio.h> 
#include <string.h>
#include "program.c"
#include "program1.c"
#include "example.h"

//let's define a few constants:
#define MYNAME "Swiatoslaw"
#define AGELIMIT "19"
#define COUNTRY "Germany"
 
/*in n(){

    char day[20] = "Monday";
    // printf("%s\n", day);//output: Monday
   
    day[0] = 'P';
    // printf("%s\n", day);
    //Ponday
    //let's change the output to tuesday:
    day[0] = 'T';
    day[1] = 'u';
    day[2] = 'e';
    day[3] = 's';
    day[4] = '.';
    //let's print and see:
    //  printf("%s\n", day);// the output is tues.y, because we didn't specify the null zero :
    day[4] = '\0';
    // printf("%s\n", day);
    strcpy(day, "Wednesday");
    printf("%s", day);


}*/
int main(){
    //the function that pairs the kids to their favorite superhero:
    char Kid1[15];
    char Kid2[] = "Madie";
    char Kid3[15] = "Andrew";
    char Hero1[] = "Batman";
    char Hero2[34] = "Spiderman";
    char Hero3[25];

    printf("%.2f", MORTGAGE_RATE);

    Kid1[0] = 'K';
    Kid1[1] = 'a';
    Kid1[2] = 't';
    Kid1[3] = 'i';
    Kid1[4] = 'e';
    Kid1[5] = '\0';

    strcpy(Hero3, "The incredible Hulk!");
    printf("%s's favorite hero is %s", Kid1, Hero1);
    printf("%s's favorite hero is %s", Kid2, Hero2);
    printf("%s's favorite hero is %s\n\n\n\n", Kid3, Hero3);
    //
    int age = 14;
    char childname[20] = "Christopher";
    printf("%s's age is %d\n", childname, age);

    age = 13;
    strcpy(childname, "Julia");
    printf("%s's age is %d\n", childname, age);

    age = 26;
    strcpy(childname, "Jason Statham");
    printf("%s's age is %d", childname, age);

}