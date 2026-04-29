#include "Brain.hpp"

Brain::Brain(void)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = "null";
}

Brain::Brain(const Brain &b)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = b.getIdea(i);
}

Brain::~Brain() {}

std::string Brain::getIdea(int index) const
{
    return _ideas[index % 100];
}

std::string* Brain::getIdeaAdress(int index)
{
    return &_ideas[index % 100];
}

void Brain::setIdea(int index, std::string idea)
{
    _ideas[index % 100] = idea;
}

Brain& Brain::operator=(const Brain &b)
{
    if (this != &b)
    {
        for (int i = 0; i < 100; i++)
            _ideas[i] = b.getIdea(i);
    }
    return *this;
}