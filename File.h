#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED
#include "Folder.h"

class File : public IListable
{
    private:
        std::string m_nodeName;
        std::vector<IListable*> m_children;

    public:
        File(std::string nodeName)
        {
            m_nodeName = nodeName;
        }

        virtual ~File(){}

        void list(int depth)//operation
        {
            std::string newStr(depth, '-');
            std::cout << newStr << m_nodeName << " depth: " << depth << std::endl;
        }
};

#endif // FILE_H_INCLUDED
