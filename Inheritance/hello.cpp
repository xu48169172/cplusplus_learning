#include <iostream>
#include "hello.h"

using namespace std;
Time::Time()
{
	hour = 0;
	miniute = 0;
	second = 0;
}

Time::Time(int m_hour, int m_miniute, int m_second)
{
	/*
	this->hour = hour;
	this->miniute = miniute;
	this->second = second;
	*/
	hour = m_hour;
	miniute =m_miniute;
	second = m_second;
}

void Time::set_time(int hour, int miniute, int second)
{
	this->hour = hour;
	this->miniute = miniute;
	this->second = second;
}

void Time::show_time()
{
	cout << "hour:"<<this->hour<<" ";
	cout << "miniute:"<<this->miniute<<" ";
	cout << "second:"<<this->second<<" ";
	cout << "\n";
}
Time Time::operator+(const Time& t) const
{
	Time sum;
	sum.hour = hour + t.hour;
	sum.miniute = miniute + t.miniute;
	sum.second = second + t.second;
	return sum;
}
Time Time::operator-(const Time& t) const
{
	Time sum;
	sum.hour = hour - t.hour;
	sum.miniute = miniute - t.miniute;
	sum.second = second - t.second;
	return sum;
}
Time Time::operator*(const int t) const
{
	Time sum;
	sum.hour = hour * t;
	sum.miniute = miniute * t;
	sum.second = second * t;
	return sum;
}
Time operator*(const int t, const Time& time)
{
	Time sum;
	sum.hour = time.hour * t;
	sum.miniute = time.miniute * t;
	sum.second = time.second * t;
	return sum;
}

ostream&  operator<<(ostream& os,Time& t)
{
	os << "hour: " << t.hour << " miniute: " << t.miniute << " second: " <<
		t.second << endl;
	return os;
}
int main()
{
	Time *time = new Time();
	time->set_time(10,20,30);
	cout << "time: ";
	time->show_time();

	Time time1(20,30,40);
	cout << "time1: ";
	time1.show_time();
	// 这里需要注意的是time1 是调用对象，而*time是传入的参数
	// 参考下面的写法。
	Time sum = time1 + *time;
	cout << "sum with +: ";
	sum.show_time();
	// operator+  看成是一个函数，更容易理解。
	cout << "sum with operator+: ";
	sum = time1.operator+(*time);
	sum.show_time();
	
	cout << "sub: ";
	Time sub = time1 - *time;
	sub.show_time();
	
	cout << "time1 * 3: ";
	Time mult = time1 * 3;
	mult.show_time();
	// 对于4* time1 这种情况，相当于operator*(4, time1)
	// 不是一个Time对象，因此不能再使用成员函数定义方法定义操作符重载。
	// 又因为4* time1 需要访问到类的私有数据，因此需要定义友元函数。
	cout << "friend mult: ";
	Time friendmult = 4 * time1;
	friendmult.show_time();
	// operator<<(cout,time)
	cout << "using override operator <<: ";
	cout << time1 << sum << mult;
}
