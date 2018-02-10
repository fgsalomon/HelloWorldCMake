#ifndef REPEATER_H
#define REPEATER_H
#include <string>

/**
 * @brief The Repeater class
 */
class Repeater
{
public:
    /**
     * @brief Repeater
     * @param sentence Sentence to be repeated
     * @param repetitions Number of repetitions
     */
    Repeater(const std::string &sentence, int repetitions);
    /**
     * @brief repeat
     * @return repetead sentenced
     */
    std::string repeat() const;
private:
    std::string m_sentence;
    int m_repetitions;
};

#endif // REPEATER_H
