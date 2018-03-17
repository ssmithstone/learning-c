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
void testPadLeft(char * str ,  char ch , int length);
void testPadRight(char * str ,  char ch , int length);
char * testGenerateStringOfOfLength(char ch , int length);

int main() {
    char * strptr = "ABC";
    testPadLeft(strptr , '*' , 10);
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
void testStringToUpperCase(char * const str){
    char * dup = strdup(str);
    int length = (int) strlen(dup);
    for(int i = 0 ; i < length ; i++){
        int a = dup[i];
        if((a > 90)){
            dup[i] = (char)(a - 32);
        }
    }
    printf("upper case version of [ %s ] is [ %s ]\n" , str, dup);
    free(dup);
}
void testStringToSentanceCase(char * const str){}
void testSeparateOnToken(char * const  str){}
void testTrimLeft(char * const  str){}

void testPadLeft(char * str ,  char ch , int length){
    char * a = calloc((strlen(str) + 1 + length) , sizeof(char));
    char * p = testGenerateStringOfOfLength(ch, length);
    strcat( a , p );
    strcat( a , str);
    printf("after padding [%s]\n"  , a);
    free(a);
    free(p);
}

char * testGenerateStringOfOfLength(char ch , int length){
    char * a = calloc(  length + 1 , sizeof(char));
    for(int i = 0 ; i < length ; i++ ){
        a[i] = ch;
    }
    return a;
}

void testPadRight(char * const  str ,  char ch , int length){
    char * a = calloc((strlen(str) + 1 + length) , sizeof(char));
    strcat( a , str );
    char * p = testGenerateStringOfOfLength(ch, length);
    strcat( a , p );
    printf("before padding [%s]\n"  , str);
    printf("after padding [%s]\n"  , a);
    free(p);
    free(a);
}

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
