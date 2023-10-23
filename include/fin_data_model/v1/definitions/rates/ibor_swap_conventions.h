
#ifndef FIN_DATA_MODEL_IBOR_SWAP_CONVENTIONS_H
#define FIN_DATA_MODEL_IBOR_SWAP_CONVENTIONS_H

namespace fin_data_model
{
    enum class IborSwapConventions { USD_LIBOR_1M = 1, USD_LIBOR_3M = 2, USD_LIBOR_6M = 3, EUR_EURIBOR_6M = 4,
        GBP_LIBOR_6M = 5, JPY_TIBOR_6M = 6 };
} // fin_data_model

#endif // FIN_DATA_MODEL_IBOR_SWAP_CONVENTIONS_H
