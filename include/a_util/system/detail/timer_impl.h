/**
 * @file
 * Private implementation for @ref a_util::system::Timer "Timer" class
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

#ifndef A_UTIL_UTIL_SYSTEM_DETAIL_TIMER_IMPL_INCLUDED
#define A_UTIL_UTIL_SYSTEM_DETAIL_TIMER_IMPL_INCLUDED

#include "a_util/base/delegate.h"
#include "a_util/system/timer_decl.h"

namespace a_util {
namespace system {
template <typename M, typename T>
inline Timer::Timer(std::uint64_t period_us, M method, T& instance)
{
    init();
    setPeriod(period_us);
    setCallback(method, instance);
}

template <typename M, typename T>
inline void Timer::setCallback(M method, T& instance)
{
    setCallback(a_util::experimental::NullaryDelegate<void>(method, instance));
}

} // namespace system
} // namespace a_util

#endif // A_UTIL_UTIL_SYSTEM_DETAIL_TIMER_IMPL_INCLUDED
