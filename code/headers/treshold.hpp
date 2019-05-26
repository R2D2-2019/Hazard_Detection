#pragma once

namespace r2d2::hazard_detection {
    class treshold_c {
        // Treshold value
        int treshold;

    public:
        /**
         * treshold_c constructor.
         * 
         * @param int treshold. This is the treshold value that should not actually be exceeded.
         * */
        treshold_c(const int &treshold);

        /** 
         * Checks if the measured_value exceeds the treshold only, and sets the internal measured_value.
         * */
        bool exceeds(const int &measured_value) const;
    };
} // namespace r2d2::hazard_detection