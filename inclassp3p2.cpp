#include <string>
#include <iostream>
#include "address.h"

class Address
{
    public:
        Address();
        ~Address();
        void print ();
        std::string toSpring ();
        void init ();
        void setFirst(std::string strpFirst);
        void setFirst(std::string strFirst);
        void setPhoneNumber(std::string strpPhoneNumber)
    private:
    std::string strFirst;
    std:string  strLast;
    str:string  strPhoneNumber;

Address::Address(); {

}

Address::~Address() {

}    

void Address::print() {

}

std::string Address::toSpring() {
    std::string strAddress = getFirst() + " " + getLast() + " " +getPhoneNumber();
    return strAddress
}

void Address:: init(){

}
void address:: setFirst(std::string strpFirst) {

}
void address:: setLast(std::string strpLast) {
}
void address:: setPhoneNumber(std::string strpPhoneNumber) {
}
std::string Address::getFirst () {
    return "First";
}
std::string Address::getLast (){
    return "Last";
}
std::string Address::getPhoneNumber (){
    return "Phone";
}    
