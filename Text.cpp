///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Text.cpp
/// @version 1.0
///
/// @author @Ashten Akemoto <aakemoto@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include "Text.h"
#include <iostream>

void Text::pushNewLetter( char newLetter ) {
    Letter* newLetterNode = new( Letter ); //creating new letter object and pointer
    newLetterNode->value = newLetter; //setting value of letter object

    newLetterNode->next = head; //adding to linkedlist
    head = newLetterNode;
}

void Text::printText() {
    if( head != nullptr ){
        for( Letter* currentLetter = head; currentLetter != nullptr; currentLetter = currentLetter->next ){
            std::cout << currentLetter->value; //iterating through and printing chars
        }
        std::cout << std::endl; //endl after iterating
    } else {
        std::cout << "No letters" << std::endl;
    }
}

void Text::reverseText() {
    if( head == nullptr || head->next == nullptr ){  //Checking for if list is 1 or none elements
        std::cout << "Nothing happened, list is 1 or less elements." << std::endl;
    } else {
        Letter* currentLetter = head;
        Letter* lastLetter = nullptr;
        Letter* nextLetter;

        while (currentLetter != nullptr) {
            nextLetter = currentLetter->next; // storing next letter
            currentLetter->next = lastLetter; // point current from next to previous letter
            lastLetter = currentLetter; // setting new farthest end
            currentLetter = nextLetter; // repeating from stored next letter
        }
        head = lastLetter;
    }
}

//                        L       C
//nullptr <- O  <- O  <-  O   nullptr