from fin_data_model.v1.definitions.common.tenor_period import TenorPeriod
from pydantic_bind import dataclass


@dataclass
class Tenor:
    duration: int
    type: TenorPeriod

