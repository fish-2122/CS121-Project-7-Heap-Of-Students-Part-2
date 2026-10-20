#include <iostream>
#include <string>
#include "Address.h"

Address::Address() {
    Address::streetAddress = "";
    Address::city = "";
    Address::state = "";
    Address::zipCode = "";
}

void Address::init(std::string streetAddressInput, std::string cityInput, std::string stateInput, std::string zipCodeInput) {
    Address::streetAddress = streetAddressInput;
    Address::city = cityInput;
    Address::state = stateInput;
    Address::zipCode = zipCodeInput;
}

void Address::printAddress() {
    std::cout << Address::streetAddress << std::endl << Address::city << std::endl << Address::state << std::endl << Address::zipCode << std::endl;
}