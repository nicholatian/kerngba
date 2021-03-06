/// -*- coding: utf-8; mode: C++; indent-tabs-mode: nil; c-basic-offset: 4 -*-
/*****************************************************************************\
 *                                                                           * 
 *   .d8888b.          d8888 88888888888 888     888 8888888b.  888b    888  * 
 *  d88P  Y88b        d88888     888     888     888 888   Y88b 8888b   888  * 
 *  Y88b.            d88P888     888     888     888 888    888 88888b  888  * 
 *   "Y888b.        d88P 888     888     888     888 888   d88P 888Y88b 888  * 
 *      "Y88b.     d88P  888     888     888     888 8888888P"  888 Y88b888  * 
 *        "888    d88P   888     888     888     888 888 T88b   888  Y88888  * 
 *  Y88b  d88P   d8888888888     888     Y88b. .d88P 888  T88b  888   Y8888  * 
 *   "Y8888P"   d88P     888     888      "Y88888P"  888   T88b 888    Y888  * 
 *                                                                           * 
 *                                   Saturn                                  * 
 *     A general-purpose game engine for the Nintendo® Game Boy Advance™     * 
 *                                                                           * 
 *                     Copyright © 2016-2017 Nicholatian                     * 
 *                                                                           * 
 *  Licensed under the Apache License, Version 2.0 (the “License”); you may  * 
 * not use this file except in compliance with the License. You may obtain a * 
 *                          copy of the  License at                          * 
 *                                                                           * 
 *                http://www.apache.org/licenses/LICENSE-2.0                 * 
 *                                                                           * 
 *    Unless required by applicable law or agreed to in writing, software    * 
 * distributed under the License is distributed on an “AS IS” BASIS, WITHOUT * 
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the  * 
 *  License for the specific language governing permissions and limitations  * 
 *                            under the  License.                            * 
 *                                                                           * 
\*****************************************************************************/

#ifndef INC__LIBSATURN_GBA_MEMORY_HH
#define INC__LIBSATURN_GBA_MEMORY_HH

#include "gba/types.hh"

void* const         segBios    = nullptr;
saturn::u16* const  segEwram   = reinterpret_cast<saturn::u16*>(0x2000000);
saturn::u32* const  segIwram   = reinterpret_cast<saturn::u32*>(0x3000000);
saturn::u16* const  segIo      = reinterpret_cast<saturn::u16*>(0x4000000);
saturn::u16* const  segPal     = reinterpret_cast<saturn::u16*>(0x5000000);
saturn::u16* const  segPalBg   = segPal;
saturn::u16* const  segPalObj  = reinterpret_cast<saturn::u16*>(0x5000200);
saturn::u16* const  segVram    = reinterpret_cast<saturn::u16*>(0x6000000);
saturn::u16* const  segVramBg  = segVram;
saturn::u16* const  segVramObj = reinterpret_cast<saturn::u16*>(0x6010000);
saturn::u16* const  segOam     = reinterpret_cast<saturn::u16*>(0x7000000);
saturn::u16* const  segRom     = reinterpret_cast<saturn::u16*>(0x8000000);
saturn::u8* const   segSram    = reinterpret_cast<saturn::u8*>(0xE000000);



saturn::u32* const ioDma0sad  = reinterpret_cast<saturn::u32*>(0x40000B0);
saturn::u32* const ioDma0dad  = reinterpret_cast<saturn::u32*>(0x40000B4);
saturn::u16* const ioDma0cntL = reinterpret_cast<saturn::u16*>(0x40000B8);
saturn::u16* const ioDma0cntH = reinterpret_cast<saturn::u16*>(0x40000BA);

saturn::u32* const ioDma1sad  = reinterpret_cast<saturn::u32*>(0x40000BC);
saturn::u32* const ioDma1dad  = reinterpret_cast<saturn::u32*>(0x40000C0);
saturn::u16* const ioDma1cntL = reinterpret_cast<saturn::u16*>(0x40000C4);
saturn::u16* const ioDma1cntH = reinterpret_cast<saturn::u16*>(0x40000C6);

saturn::u32* const ioDma2sad  = reinterpret_cast<saturn::u32*>(0x40000C8);
saturn::u32* const ioDma2dad  = reinterpret_cast<saturn::u32*>(0x40000CC);
saturn::u16* const ioDma2cntL = reinterpret_cast<saturn::u16*>(0x40000D0);
saturn::u16* const ioDma2cntH = reinterpret_cast<saturn::u16*>(0x40000D2);

saturn::u32* const ioDma3sad  = reinterpret_cast<saturn::u32*>(0x40000D4);
saturn::u32* const ioDma3dad  = reinterpret_cast<saturn::u32*>(0x40000D8);
saturn::u16* const ioDma3cntL = reinterpret_cast<saturn::u16*>(0x40000DC);
saturn::u16* const ioDma3cntH = reinterpret_cast<saturn::u16*>(0x40000DE);

#endif // INC__LIBSATURN_GBA_MEMORY_HH
