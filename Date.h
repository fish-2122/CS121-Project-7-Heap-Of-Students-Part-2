#ifndef DATE_H
#define DATE_H

class Date {
	private:
		std::string dateString;
		std::string day;
		std::string month;
		std::string year;
	public:
		Date();
		void init(std::string dateInput);
		void printDate();
};

#endif
