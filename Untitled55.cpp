#include <stdio.h>


int calculateStringLength(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void copyString(char* destination, char* source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; 
}


int compareStrings(char* str1, char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; 
        }
        i++;
    }
    
    return str1[i] - str2[i];
}


void concatenateStrings(char* destination, char* source) {
    int dest_len = calculateStringLength(destination);
    int i = 0;
    while (source[i] != '\0') {
        destination[dest_len + i] = source[i];
        i++;
    }
    destination[dest_len + i] = '\0'; 
}

int main() {
    char str1[100], str2[100], str3[200];

    printf("Enter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[calculateStringLength(str1) - 1] = '\0';

    printf("Enter string 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[calculateStringLength(str2) - 1] = '\0';

    
    printf("\nLength of string 1: %d\n", calculateStringLength(str1));

  
    char copiedStr[100];
    copyString(copiedStr, str1);
    printf("Copied string: %s\n", copiedStr);

   
    int comparisonResult = compareStrings(str1, str2);
    if (comparisonResult == 0) {
        printf("Strings are equal.\n");
    } else if (comparisonResult < 0) {
        printf("String 1 is lexicographically smaller than String 2.\n");
    } else {
        printf("String 1 is lexicographically larger than String 2.\n");
    }


    copyString(str3, str1); 
    concatenateStrings(str3, str2);
    printf("Concatenated string: %s\n", str3);

    return 0;
}