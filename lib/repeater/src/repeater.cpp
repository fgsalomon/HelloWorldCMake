#include "repeater.h"

Repeater::Repeater(const std::string &sentence, int repetitions):
    m_sentence(sentence),
    m_repetitions(repetitions)
{

}

std::string Repeater::repeat() const
{
    std::string res;
    for (int i=0; i<m_repetitions; ++i)
    {
        res += m_sentence + "\n";

    }
    return res;
}
