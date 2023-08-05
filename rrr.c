#include<stdio.h>

char* uinput(){
    char *string, *current;
    int counter = 0;
    string = (char *) malloc(10 * sizeof(char));
    do{
        realloc(string, counter * sizeof(char));
        current = string + counter;
        *current = getchar();
        counter++;
    }while(*current != '\n');
    return string;
}

int main(){
    char *s;
    s = uinput();
    printf("\nYou entered: %s", *s);
    return 0;
}
