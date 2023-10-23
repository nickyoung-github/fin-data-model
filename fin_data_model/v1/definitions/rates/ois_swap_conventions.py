from enum import Enum, auto


class OisSwapConventions(Enum):
    SOFR = auto()
    SOFR_ANNUAL = auto()
    FED_FUNDS = auto()
    ESTR = auto()
    EONIA = auto()
    SONIA = auto()
