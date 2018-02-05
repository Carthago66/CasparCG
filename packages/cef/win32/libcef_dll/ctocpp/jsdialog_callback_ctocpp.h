// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=ba09583753bb1ad73ef2d7a74b9c6ec5127442ae$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_JSDIALOG_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_JSDIALOG_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_jsdialog_handler_capi.h"
#include "include/cef_jsdialog_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefJSDialogCallbackCToCpp
    : public CefCToCppRefCounted<CefJSDialogCallbackCToCpp,
                                 CefJSDialogCallback,
                                 cef_jsdialog_callback_t> {
 public:
  CefJSDialogCallbackCToCpp();

  // CefJSDialogCallback methods.
  void Continue(bool success, const CefString& user_input) OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_JSDIALOG_CALLBACK_CTOCPP_H_