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
    class 7R_blp {
        displayName = "[7R] Brigadas de Liberación Populares";
        side = 2;
        flag = "\7R Factions\7R_factions_blp\data\blp_flag.paa";
        icon = "\7R Factions\7R_factions_blp\data\blp_flag.paa";
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

    //#include "modified_weapons.hpp"

    #include "uniforms.hpp"
        
};

class CfgVehicles {

    #include "soldiers_base.hpp"

    //#include "soldiers1.hpp"

    //#include "vehicles.hpp"

    #include "objects.hpp"

    //#include "backpacks.hpp"

};

class CfgGroups {

    //#include "groups.hpp"

};