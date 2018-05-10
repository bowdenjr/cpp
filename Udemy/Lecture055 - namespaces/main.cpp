#include <iostream>
#include "header.h"

namespace mySpace // CUSTOM NAMESPACE
{
	class MyNewLine
	{
			std::string text; //private variable
		public:
			MyNewLine(std::string text_ = "\n\n\n") {this->text = text_;} // Constructor, takes a string as input default is "\n\n\n"
			std::string getString() //Public function that returns the private text variable
			{
				return text;
			}
	};

	std::ostream & operator<<(std::ostream & out, MyNewLine & o) // defines a function for the << operator in this namespace. Returns an ostream object, takes as inputs a reference to the ostream object and a reference to the MyNewLine object
	{
		return out << o.getString(); //when << invoked, return the text
	}
	MyNewLine endl("\n\n\n\n\n\n\n\n\n"); //Create the myNewLine object called endl in this namespace

}
/*


//namespace A
//{
//	int var = 20;
//}
//
//namespace B
//{
//	int var = 60;
//}

//using namespace A;

*/
using namespace mySpace;
int main()
{
	std::cout << "Test text" << endl; //scope operator

	return 0;
}

