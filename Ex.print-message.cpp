# include <iostream>
# include "myNamespace.h"

int main()
{
    
    std::cout <<"Enter message" <<std::endl;
    std::cin >> message;
    std::cout << message << std::endl;
    return 0;

}

using namespace std;
using namespace myNamespace;

//myNamespace.h

#ifndef MYNAMESPACE_H_
#define MYNAMESPACE_H_

//myNamespace.h

namespace myNamespace {
    void cout();
}
#endif /* MYNAMESPACE_H_ */


//myNamespace.cpp

namespace myNamespace {
    void cout(){
        std::cout << "Programming an Algorith is thrilling" << std::endl;
    }
}