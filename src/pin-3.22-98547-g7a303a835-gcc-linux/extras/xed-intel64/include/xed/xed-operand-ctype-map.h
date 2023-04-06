/* BEGIN_LEGAL 

Copyright (c) 2021 Intel Corporation

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
  
END_LEGAL */
/// @file xed-operand-ctype-map.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_OPERAND_CTYPE_MAP_H)
# define XED_OPERAND_CTYPE_MAP_H
#include "xed-internal-header.h"
xed_operand_ctype_enum_t xed_operand_get_ctype(xed_operand_enum_t opname);
unsigned int xed_operand_decider_get_width(xed_operand_enum_t opname);
#endif
