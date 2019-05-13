#include <cstdint>

namespace r2d2::hazard_detection {
    class hazard_detection_sensor_c {
        virtual uint8_t get_value_u8t() {return 0;}
        virtual uint16_t get_value_u16t() {return 0;}
       
        virtual int8_t get_value_8t() {return 0;}
        virtual int16_t get_value_16t() {return 0;}
    };
}