#ifndef HEADER01_H_INCLUDED
#define HEADER01_H_INCLUDED
class B; // to tell A that B exists

class A
{
        int Asecret;
    public:
        void setSecretValue(B &, int); //
};

class B
{
        friend class A; // allow class A to change things here. But it's one way. Class A doesn't like B, so B can't access Asecret.
        int secretValue;
    public:
        int getSecretValue() {return secretValue;}
};

#endif // HEADER01_H_INCLUDED
