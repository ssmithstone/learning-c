#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

void testStringToLowerCase(char *str);
void testStringToUpperCase(char *str);
void testStringToSentanceCase(char * str);
void testSeparateOnToken(char *str);
void testTrimLeft(char *str);
void testTrimRight(char *str);
void testStringFormattingWithPrintf(char *str);
void testModifyStringWithNewCharAtIndex(char * str , int index , char newchar);

int main() {
    char * strptr = "Hello";
    testStringFormattingWithPrintf(strptr);
    testModifyStringWithNewCharAtIndex(strptr, 0 , 'h');
    testStringFormattingWithPrintf(strptr);
    return 0;
}

void testStringToLowerCase(char * const str){}
void testStringToUpperCase(char * const str){}
void testStringToSentanceCase(char * const str){}
void testSeparateOnToken(char * const  str){}
void testTrimLeft(char * const  str){}
void testTrimRight(char * const  str){}

void testModifyStringWithNewCharAtIndex(char * str , int index , char newchar){
    printf("Old string %s\n" , str);
    printf("We have to duplicate old string to modify\n");
    char * dup = strdup(str);
    printf("dup string %s\n" , dup);
    dup[index]= newchar;
    printf("Modified dup string %s\n" , dup);
    printf("Original string %s\n" , str);
    free(dup);
}
void testStringFormattingWithPrintf(char * str){
    printf("Printing str %s\n" , str );
}
