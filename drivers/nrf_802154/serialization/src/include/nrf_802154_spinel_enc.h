/*
 * Copyright (c) 2020 - 2022, Nordic Semiconductor ASA
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

/**
 * @defgroup nrf_802154_spinel_serialization_encoder
 * 802.15.4 radio driver spinel serialization encoder
 * @{
 *
 */

#ifndef NRF_802154_SPINEL_ENC_H_
#define NRF_802154_SPINEL_ENC_H_

#include "../spinel_base/spinel.h"
#include "nrf_802154_spinel.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Serialize and send spinel command.
 *
 * @param[in]  cmd    Spinel command to be serialized and sent.
 * @param[in]  p_fmt  Pointer to a format string describing data types to be serialized.
 *                    Format string should conform to spinel specification.
 * @param[in]  ...    Data to be serialized and sent according to @ref p_fmt format string.
 *
 * @returns  number of bytes sent or negative error value on failure.
 *
 */
#define nrf_802154_spinel_send_cmd(cmd, p_fmt, ...)         \
    nrf_802154_spinel_send(SPINEL_DATATYPE_COMMAND_S p_fmt, \
                           SPINEL_HEADER_FLAG,              \
                           cmd,                             \
                           __VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif /* NRF_802154_SPINEL_ENC_H_ */

/** @} */
