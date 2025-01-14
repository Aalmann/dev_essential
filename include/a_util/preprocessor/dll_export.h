/**
 * @file
 * Definition of preprocessor macro @ref A_UTIL_DLL_EXPORT
 *
 * @copyright
 * @verbatim
Copyright @ 2021 VW Group. All rights reserved.

    This Source Code Form is subject to the terms of the Mozilla
    Public License, v. 2.0. If a copy of the MPL was not distributed
    with this file, You can obtain one at https://mozilla.org/MPL/2.0/.

If it is not possible or desirable to put the notice in a particular file, then
You may include the notice in a location (such as a LICENSE file in a
relevant directory) where a recipient would be likely to look for such a notice.

You may add additional accurate notices of copyright ownership.
@endverbatim
 */

#ifndef A_UTIL_UTIL_PREPROCESSOR_DLL_EXPORT_HEADER_INCLUDED
#define A_UTIL_UTIL_PREPROCESSOR_DLL_EXPORT_HEADER_INCLUDED

/**
 * @def A_UTIL_DLL_EXPORT
 * Defines standard exporting rules for symbol visibility.
 * @ingroup a_util_preprocessor
 */
#if !defined(A_UTIL_DLL_EXPORT)

#if defined(_WIN32)
#define A_UTIL_DLL_EXPORT __declspec(dllexport)
#else
#define A_UTIL_DLL_EXPORT
#endif // defined(_WIN32)

#endif // !defined(A_UTIL_DLL_EXPORT)

#endif // A_UTIL_UTIL_PREPROCESSOR_DLL_EXPORT_HEADER_INCLUDED
