#include <greeter.h>

Greeter::Greeter()
{

}

Greeter::Greeter(const std::string &name):
    m_name(name)
{

}

std::string Greeter::greet() const
{
    return "Hello " +  m_name + "!";
}
