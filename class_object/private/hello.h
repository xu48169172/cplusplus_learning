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
	Time();
};
