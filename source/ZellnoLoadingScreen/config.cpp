class CfgPatches
{
    class ZellnoLoadingScreen
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Scripts"
        };
    };
};

class CfgMods
{
    class ZellnoLoadingScreen
    {
        dir = "ZellnoLoadingScreen";
        name = "Zellno Loading Screen";
        author = "Zellno";
        type = "mod";

        dependencies[] =
        {
            "Game"
        };

        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] =
                {
                    "ZellnoLoadingScreen/Scripts/3_Game"
                };
            };
        };
    };
};
