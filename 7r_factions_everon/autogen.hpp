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
    class 7r_ena {
        displayName = "[7R] Everon National Army";
        side = 1;
        flag = "\7r_factions\7R_factions_everon\data\7r_everon_flag_co.paa";
        icon = "\7r_factions\7R_factions_everon\data\7r_everon_flag_co.paa";
        priority = 0;
    };
    class 7r_efa {
        displayName = "[7R] Everon Freedom Alliance";
        side = 2;
        flag = "\7r_factions\7R_factions_everon\data\7r_everon_flag_co.paa";
        icon = "\7r_factions\7R_factions_everon\data\7r_everon_flag_co.paa";
        priority = 0;
    };
};

class CfgEditorSubcategories
{
	class EdSubcat_Winter_Personnel // Category class, you point to it in editorSubcategory property
	{
		displayName = "Men (Winter)"; // Name visible in the list
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

    #include "soldiers\soldiers_winter.hpp"

    //#include "vehicleConfig.hpp"

    #include "objects.hpp"

    #include "backpacks.hpp"

};

class CfgGroups {
    class west
    {
        name = "BLUFOR"; // Name of Faction Side 
        side = 1; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think 
        class 7r_ena //Faction Class name 
        {
            name = "[7R] Everon National Army"; //Faction Name 
            #include "groups\groups.hpp"
        };
        class 7r_ena_w //Faction Class name 
        {
            name = "[7R] Everon National Army (Winter)"; //Faction Name 
            #include "groups\groups_winter.hpp"
        };
    };	
};

