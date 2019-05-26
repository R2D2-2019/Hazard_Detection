#pragma once

#include <base_module.hpp>
#include <treshold.hpp>

namespace r2d2::hazard_detection {
    class module_hazard_detection_c : public base_module_c {
        treshold_c &gas_treshold;
        treshold_c &object_temp;

    public:
        /**
         * Hazard Detection Constructor.
         * The tempeature_treshold is set to 49 by default.
         * This is the temperature, PLA plastic filament will show signs of
         * defects with a pressure of 66 PSI (4.64 kg/cm2). Read more about
         * this, here:
         * https://github.com/R2D2-2019/R2D2-2019/wiki/Dangerous-temperatures-for-robot-components
         * If this is not the case, a temperature of 55 must be set instead.
         * This is the temperature a Li-Ion battery will start to show signs of
         * defects. Ppm means parts per million and and from 10,000 ppm it
         * becomes dangerous. The condition is that a temperature of 400 degrees
         * must be present.
         *
         * @param base_comm_c
         * @param int
         * @param int
         * */
        module_hazard_detection_c(base_comm_c &comm, treshold_c &gas_treshold,
                                  treshold_c &object_temp);
        void process() override;
    };
} // namespace r2d2::hazard_detection