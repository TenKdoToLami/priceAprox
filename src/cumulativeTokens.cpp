#include "cumulativeTokens.h"


void cumulativeTokens::initializeValues(const long double dailyBuyingPower, const long double pricePerCoin, const Date & date)
{
    currentPricePerCoin = pricePerCoin;
    cumulativeAmountOfCoins = dailyBuyingPower / currentPricePerCoin;
    currentDate = date;

    return;
}


void cumulativeTokens::saveRecord()
{
    tokens.emplace_back(cumulativePerDate{cumulativeAmountOfCoins, cumulativeAmountOfCoins * currentPricePerCoin, currentDate});

    return;
}


void cumulativeTokens::regularSaveRecord(const int frequency)
{
    if (!frequency)
        return;
    
    if (frequency == 3)
    {
        saveRecord();
        return;
    }

    if (frequency == 2 && currentDate.day == 1)
    {
        saveRecord();
        return;
    }
    
    if (frequency == 1 && currentDate.month == 1 && currentDate.day == 1)
        saveRecord();

    return;
}
