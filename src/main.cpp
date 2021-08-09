/*
 *  Simple IoT - An open source home automation solution that uses readily
 *  available hardware and robust yet easy to understand software.
 *  Copyright (C) 2021 - Federico García (garciafedericoagustin@gmail.com)
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include <Arduino.h>

#include "simpleiot/debug/debug.hpp"
#include "simpleiot/core/core.hpp"

void setup()
{
    simple_iot::debug::Init();
    simple_iot::debug::Log("Firmware version: " + simple_iot::core::GetFirmwareVersion());
}

void loop()
{

}
