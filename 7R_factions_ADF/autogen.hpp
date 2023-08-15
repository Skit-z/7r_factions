#define MAG_2(a) a, a
#define MAG_3(a) a, a, a
#define MAG_4(a) a, a, a, a
#define MAG_5(a) a, a, a, a, a
#define MAG_6(a) a, a, a, a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_8(a) a, a, a, a, a, a, a, a
#define MAG_9(a) a, a, a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a

#define BACK_MAG_XX(a,b) class a {magazine = a; count = b;}
#define BACK_WEAP_XX(a,b) class a {weapon = a; count = b;}
#define BACK_ITEM_XX(a,b) class a {name = a; count = b;}

class CfgFactionClasses {
    class 7r_adf {
        displayName = "[7R] Artemisa Defense Forces";
        side = 1;
        flag = "\7r_factions\7r_factions_adf\data\artemisa_flag.paa";
        icon = "\7r_factions\7r_factions_adf\data\artemisa_flag.paa";
        priority = 0;
    };
    class 7r_adf_pl {
        displayName = "[7R] Artemisa Defense Forces (Genericized)";
        side = 1;
        flag = "\7r_factions\7r_factions_adf\data\artemisa_flag.paa";
        icon = "\7r_factions\7r_factions_adf\data\artemisa_flag.paa";
        priority = 0;
    };
    class 7r_adf_o {
        displayName = "[7R] Artemisa Defense Forces";
        side = 0;
        flag = "\7r_factions\7r_factions_adf\data\artemisa_flag.paa";
        icon = "\7r_factions\7r_factions_adf\data\artemisa_flag.paa";
        priority = 0;
    };
    class 7r_adf_o_pl {
        displayName = "[7R] Artemisa Defense Forces (Genericized)";
        side = 0;
        flag = "\7r_factions\7r_factions_adf\data\artemisa_flag.paa";
        icon = "\7r_factions\7r_factions_adf\data\artemisa_flag.paa";
        priority = 0;
    };
};

class CfgEditorSubcategories
{
	class EdSubcat_Support_Personnel // Category class, you point to it in editorSubcategory property
	{
		displayName = "Men (Support)"; // Name visible in the list
	};

    class EdSubcat_Recon_Personnel // Category class, you point to it in editorSubcategory property
	{
		displayName = "Special Forces (Recon Group)"; // Name visible in the list
	};
};

class CBA_Extended_EventHandlers_base;

class CfgWeapons{

    #include "gear\modified_weapons.hpp"

    #include "gear\uniforms.hpp"

    #include "gear\headgear.hpp"
        
};

class CfgVehicles {

    #include "soldiers\soldiers_base.hpp"

    #include "soldiers\soldiers.hpp"

    #include "soldiers\soldiers_pl.hpp"

    #include "soldiers\soldiers_sf.hpp"

    #include "soldiers\soldiers_o.hpp"

    #include "soldiers\soldiers_pl_o.hpp"

    #include "soldiers\soldiers_sf_o.hpp"

    #include "vehicles_config.hpp"

    #include "objects.hpp"

    #include "gear\backpacks.hpp"

};

class CfgGroups {
    class WEST
    {
        name = "BLUFOR"; // Name of Faction Side 
        side = 1; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think 
        class 7r_adf //Faction Class name 
        {
            name = "[7R] Artemisa Defense Forces"; //Faction Name 

            #include "groups\groups.hpp"

            #include "groups\groups_sf.hpp"
        };
        class 7r_adf_pl //Faction Class name 
        {
            name = "[7R] Artemisa Defense Forces (Genericized)"; //Faction Name 

            #include "groups\groups_pl.hpp"
        };
    };
    class EAST
    {
        name = "OPFOR"; // Name of Faction Side 
        side = 0; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think 
        class 7r_adf_o //Faction Class name 
        {
            name = "[7R] Artemisa Defense Forces"; //Faction Name 

            #include "groups\groups_o.hpp"

            #include "groups\groups_sf_o.hpp"
        };
        class 7r_adf_o_pl //Faction Class name 
        {
            name = "[7R] Artemisa Defense Forces (Genericized)"; //Faction Name 

            #include "groups\groups_pl_o.hpp"
        };
    };
};