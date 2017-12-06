//===-- gen/abi-wasm.h - Wasm32 ABI description -----------------*- C++ -*-===//
//
//                         LDC - the LLVM D compiler
//
// This file is distributed under the BSD-style LDC license. See the LICENSE
// file for details.
//
//===----------------------------------------------------------------------===//
//
// The ABI implementation used for wasm targets
//
//===----------------------------------------------------------------------===//

#ifndef LDC_GEN_ABI_WASM_H
#define LDC_GEN_ABI_WASM_H

struct TargetABI;

TargetABI *getWasmTargetABI(bool Is64Bit);

#endif
