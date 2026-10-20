#ifndef DATE_H
#define DATE_H

class Date {
	private:
		std::string date;
	public:
		Date();
		void init(std::string dateInput);
		void printDate();
};

#endif
