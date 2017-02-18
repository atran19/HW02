//Directory_Entry
#include "Array_Based_PD.h"
#include <string>
#include <fstream>
#include <istream>
#include <ostream>

using namespace std;

Directory_Entry::Directory_Entry() 
{

}

Directory_Entry::Directory_Entry(string the_name, string the_number)
{
	the_name = name;
	the_number = number;
}

string Directory_Entry::get_name()const
{
	return name;
}

string Directory_Entry::get_number()const
{
	return number;
}

void Directory_Entry::set_number(const string& new_number)
{
	number = new_number;
}