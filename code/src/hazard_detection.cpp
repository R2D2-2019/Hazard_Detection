#include <hazard_detection.hpp>

namespace r2d2::hazard_detection {
    hazard_detection::hazard_detection_c(base_comm_c& comm):
        base_module_c(comm) {
            /*comm.listen_for_frames({
                Doens't exist yet
                r2d2::frame_type::gas_detection_s
            });*/
    }
}