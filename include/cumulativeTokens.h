#ifndef CUMULATIVE_TOKENS_H
#define CUMULATIVE_TOKENS_H


#include <vector>


#include "date.h"


struct cumulativePerDate
{
    long double amountOfCoins;
    long double value;
    Date date;
};


class cumulativeTokens
{
private:

public:
    std::vector <cumulativePerDate> tokens;


    cumulativeTokens() = default;


    ~cumulativeTokens() = default;


};


#endif // CUMULATIVE_TOKENS_H