
#ifndef FIN_DATA_MODEL_BUSINESS_DAY_CONVENTION_H
#define FIN_DATA_MODEL_BUSINESS_DAY_CONVENTION_H

namespace fin_data_model
{
    enum class BusinessDayConvention { UNADJUSTED = 1, PREVIOUS = 2, FOLLOWING = 3, MODIFIED_FOLLOWING = 4 };
} // fin_data_model

#endif // FIN_DATA_MODEL_BUSINESS_DAY_CONVENTION_H
