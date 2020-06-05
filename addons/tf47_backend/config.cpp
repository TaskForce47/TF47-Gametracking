class CfgPatches {
    class grad_replay_intercept {
        name = "TF47 Backend";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.82;
        requiredAddons[] = {"intercept_core"};
        author = "Dragon";
        authors[] = {"Dragon"};
        url = "https://taskforce47.com";
        version = "1.0";
        versionStr = "1.0";
        versionAr[] = {1,0};
    };
};
class Intercept {
    class Dragon {
        class tf47_backend {
            pluginName = "tf47_backend";
        };
    };
};
