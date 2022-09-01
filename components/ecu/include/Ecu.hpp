//
// Created by jadjer on 24.08.22.
//

#pragma once

#include "CommandResult.hpp"
#include "ICommunication.hpp"

class ECU : public ICommunication {
 public:
  ECU(int rx_pin, int tx_pin);
  ~ECU() override;

 public:
  bool connect() const;
  void test() const;

 public:
  CommandResult* readData() const override;
  void writeData(uint8_t const* data, size_t len) const override;

 private:
  int m_rx;
  int m_tx;
  size_t m_bufferMaxSize;

 private:
  void wakeup() const;
  bool initialize() const override;
};
