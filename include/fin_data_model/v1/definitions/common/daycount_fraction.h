
#ifndef FIN_DATA_MODEL_DAYCOUNT_FRACTION_H
#define FIN_DATA_MODEL_DAYCOUNT_FRACTION_H

namespace fin_data_model
{
    enum class DayCountFraction { _30_360 = 1, _30E_360 = 2, _30E_360_ISDA = 3, ACT_360 = 4, ACT_365 = 5,
        ACT_ACT = 6, ACT_ACT_ISMA = 7, ACT_ACT_AFB = 8 };
} // fin_data_model

#endif // FIN_DATA_MODEL_DAYCOUNT_FRACTION_H
