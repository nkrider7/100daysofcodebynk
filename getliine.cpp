#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <map>


using namespace std;

int main()
{
	/*
	vector<Entry> phone_book = {
    {"David Hume",123456},
    {"Karl Popper",234567},
    {"Bertrand ",345678}
};
	phone_book.size();
*/

	map<string,int> phone_book = {
{"David Hume",123456},
{"Karl Popper",234567},
{"Bertrand ",345678}
};

	cout<<phone_book[0];

	return 0;
}
