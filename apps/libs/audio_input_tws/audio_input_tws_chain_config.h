/****************************************************************************
Copyright (c) 2017 Qualcomm Technologies International, Ltd.
Part of 6.3.0

FILE NAME
    audio_input_tws_chain_config.h

DESCRIPTION
    TWS audio input chain configuration.
*/

#ifndef AUDIO_INPUT_TWS_CHAIN_CONFIG_H_
#define AUDIO_INPUT_TWS_CHAIN_CONFIG_H_

#include <chain.h>

typedef enum
{
    audio_input_tws_sbc,
    audio_input_tws_aptx,
    audio_input_tws_aac
} audio_input_tws_decoder_t;

enum
{
    passthrough_role,
    decoder_role,
    switched_passthrough_role
};

typedef enum
{
    path_encoded,
    path_pcm_left,
    path_pcm_right
} stream_channel_t;

/****************************************************************************
DESCRIPTION
    Create the chain with the appropriate configuration filters.
*/
kymera_chain_handle_t audioInputTWSCreateChain(audio_input_tws_decoder_t decoder);

#endif /* AUDIO_INPUT_TWS_CHAIN_CONFIG_H_ */
