// Copyright 2019-2020 CERN and copyright holders of ALICE O2.
// See https://alice-o2.web.cern.ch/copyright for details of the copyright holders.
// All rights not expressly granted are reserved.
//
// This software is distributed under the terms of the GNU General Public
// License v3 (GPL Version 3), copied verbatim in the file "COPYING".
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.
#include "TextDriverClient.h"
#include "Framework/Logger.h"

namespace o2::framework
{

TextDriverClient::TextDriverClient(ServiceRegistryRef registry, DeviceState& deviceState)
{
}

void TextDriverClient::tell(const char* msg, size_t s, bool flush)
{
  LOG(debug) << std::string_view{msg, s};
}

void TextDriverClient::flushPending()
{
}

} // namespace o2::framework
