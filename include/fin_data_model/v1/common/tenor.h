
#ifndef FIN_DATA_MODEL_TENOR_H
#define FIN_DATA_MODEL_TENOR_H

#include "fin_data_model/v1/definitions/common/tenor_period.h"
#include <msgpack/msgpack.h>

namespace fin_data_model
{
    struct Tenor
    {
        Tenor() :
            type(), duration()
        {
        }
    
        Tenor(TenorPeriod type, int duration) :
            type(type), duration(duration)
        {
        }

        TenorPeriod type;
        int duration;
    
        MSGPACK_DEFINE(type, duration);
    };
} // fin_data_model

#endif // FIN_DATA_MODEL_TENOR_H
