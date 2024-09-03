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
    long double cumulativeAmountOfCoins = 0;
    long double currentPricePerCoin;
    Date currentDate;
    std::vector <cumulativePerDate> tokens;

public:


    cumulativeTokens() = default;


    ~cumulativeTokens() = default;


    void initializeValues(const long double dailyBuyingPower, const long double pricePerCoin, const Date & date);


    void saveRecord();


    void regularSaveRecord(const int frequency);



};


#endif // CUMULATIVE_TOKENS_H