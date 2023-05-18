class CfgMods
{
    class 7R_factions
    {
        dir = "@7R_Factions";
        name = "7R Factions Project";
        picture = "\7R Factions\7R_factions_main\data\7R_factions.paa";
        logo = "\7R Factions\7R_factions_main\data\7R_factions.paa";
        logoOver = "\7R Factions\7R_factions_main\data\7R_factions.paa";
        tooltip = "7R Factions Project";
        //action = "https://cerberus.radiandevelopment.com";
        overview = "Small faction mod made by members of 7th Rangers ArmA 3 group in order to supplement RHS and 3CB Factions with a small selection of Arma-Verse and Original Fictional factions.";
    };
};

class CfgWorlds {
    #include "latino_names.hpp"
};

class CfgFaces{
    #include "latino_faces.hpp"
};

class CfgPatches {
    class 7R_factions_main {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "rhs_main",
            "rhssaf_main",
            "rhsgref_main",
            "A3_Data_F_AoW_Loadorder"    // Arma 3
        };
        author = "Skitz";
        authors[] = {"Skitz"};
    };
};