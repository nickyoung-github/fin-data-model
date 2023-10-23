from enum import Enum, auto


class BusinessDayConvention(Enum):
    UNADJUSTED = auto()
    PREVIOUS = auto()
    FOLLOWING = auto()
    MODIFIED_FOLLOWING = auto()
