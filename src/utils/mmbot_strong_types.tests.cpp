/******************************************************************************
 * Copyright © 2013-2019 The Komodo Platform Developers.                      *
 *                                                                            *
 * See the AUTHORS, DEVELOPER-AGREEMENT and LICENSE files at                  *
 * the top-level directory of this distribution for the individual copyright  *
 * holder information and the developer policies on copyright and licensing.  *
 *                                                                            *
 * Unless otherwise agreed in a custom licensing agreement, no part of the    *
 * Komodo Platform software, including this file may be copied, modified,     *
 * propagated or distributed except according to the terms contained in the   *
 * LICENSE file                                                               *
 *                                                                            *
 * Removal or modification of this copyright notice is prohibited.            *
 *                                                                            *
 ******************************************************************************/

#include <doctest/doctest.h>

#include <utils/mmbot_strong_types.hpp>

namespace antara::mmbot::tests
{
    TEST_CASE ("st_prices can be equal")
    {
        auto p1 = st_price{1};
        auto p_one = st_price{1};
        auto p2 = st_price{2};

        CHECK_EQ(p1, p_one);
        CHECK_NE(p1, p2);
    }

    TEST_CASE ("st_prices can be ordered")
    {
        auto p1 = st_price{1};
        auto p2 = st_price{2};
        auto p3 = st_price{3};

        CHECK(p1 < p2);
        CHECK(!(p3 < p2));
    }

    TEST_CASE ("st_price can multiply with st_spread")
    {
        auto price = st_price{100};
        auto spread = st_spread{1.05};

        auto expected = st_price{105};

        CHECK_EQ(expected.value(), (price * spread).value());
    }
}
