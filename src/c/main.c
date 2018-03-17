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
    char * strptr = "ABCabc";
    testStringToLowerCase(strptr);
    return 0;
}

void testStringToLowerCase(char * const str){
    char * dup = strdup(str);
    int length = (int) strlen(dup);
    for(int i = 0 ; i < length ; i++){
        int a = dup[i];
        if((a >= 65) && (a <= 90)){
            dup[i] = (char)(a + 32);
        }
    }
    printf("lower case version of [ %s ] is [ %s ]\n" , str, dup);
    free(dup);

}
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
