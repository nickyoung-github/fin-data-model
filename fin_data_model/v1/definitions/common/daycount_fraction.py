from enum import Enum, auto


class DayCountFraction(Enum):
    _30_360 = auto()
    _30E_360 = auto()
    _30E_360_ISDA = auto()
    ACT_360 = auto()
    ACT_365 = auto()
    ACT_ACT = auto()
    ACT_ACT_ISMA = auto()
    ACT_ACT_AFB = auto()
