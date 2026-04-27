#include "Brain.hpp"

Brain::Brain(void)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = "null";
}

std::string Brain::getIdea(int index) const
{
    return _ideas[index % 100];
}

void Brain::setIdea(int index, std::string idea)
{
    _ideas[index % 100] = idea;
}
