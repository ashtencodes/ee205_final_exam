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
    Letter* newLetterNode = new( Letter );
    newLetterNode->value = newLetter;

    newLetterNode->next = head;
    head = newLetterNode;
    std::cout << "ADDING" << std::endl;
}

void Text::printText() {
    std::cout << "PRINTING" << std::endl;
    if( head != nullptr ){
        for( Letter* currentLetter; currentLetter != nullptr; currentLetter = currentLetter->next ){
            std::cout << currentLetter->value;
        }
    }
}

void Text::reverseText() {

}
