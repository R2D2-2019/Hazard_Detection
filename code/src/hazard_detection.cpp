#include <hazard_detection.hpp>

namespace r2d2::hazard_detection {
    hazard_detection_c::hazard_detection_c(base_comm_c &comm,
                                           const int &tempeature_treshold,
                                           const int &ppm_treshold)
        : base_module_c(comm),
          tempeature_treshold(tempeature_treshold),
          ppm_treshold(ppm_treshold) {
    }

    void hazard_detection_c::process() {
    }
} // namespace r2d2::hazard_detection