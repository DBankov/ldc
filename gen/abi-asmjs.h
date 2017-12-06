//===-- gen/abi-asmjs.h - AsmJS ABI description -----------------*- C++ -*-===//
//
//                         LDC - the LLVM D compiler
//
// This file is distributed under the BSD-style LDC license. See the LICENSE
// file for details.
//
//===----------------------------------------------------------------------===//
//
// The ABI implementation used for Emscripten/AsmJS targets
//
//===----------------------------------------------------------------------===//

#ifndef LDC_GEN_ABI_ASMJS_H
#define LDC_GEN_ABI_ASMJS_H

struct TargetABI;

TargetABI *getAsmJSTargetABI();

#endif
