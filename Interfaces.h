#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED
#define interface struct

interface IListable
{
    public:
        virtual ~IListable(){};
        virtual void list(int depth) = 0; //operation
};

interface IComposable
{
    public:
        virtual ~IComposable(){};
        virtual void add(IListable* component)=0;
        virtual void remove(IListable* component)=0;
        virtual IListable* getChild(int key)=0;
};

#endif // INTERFACES_H_INCLUDED
