#include <intercept.hpp>
#include <string>
#include <windows.h>
#include <string> 
#include <sstream>
#include <mysqlx/xdevapi.h>

namespace intercept::types {
	extern bool exiting;
};

int intercept::api_version() {
    return INTERCEPT_SDK_API_VERSION;
}

void intercept::register_interfaces() {}

void intercept::pre_init() {
	intercept::sqf::system_chat("Test is running");
}

void intercept::pre_start() {
    //intercept::sqf::create_vehicle("blub", *pos);
}

void display_fps() {
	while (!exiting)
	{
		{
			intercept::client::invoker_lock thread_lock;
			auto fps = std::to_string(intercept::sqf::diag_fps());
			const auto pos = dynamic_cast<game_data_object*>(intercept::sqf::player().data.getRef())->get_position_matrix()._position;
			std::ostringstream stream;
			stream << "POS: " << pos.x << "|" << pos.y << "|" << pos.z;
			intercept::sqf::hint(stream.str());
			intercept::sqf::system_chat(fps);
		}
		Sleep(500);
	}
}

void intercept::post_init() {
	std::thread display_thread(display_fps);
	display_thread.detach();
	
}

void intercept::mission_ended()
{
	
}
