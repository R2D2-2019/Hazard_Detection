#include <treshold.hpp>

namespace r2d2::hazard_detection {
    treshold_c::treshold_c(const int &treshold):
        treshold(treshold) {
    }

    bool treshold_c::exceeds(const int &measured_value) const {
        return measured_value > treshold;
    }
}