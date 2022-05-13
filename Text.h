///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Text.h
/// @version 1.0
///
/// @author @Ashten Akemoto <aakemoto@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include "Letter.h"

class Text {

private:
    Letter* head = nullptr;

public:
    void pushNewLetter( char newLetter );
    void printText();
    void reverseText();
};


