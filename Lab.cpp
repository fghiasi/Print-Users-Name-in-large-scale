#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
#include <tuple>
using namespace std;

void printName(int columnNumber, char letter,int beforeSpace[], int betweenSpace[], int betweenSpacesLetter[],int numLetters[], int AfterSpace[]){

    letter = toupper(letter);

    for (int i = 0; i < beforeSpace[columnNumber] ; ++i) {
        cout<<" ";

    }

    cout<<letter;

    if(betweenSpacesLetter[columnNumber] != 0){

        for (int i = 0; i < betweenSpacesLetter[columnNumber]; ++i) {

            cout<<letter;

        }
    } else{

        for (int i = 0; i < betweenSpace[columnNumber]; ++i) {

            cout<<" ";
        }
    }

    if(numLetters[columnNumber] == 2){
        cout<<letter;
    }

    for (int i = 0; i < AfterSpace[columnNumber] ; ++i) {

        cout<<" ";
    }
}

void printLetterA(int columnNumber, char letter) {
    //number of the spaces before each letter
    int beforeSpace[] = {9,8,7,6, 5, 4, 3};

    //number of the spaces between first and last letter if any
    int betweenSpace[] = {0,2,4,1, 8, 10, 12};

    //number of the letters in between the first and last letter
    int betweenSpacesLetter[] = {0,0,0,6,0, 0, 0};

    //number of te letters in one row
    int numLetters[] = {1,2, 2, 2, 2, 2, 2};

    //number of the spaces after the last character
    int AfterSpace[] = {8, 6, 5, 4, 3, 2, 1};

    printName(columnNumber,letter, beforeSpace, betweenSpace, betweenSpacesLetter, numLetters,AfterSpace);

}

void printLetterS(int columnNumber, char letter) {
    int beforeSpace[] = {5,4,4,5, 9, 9, 4};
    int betweenSpace[] = {0,0,0,0, 0, 0, 0};
    int betweenSpacesLetter[] = {4,0,0,3,0, 0, 4};
    int numLetters[] = {0,0, 0, 0, 0, 0, 0};
    int AfterSpace[] = {3, 8, 8, 4, 3, 3, 4};

    printName(columnNumber,letter, beforeSpace, betweenSpace, betweenSpacesLetter, numLetters,AfterSpace);
}

void printLetterL(int columnNumber, char letter) {
    int beforeSpace[] = {4,4,4,4, 4, 4, 4};
    int betweenSpace[] = {0,0,0,0, 0, 0, 0};
    int betweenSpacesLetter[] = {0,0,0,0,0, 0, 7};
    int numLetters[] = {0,0, 0, 0, 0, 0, 0};
    int AfterSpace[] = {9, 9, 9, 9, 9, 9, 2};

    printName(columnNumber,letter, beforeSpace, betweenSpace, betweenSpacesLetter, numLetters,AfterSpace);
}

void printLetterR(int columnNumber, char letter) {
    int beforeSpace[] = {4,4,4,4, 4, 4, 4};
    int betweenSpace[] = {1,3,3,1, 2, 4, 6};
    int betweenSpacesLetter[] = {0,0,0,0,0, 0, 0};
    int numLetters[] = {2,2, 2, 2, 2, 2, 2};
    int AfterSpace[] = {7, 5, 5, 7, 6, 4, 2};

    printName(columnNumber,letter, beforeSpace, betweenSpace, betweenSpacesLetter, numLetters,AfterSpace);
}

void printLetterZ(int columnNumber, char letter) {
    int beforeSpace[] = {6,14,12,10, 8, 6, 6};
    int betweenSpace[] = {0,0,0,0, 0, 0, 0};
    int betweenSpacesLetter[] = {7,0,0,0,0, 0, 7};
    int numLetters[] = {2,0, 0, 0, 0, 0, 0};
    int AfterSpace[] = {1, 1, 3, 5, 7, 9, 2};

    printName(columnNumber,letter, beforeSpace, betweenSpace, betweenSpacesLetter, numLetters,AfterSpace);
}

void printLetterE(int columnNumber, char letter) {
    int beforeSpace[] = {4,4,4,4, 4, 4, 4};
    int betweenSpace[] = {0,0,0,0, 0, 0, 0};
    int betweenSpacesLetter[] = {5,0,0,5,0, 0, 5};
    int numLetters[] = {0,0, 0, 0, 0, 0, 0};
    int AfterSpace[] = {2, 7, 7, 2, 7, 7, 2};

    printName(columnNumber,letter, beforeSpace, betweenSpace, betweenSpacesLetter, numLetters,AfterSpace);
}

void printLetterI(int columnNumber, char letter) {
    int beforeSpace[] = {4,8,8,8, 8, 8, 4};
    int betweenSpace[] = {0,0,0,0, 0, 0, 0};
    int betweenSpacesLetter[] = {8,0,0,0,0, 0, 8};
    int numLetters[] = {0,0, 0, 0, 0, 0, 0};
    int AfterSpace[] = {2, 6, 6, 6, 6, 6, 2};

    printName(columnNumber,letter, beforeSpace, betweenSpace, betweenSpacesLetter, numLetters,AfterSpace);
}

void checkLetter(char letter, int columnNumber){

    if (letter == 's'|| letter == 'S'){
        printLetterS(columnNumber, letter);
    }

    if (letter == 'a'|| letter == 'A'){
        printLetterA(columnNumber, letter);
    }

    if (letter == 'r' || letter == 'R'){
        printLetterR(columnNumber, letter);
    }

    if (letter == 'l' || letter == 'L'){
        printLetterL(columnNumber, letter);
    }

    if (letter == 'i' || letter == 'I'){
        printLetterI(columnNumber, letter);
    }

    if (letter == 'e' || letter == 'E'){
        printLetterE(columnNumber, letter);
    }

    if (letter == 'z' || letter == 'Z'){
        printLetterZ(columnNumber, letter);
    }

    if (letter == ' '){
//        printLetterZ(columnNumber, letter);
        cout<<"     ";
    }

}

int main()
{

    //column has 7 rows
    int row = 7;

    //only get user's name
    cout<<"Hi! Please go ahead and type you full name. Thanks."<<endl;
    string UserFullName;

    getline( cin, UserFullName);

    //convert user's name to char array 
    char *array = &UserFullName[0];

    //This for loop keeps track of the rows
    for( int a = 0; a < row; a = a + 1 ) {
        
        //This for loop based on all of the character is presented 
        for (int i = 0; i < strlen(array); i = i+1) {
            
            //Send character of the name and current row
           checkLetter(array[i], a);
            
        }

        //Go to next line after printing of the one row is finished
        cout<<""<<endl;
    }

    return 0;
}

