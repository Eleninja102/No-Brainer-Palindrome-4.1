//
//  Palindrome.hpp
//  No-Brainer: Palindrome 4.1
//
//  Created by Coleton Watt on 1/31/22.
//

#ifndef Palindrome_hpp
#define Palindrome_hpp

#include <stdio.h>
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Palindrome{
public:
    Palindrome (string sent): sentence(sent){}
    bool isPalindrome() const;
    friend ostream &operator << (ostream &out, const Palindrome &p);
    
private:
    string sentence;
    string stripSentence() const;
    
    
};

#endif /* Palindrome_hpp */

