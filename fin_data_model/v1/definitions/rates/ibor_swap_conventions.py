from enum import Enum, auto


class IborSwapConventions(Enum):
    USD_LIBOR_1M = auto()
    USD_LIBOR_3M = auto()
    USD_LIBOR_6M = auto()
    EUR_EURIBOR_6M = auto()
    GBP_LIBOR_6M = auto()
    JPY_TIBOR_6M = auto()
