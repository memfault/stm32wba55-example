/*
 *  Copyright (c) 2016, Nest Labs, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */


#include <stdio.h>
#include <stdlib.h>
//#include <platform/uart.h>
#include <platform/spi-slave.h>

#if OPENTHREAD_CONFIG_NCP_SPI_ENABLE

// Spi-slave stubs

otError otPlatSpiSlaveEnable(
    otPlatSpiSlaveTransactionCompleteCallback aCallback,
    void *aContext
)
{
    (void)aCallback;
    (void)aContext;

    return OT_ERROR_NOT_IMPLEMENTED;
}

void otPlatSpiSlaveDisable(void)
{
}

otError otPlatSpiSlavePrepareTransaction(
    uint8_t *anOutputBuf,
    uint16_t anOutputBufLen,
    uint8_t *anInputBuf,
    uint16_t anInputBufLen,
    bool aRequestTransactionFlag
)
{
    (void)anOutputBuf;
    (void)anOutputBufLen;
    (void)anInputBuf;
    (void)anInputBufLen;
    (void)aRequestTransactionFlag;

    return OT_ERROR_NOT_IMPLEMENTED;
}

#endif // OPENTHREAD_CONFIG_NCP_SPI_ENABLE
