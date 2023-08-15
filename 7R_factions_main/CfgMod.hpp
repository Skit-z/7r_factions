class CfgMods
{
    class 7r_factions
    {
        dir = "@7R_Factions";
        name = "7r_factions Project";
        picture = "\7r_factions\7R_factions_main\data\7R_factions.paa";
        logo = "\7r_factions\7R_factions_main\data\7R_factions.paa";
        logoOver = "\7r_factions\7R_factions_main\data\7R_factions.paa";
        tooltip = "7r_factions Project";
        //action = "https://cerberus.radiandevelopment.com";
        overview = "Small faction mod made by members of 7th Rangers ArmA 3 group in order to supplement RHS and 3CB Factions with a small selection of Arma-Verse and Original Fictional factions.";
    };
};

class CfgWorlds {
    class GenericNames {
        #include "latino_names.hpp"
        #include "french_names.hpp"
    };
};

class CfgFaces{
    #include "latino_faces.hpp"
};

class cfgMagazineWells {
    #include "magwells.hpp"
};

class cfgGlasses {
    #include "facewear.hpp"
};

class cfgVehicles {
    #include "backpacks.hpp"
};

class CfgEditorSubcategories
{
	class EdSubcat_Support_Personnel // Category class, you point to it in editorSubcategory property
	{
		displayName = "Men (Support)"; // Name visible in the list
	};

	class EdSubcat_Trucks // Category class, you point to it in editorSubcategory property
	{
		displayName = "Trucks"; // Name visible in the list
	};
};

class CfgPatches {
    class 7r_factions_main {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "rhs_main",
            "rhsusf_main",
            "rhssaf_main",
            "rhsgref_main",
            "A3_Data_F_AoW_Loadorder"    // Arma 3
        };
        author = "Skitz";
        authors[] = {"Skitz"};
    };
};