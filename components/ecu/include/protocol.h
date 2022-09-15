//
// Created by jadjer on 24.08.22.
//

#pragma once

#include "command_result.h"
#include <esp_err.h>

/**
 * @brief
 * @param handle
 * @return
 */
esp_err_t protocolConnect();

/**
 * @brief
 * @param handle
 * @return
 */
CommandResult_t* protocolReadData();

/**
 * @brief
 * @param handle
 * @param data
 * @param len
 */
void protocolWriteData(uint8_t const* data, size_t len);
