#include <comm.hpp>
#include <module_hazard_detection.hpp>
#include <treshold.hpp>

using namespace r2d2::hazard_detection;

int main() {

    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;
    hwlib::wait_ms(1000);
    r2d2::comm_c comm;
    treshold_c gas(8'000);
    treshold_c obj_temperature(46);

    module_hazard_detection_c hazard_det(comm, gas, obj_temperature);
    hazard_det.process();
}