#pragma once

#include <base_module.hpp>

namespace r2d2::hazard_detection {
    class hazard_detection_c : public base_module_c {
    public:
        hazard_detection_c(base_comm_c &base_comm);

        void process() override;
    };
} // namespace r2d2::hazard_detection