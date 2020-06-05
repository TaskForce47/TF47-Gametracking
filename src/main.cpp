#include <intercept.hpp>

#include "ReplayPart.h"

#include <nlohmann/json.hpp>

#include <cpr/cpr.h>

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <filesystem>
#include <memory>
#include <algorithm>

using namespace intercept;

int intercept::api_version() {
    return INTERCEPT_SDK_API_VERSION;
}

void intercept::register_interfaces() {}

void intercept::pre_init() {

}

void intercept::pre_start() {

}

void intercept::post_init() {
   
}

