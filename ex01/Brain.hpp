#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iomanip>
#include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain();
    Brain(Brain const &other);
    ~Brain();

    Brain const &operator=(Brain const &other);
};

#endif
