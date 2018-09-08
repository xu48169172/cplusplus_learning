#include <iostream>
#include "hello.h"

using namespace std;
Time::Time()
{
	hour = 0;
	miniute = 0;
	second = 0;
	sum();
}
// 构造函数使用不用的参数，但是注意传入的参数名称不能与成员函数名相同。
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
	sum();
}

void Time::set_time(int hour, int miniute, int second)
{
	this->hour = hour;
	this->miniute = miniute;
	this->second = second;
	sum();
}
// 函数后面带有const 表示函数不会修改调用对象，c++采用将const
// 关键字放到函数的括号后面。声明和定义都需要加上const。
void Time::show_time() const
{
	cout << "hour:"<<this->hour<<" ";
	cout << "miniute:"<<this->miniute<<" ";
	cout << "second:"<<this->second<<" ";
	cout << "sum:"<<this->total<<" ";
	cout << "Realtime:" << Realtime<<endl;
	cout << "\n";
}
int main()
{
	// new
	// 一个对象要含有括号，如果没有带任何参数，则相当于调用了默认构造函数。
	Time *time = new Time();
	time->set_time(10,20,30);
	time->show_time();

	Time time1(20,30,40);
	time1.show_time();
// 使用花括号 列表初始化，但是编译的时侯必须带上c++11编译选项。
	Time time2{30,40,50};
	time2.show_time();
	// 对象数组
	// 这里的代码使用标准格式对数组进行初始化，用括号扩起的
	// 以逗号分隔的值列表，其中每次构造函数调用表示一个值，如果类包含多个构造函数，则可以对不同的元素使用不同的构造函数。
	// 如果声明只初始化了数组的部分元素，剩余的元素则使用默认构造函数进行初始化。
	// 初始化对象数组的方案是，首先使用默认构造函数创建数组元素，然后花括号中的构造函数将创建临时对象，然后将临时对象的内容赋值到响应的元素中，因此要创建类对象数组，则这个类必须要要有默认构造函数。
	//
	Time time3[4] = {
		Time(1,2,3),
		Time(),
		Time(4,5,6),
	};
	time3[0].show_time();
	time3[1].show_time();

	// 使用类名 加上：： 引用类内的枚举
	cout << "enum: Realtime:"<<Time::Realtime<<endl;
	// 使用枚举名来限定枚举量
	int var = (int)egg::medium;

	cout<<"enum egg var:"<<var<<endl;
}
