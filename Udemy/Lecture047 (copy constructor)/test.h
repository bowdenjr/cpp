#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

class Test
{
    public:
        int x;
        int y;
        int *p; //This is an address, shared amongst classes
        Test (const Test &); // COPY CONSTRUCTOR
        Test(int, int, int); //STANDARD CONSTRUCTOR
        ~Test();
};

#endif // TEST_H_INCLUDED
