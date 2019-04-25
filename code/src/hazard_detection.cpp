#include <hazard_detection.hpp>

namespace r2d2::hazard_detection {
    hazard_detection_c::hazard_detection_c(base_comm_c& comm):
        base_module_c(comm) {
            /*comm.listen_for_frames({
                Doens't exist yet
                r2d2::frame_type::GAS_DETECTION
            });*/
    }

    void hazard_detection_c::process() {
        /*comm.request(frame_type::GAS_DETECTION);
        while (comm.has_data()) {
            const auto frame = comm.get_data();
            if (frame.request) {
                continue;
            }
            const auto gas_value = frame.as_frame_type<frame_type::GAS_DETECTION>...*/
        }
    }
}