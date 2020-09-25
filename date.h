#ifndef DATE_H
#define DATE_H
#include<string>
using namespace std;

class Date {
private:
	int month;
	int day;
	string comment;
public:
	Date();
	Date(int _month, int _day, string _comment);
	~Date();
	int get_month();
	void set_month();
	int get_day();
	void set_month();
	string get_comment();
	void set_comment();
};



#endif