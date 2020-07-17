class CfgPatches {
    class tf47_gametracker {
        name = "TF47-Gametracker";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.82;
        requiredAddons[] = {"intercept_core"};
        author = "TF47";
        authors[] = {"Dragon", "RednecksRevenge"};
        url = "https://taskforce47.com";
        version = "1.0";
        versionStr = "1.0";
        versionAr[] = {1,0};
    };
};
class Intercept {
    class TF47 {
        class tf47_gametracker {
            pluginName = "TF47-Gametracker";
        };
    };
};
