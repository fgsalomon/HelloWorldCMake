#ifndef GREETER_H
#define GREETER_H
#include <string>

/**
 * @brief The Greeter class
 */
class Greeter
{
public:
    /**
     * @brief Greeter
     */
    Greeter();
    /**
     * @brief Greeter
     * @param name
     */
    Greeter(const std::string &name);
    std::string greet() const;
private:
    std::string m_name;
};

#endif // GREETER_H
