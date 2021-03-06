// std_istreambuf_iterator 
// Transforms input lower case to upper case

#include <iostream>
#include <iterator>
#include <algorithm>
#include <cctype>

int main()
{
    std::istreambuf_iterator<char> is{std::cin};
    std::transform(is, {}, 
                    std::ostream_iterator<char>(std::cout),
                    [](char c)
                    {
                        return std::toupper(c);
                    }
                );
}
