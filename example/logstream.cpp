#include <iostream>
#include "logstream.h"
using namespace std;

static Logstream *plogstream = nullptr;
Logstream loginfo()
{
	if (plogstream == nullptr) {
		plogstream = new Logstream("em.log");
	}
	return *plogstream;
}
Logstream::Logstream(const string& filename)
{
	ofs.open (filename, std::ofstream::out | std::ofstream::app);
	m_filename = filename;
}
Logstream::Logstream(const Logstream& log)
{
	ofs.open (log.m_filename, std::ofstream::out | std::ofstream::app);
	m_filename = log.m_filename;
}
Logstream& Logstream::operator<<(const string& s)
{
	ofs << s;
	return *this;
}
Logstream& Logstream::operator<<(const long& s)
{
	ofs << s;
	return *this;
}
Logstream& Logstream::operator<<(const int& s)
{
	ofs << s;
	return *this;
}
int main()
{
	int aa = 5;
	long bb = 10;
	loginfo()<<"xxxx\n"<<"cccc\n";
	loginfo()<<"aa: "<<aa<<" bb: "<<bb<<"\n";
	cout << "Hello World\n";
}
