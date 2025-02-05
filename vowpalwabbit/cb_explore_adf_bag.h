/*
Copyright (c) by respective owners including Yahoo!, Microsoft, and
individual contributors. All rights reserved.  Released under a BSD
license as described in the file LICENSE.
*/
#pragma once

#include "reductions_fwd.h"

#include <vector>
#include <memory>

struct rand_state;

namespace VW
{
namespace cb_explore_adf
{
namespace bag
{
LEARNER::base_learner* setup(VW::config::options_i& options, vw& all);
}  // namespace bag
}  // namespace cb_explore_adf
}  // namespace VW
