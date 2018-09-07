using namespace std;

class Time
{
public:
	int hour;
	int second;
	int miniute;

	Time get_time(void);
	void set_time(int hour, int minute, int second);
	Time(int hour, int miniute, int second);
	Time(int hour);
	Time();
};
