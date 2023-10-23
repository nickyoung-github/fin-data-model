
#ifndef FIN_DATA_MODEL_FIXED_FLOAT_SWAP_H
#define FIN_DATA_MODEL_FIXED_FLOAT_SWAP_H

#include "fin_data_model/v1/definitions/common/currency.h"
#include "fin_data_model/v1/definitions/common/daycount_fraction.h"
#include <variant>
#include "fin_data_model/v1/definitions/rates/ibor_swap_conventions.h"
#include "fin_data_model/v1/definitions/common/business_day_convention.h"
#include <msgpack/msgpack.h>
#include "fin_data_model/v1/definitions/rates/swap_clearing_house.h"
#include "fin_data_model/v1/common/tenor.h"
#include <string>
#include "fin_data_model/v1/definitions/rates/ibor_swap_index.h"
#include "fin_data_model/v1/definitions/common/accrual_convention.h"
#include <optional>
#include "fin_data_model/v1/definitions/rates/ois_swap_conventions.h"
#include "fin_data_model/v1/definitions/rates/pay_receive.h"
#include "fin_data_model/v1/definitions/rates/ois_swap_index.h"
#include <chrono>
#include "fin_data_model/v1/definitions/common/principal_exchange.h"

namespace fin_data_model
{
    struct FixedFloatSwap
    {
        FixedFloatSwap(std::optional<std::variant<Tenor, std::chrono::system_clock::time_point>> termination_date=std::nullopt,
                       std::optional<std::variant<IborSwapConventions, OisSwapConventions>>
                       conventions=std::nullopt, std::optional<Currency> notional_currency=std::nullopt,
                       std::optional<std::variant<double, std::string>> notional_amount=std::nullopt,
                       std::optional<PayReceive> pay_or_receive=std::nullopt,
                       std::optional<std::variant<Tenor, std::chrono::system_clock::time_point>>
                       effective_date=std::nullopt, std::optional<PrincipalExchange>
                       principal_exchange=std::nullopt, std::optional<SwapClearingHouse>
                       clearing_house=std::nullopt, std::optional<std::string> roll_convention=std::nullopt,
                       std::optional<double> fee=std::nullopt, std::optional<Currency>
                       fee_currency=std::nullopt,
                       std::optional<std::variant<std::chrono::system_clock::time_point, std::string>>
                       fee_payment_date=std::nullopt, std::optional<std::variant<double, std::string>>
                       fixed_rate=std::nullopt, std::optional<std::variant<Tenor,
                       std::chrono::system_clock::time_point>> fixed_first_stub=std::nullopt,
                       std::optional<std::variant<Tenor, std::chrono::system_clock::time_point>>
                       fixed_last_stub=std::nullopt, std::optional<std::string> fixed_frequency=std::nullopt,
                       std::optional<std::string> fixed_holidays=std::nullopt,
                       std::optional<AccrualConvention> fixed_accrual_convention=std::nullopt,
                       std::optional<BusinessDayConvention> fixed_business_day_convention=std::nullopt,
                       std::optional<DayCountFraction> fixed_day_count_fraction=std::nullopt,
                       std::optional<std::string> floating_rate_option=std::nullopt,
                       std::optional<std::variant<IborSwapIndex, OisSwapIndex>>
                       floating_rate_designated_maturity=std::nullopt, std::optional<double>
                       floating_spread=std::nullopt, std::optional<double>
                       floating_rate_for_the_initial_period=std::nullopt, std::optional<AccrualConvention>
                       floating_accrual_convention=std::nullopt, std::optional<BusinessDayConvention>
                       floating_business_day_convention=std::nullopt, std::optional<DayCountFraction>
                       floating_day_count_fraction=std::nullopt, std::optional<std::variant<Tenor,
                       std::chrono::system_clock::time_point>> floating_first_stub=std::nullopt,
                       std::optional<std::variant<Tenor, std::chrono::system_clock::time_point>>
                       floating_last_stub=std::nullopt, std::optional<std::string>
                       floating_frequency=std::nullopt, std::optional<std::string>
                       floating_holidays=std::nullopt) :
            termination_date(termination_date), conventions(conventions),
            notional_currency(notional_currency), notional_amount(notional_amount),
            pay_or_receive(pay_or_receive), effective_date(effective_date),
            principal_exchange(principal_exchange), clearing_house(clearing_house),
            roll_convention(roll_convention), fee(fee), fee_currency(fee_currency),
            fee_payment_date(fee_payment_date), fixed_rate(fixed_rate), fixed_first_stub(fixed_first_stub),
            fixed_last_stub(fixed_last_stub), fixed_frequency(fixed_frequency),
            fixed_holidays(fixed_holidays), fixed_accrual_convention(fixed_accrual_convention),
            fixed_business_day_convention(fixed_business_day_convention),
            fixed_day_count_fraction(fixed_day_count_fraction), floating_rate_option(floating_rate_option),
            floating_rate_designated_maturity(floating_rate_designated_maturity),
            floating_spread(floating_spread),
            floating_rate_for_the_initial_period(floating_rate_for_the_initial_period),
            floating_accrual_convention(floating_accrual_convention),
            floating_business_day_convention(floating_business_day_convention),
            floating_day_count_fraction(floating_day_count_fraction),
            floating_first_stub(floating_first_stub), floating_last_stub(floating_last_stub),
            floating_frequency(floating_frequency), floating_holidays(floating_holidays)
        {
        }

        std::optional<std::variant<Tenor, std::chrono::system_clock::time_point>> termination_date;
        std::optional<std::variant<IborSwapConventions, OisSwapConventions>> conventions;
        std::optional<Currency> notional_currency;
        std::optional<std::variant<double, std::string>> notional_amount;
        std::optional<PayReceive> pay_or_receive;
        std::optional<std::variant<Tenor, std::chrono::system_clock::time_point>> effective_date;
        std::optional<PrincipalExchange> principal_exchange;
        std::optional<SwapClearingHouse> clearing_house;
        std::optional<std::string> roll_convention;
        std::optional<double> fee;
        std::optional<Currency> fee_currency;
        std::optional<std::variant<std::chrono::system_clock::time_point, std::string>> fee_payment_date;
        std::optional<std::variant<double, std::string>> fixed_rate;
        std::optional<std::variant<Tenor, std::chrono::system_clock::time_point>> fixed_first_stub;
        std::optional<std::variant<Tenor, std::chrono::system_clock::time_point>> fixed_last_stub;
        std::optional<std::string> fixed_frequency;
        std::optional<std::string> fixed_holidays;
        std::optional<AccrualConvention> fixed_accrual_convention;
        std::optional<BusinessDayConvention> fixed_business_day_convention;
        std::optional<DayCountFraction> fixed_day_count_fraction;
        std::optional<std::string> floating_rate_option;
        std::optional<std::variant<IborSwapIndex, OisSwapIndex>> floating_rate_designated_maturity;
        std::optional<double> floating_spread;
        std::optional<double> floating_rate_for_the_initial_period;
        std::optional<AccrualConvention> floating_accrual_convention;
        std::optional<BusinessDayConvention> floating_business_day_convention;
        std::optional<DayCountFraction> floating_day_count_fraction;
        std::optional<std::variant<Tenor, std::chrono::system_clock::time_point>> floating_first_stub;
        std::optional<std::variant<Tenor, std::chrono::system_clock::time_point>> floating_last_stub;
        std::optional<std::string> floating_frequency;
        std::optional<std::string> floating_holidays;
    
        MSGPACK_DEFINE(termination_date, conventions, notional_currency, notional_amount, pay_or_receive, effective_date, principal_exchange, clearing_house, roll_convention, fee, fee_currency, fee_payment_date, fixed_rate, fixed_first_stub, fixed_last_stub, fixed_frequency, fixed_holidays, fixed_accrual_convention, fixed_business_day_convention, fixed_day_count_fraction, floating_rate_option, floating_rate_designated_maturity, floating_spread, floating_rate_for_the_initial_period, floating_accrual_convention, floating_business_day_convention, floating_day_count_fraction, floating_first_stub, floating_last_stub, floating_frequency, floating_holidays);
    };
} // fin_data_model

#endif // FIN_DATA_MODEL_FIXED_FLOAT_SWAP_H
