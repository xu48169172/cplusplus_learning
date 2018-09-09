#include <fstream>
using namespace std;
class Logstream
{
private:
	ofstream ofs;
	string m_filename;
public:
	Logstream& operator<<(const string&);
	Logstream& operator<<(const long&);
	Logstream& operator<<(const int&);
	Logstream(const string&);
	Logstream(const Logstream &);
	Logstream(){};
};
