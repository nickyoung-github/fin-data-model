from enum import Enum, auto


class TenorPeriod(Enum):
    DAY = auto()
    BUSINESS_DAY = auto()
    WEEK = auto()
    MONTH = auto()
    YEAR = auto()
    IMM = auto()
