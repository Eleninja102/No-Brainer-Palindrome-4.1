//
//  Palindrome.cpp
//  No-Brainer: Palindrome 4.1
//
//  Created by Coleton Watt on 1/31/22.
//

#include "Palindrome.hpp"

string Palindrome::stripSentence() const{
    string clean = "";
    for(char c: sentence){
        c = tolower(c);
        if(c >= 'a' && c <= 'z'){
            clean+=c;
        }
    }
    
    return clean;
}


bool Palindrome::isPalindrome() const{
    string clean = stripSentence();
    stack<char>s;
    queue<char>q;
    
    for(char c: clean){
        s.push(c);
        q.push(c);
    }
    
    while(!s.empty() || !q.empty()){
        if(s.top() != q.front()){
            return false;
        }
        s.pop();
        q.pop();
    }
    return true;
}

ostream &operator << (ostream &out, const Palindrome &p){
    out << p.sentence << " is ";
    
    if(!p.isPalindrome()){
        out << "not ";
    }
    
    out << "a palindrome" << endl;
    
    return out;
}
