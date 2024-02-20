///|/ Copyright (c) Prusa Research 2021 Oleksandra Iushchenko @YuSanka
///|/
///|/ PrusaSlicer is released under the terms of the AGPLv3 or higher
///|/
#ifndef slic3r_ProfilesSharingUtils_hpp_
#define slic3r_ProfilesSharingUtils_hpp_

namespace Slic3r {

std::string get_json_printer_models(PrinterTechnology printer_technology);
std::string get_json_printer_profiles(const std::string& printer_model, const std::string& printer_variant);
std::string get_json_print_filament_profiles(const std::string& printer_profile);

} // namespace Slic3r

#endif // slic3r_ProfilesSharingUtils_hpp_
