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
    class 7r_lpdf {
        displayName = "[7R] Livonian People's Defense Forces";
        side = 0;
        flag = "\7r_factions\7R_factions_lpdf\data\lpr_flag.paa";
        icon = "\7r_factions\7R_factions_lpdf\data\lpr_flag.paa";
        priority = 0;
    };
};

class CfgEditorSubcategories
{
	class EdSubcat_Support_Personnel // Category class, you point to it in editorSubcategory property
	{
		displayName = "Men (Support)"; // Name visible in the list
	};
};

class CBA_Extended_EventHandlers_base;

class CfgWeapons{

    #include "modified_weapons.hpp"

    #include "uniforms.hpp"
        
};

class CfgVehicles {

    #include "soldiers\soldiers_base.hpp"

    #include "soldiers\soldiers.hpp"

    #include "vehicleConfig.hpp"

    #include "objects.hpp"

    #include "backpacks.hpp"

};

class CfgGroups {
    class east
    {
        name = "OPFOR"; // Name of Faction Side 
        side = 0; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think 
        class 7r_lpdf //Faction Class name 
        {
            name = "[7R] Livonian People's Defense Forces"; //Faction Name 
            #include "groups.hpp"
        };
    };	
};

