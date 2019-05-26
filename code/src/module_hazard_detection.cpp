#include <module_hazard_detection.hpp>

namespace r2d2::hazard_detection {
    module_hazard_detection_c::module_hazard_detection_c(
        base_comm_c &comm, treshold_c &gas_treshold, treshold_c &object_temp)
        : base_module_c(comm),
          gas_treshold(gas_treshold),
          object_temp(object_temp) {
        comm.listen_for_frames({frame_type::TEMPERATURE, frame_type::GAS});
    }

    void module_hazard_detection_c::process() {
        comm.request(frame_type::TEMPERATURE);
        comm.request(frame_type::GAS);

        while (comm.has_data()) {
            const auto frame = comm.get_data();

            if (frame.request) {
                continue;
            }

            const auto gas_val = frame.as_frame_type<frame_type::GAS>();
            const auto temperature_val =
                frame.as_frame_type<frame_type::TEMPERATURE>();

            if (gas_treshold.exceeds(gas_val.gas_value)) {
                // TODO send warning to relevant module
            }
            if (object_temp.exceeds(temperature_val.object_temperature)) {
                // TODO send warning to relevant module
            }
        }
    }
} // namespace r2d2::hazard_detection