import datetime as dt
from pydantic_bind import dataclass
from typing import Optional, Union

from fin_data_model.v1.common import Tenor

from fin_data_model.v1.definitions.common import AccrualConvention, BusinessDayConvention, Currency, DayCountFraction,\
    PrincipalExchange
from fin_data_model.v1.definitions.rates import IborSwapConventions, IborSwapIndex, OisSwapConventions, \
    OisSwapIndex, PayReceive, SwapClearingHouse


@dataclass
class FixedFloatSwap:
    termination_date: Optional[Union[Tenor, dt.date]] = None
    conventions: Optional[Union[IborSwapConventions, OisSwapConventions]] = None
    notional_currency: Optional[Currency] = None
    notional_amount: Optional[Union[float, str]] = None
    pay_or_receive: Optional[PayReceive] = None
    effective_date: Optional[Union[Tenor, dt.date]] = None

    principal_exchange: Optional[PrincipalExchange] = None
    clearing_house: Optional[SwapClearingHouse] = None
    roll_convention: Optional[str] = None

    fee: Optional[float] = None
    fee_currency: Optional[Currency] = None
    fee_payment_date: Optional[Union[dt.date, str]] = None

    fixed_rate: Optional[Union[float, str]] = None
    fixed_first_stub: Optional[Union[Tenor, dt.date]] = None
    fixed_last_stub: Optional[Union[Tenor, dt.date]] = None
    fixed_frequency: Optional[str] = None
    fixed_holidays: Optional[str] = None
    fixed_accrual_convention: Optional[AccrualConvention] = None
    fixed_business_day_convention: Optional[BusinessDayConvention] = None
    fixed_day_count_fraction: Optional[DayCountFraction] = None

    floating_rate_option: Optional[str] = None
    floating_rate_designated_maturity: Optional[Union[IborSwapIndex, OisSwapIndex]] = None
    floating_spread: Optional[float] = None
    floating_rate_for_the_initial_period: Optional[float] = None
    floating_accrual_convention: Optional[AccrualConvention] = None
    floating_business_day_convention: Optional[BusinessDayConvention] = None
    floating_day_count_fraction: Optional[DayCountFraction] = None
    floating_first_stub: Optional[Union[Tenor, dt.date]] = None
    floating_last_stub: Optional[Union[Tenor, dt.date]] = None
    floating_frequency: Optional[str] = None
    floating_holidays: Optional[str] = None
