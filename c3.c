//functions:
#include <stdio.h>
#include <string.h>
int half(char name[15]){
    strcpy(name, "XXXXXXXXXX");
    return 0;
}
int main(){
    //the properties of the array:
    char name[15] = "Michael Phelps";
    half(name);
    printf("Now our string looks like this: %s", name);
}
