#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
    std::string _ideas[100];

public:
    Brain();
    Brain(const Brain &b);
    ~Brain(void);
    std::string getIdea(int index) const;
    std::string* getIdeaAdress(int index);
    void setIdea(int index, std::string idea);
};

#endif
