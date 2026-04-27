#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
    std::string _ideas[100];

public:
    Brain(void);
    std::string getIdea(int index) const;
    void setIdea(int index, std::string idea);
};

#endif
