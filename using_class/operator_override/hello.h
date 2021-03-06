using namespace std;

class Time
{
private:
	int hour;
	int second;
	int miniute;
public:
	Time get_time(void);
	void set_time(int hour, int minute, int second);
	void show_time();
	Time(int hour, int miniute, int second);
	Time(int hour);
	Time operator+(const Time& t) const;
	Time operator-(const Time& t) const;
	Time operator*(const int) const;
	friend Time operator*(const int, const Time&);
	friend ostream& operator<<(ostream& os, Time& t);
	Time();
};
