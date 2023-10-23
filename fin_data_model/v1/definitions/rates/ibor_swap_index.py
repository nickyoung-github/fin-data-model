from enum import Enum, auto


class IborSwapIndex(Enum):
    LIBOR = auto()
    EURIBOR = auto()
    TIBOR = auto()
