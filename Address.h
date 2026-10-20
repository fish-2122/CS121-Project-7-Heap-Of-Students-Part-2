#ifndef ADDRESS_H
#define ADDRESS_H

class Address {
    private:
        std::string streetAddress;
        std::string city;
        std::string state;
        std::string zipCode;
    public:
        Address();
        void init(std::string streetAddressInput, std::string cityInput, std::string stateInput, std::string zipCodeInput);
        void printAddress();
};

#endif
