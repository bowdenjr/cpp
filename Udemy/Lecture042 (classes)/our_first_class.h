#ifndef OUR_FIRST_CLASS_H_INCLUDED
#define OUR_FIRST_CLASS_H_INCLUDED

using namespace std;

class personalData
{
	private: //This is here by default (invisible)
		short age;
		int *p;
	public: //Everything after here is public
	    personalData(); //CONSTURCTOR = name of class with ().
	    personalData(short); //OVERLOADED CONSTRUCTOR
	    ~personalData(); //DESTRUCTOR
		void setAge(int value);
		short getAge() {return age;} //A 1-line function is OK to leave here
};

#endif // OUR_FIRST_CLASS_H_INCLUDED
