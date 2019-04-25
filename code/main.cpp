#include "hwlib.hpp"
#include <comm.hpp>
#include <hazard_detection.hpp>

int main(void) {
  // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;
    hwlib::wait_ms(1000);
    r2d2::comm_c comm;
    r2d2::hazard_detection::hazard_detection_c hazard_det(comm);
    hazard_det.process();
    
}