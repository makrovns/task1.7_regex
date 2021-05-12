#include "my_stat_regex_library.h"

int mystat::stat_vowels (std::string file_name)
{
    std::ifstream fin;
    std::regex regular("([AaEeOoUuIiYy])");
    std::string value;
    char element;
    int counter = 0;

    fin.open(file_name);

    if(!fin.is_open())
    {
        throw std::ios_base::failure("File cannot be opened"); 
    }
    else
    {
        while (fin.get(element))
        {
            value = element;

            if (std::regex_match(value.c_str(), regular))
                counter++;
        }
    }
    
    fin.close();

    return counter;
}

int mystat::one_letter_word(std::string file_name)
{
    std::ifstream fin;
    std::regex regex("([A-Za-z])");
    std::string str;
    int counter = 0;

    fin.open(file_name);

    if(!fin.is_open())
    {
        throw std::ios_base::failure("File cannot be opened"); 
    }
    else
    {
        while (!fin.eof())
        {
            str = "";
            fin >> str;

            if (std::regex_match(str.c_str(),regex))
                counter++;
        }
        
    }

    fin.close();

    return counter;

}