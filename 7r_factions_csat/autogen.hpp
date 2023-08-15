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
    class 7r_csat {
        displayName = "[7R] CSAT (2028)";
        side = 0;
        flag = "\a3\data_f\Flags\flag_CSAT_CO.paa";
        icon = "\a3\data_f\Flags\flag_CSAT_CO.paa";
        priority = 0;
    };
    class 7r_csat_p {
        displayName = "[7R] CSAT (Pacific - 2028)";
        side = 0;
        flag = "\a3\data_f\Flags\flag_CSAT_CO.paa";
        icon = "\a3\data_f\Flags\flag_CSAT_CO.paa";
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

class CfgWeapons{

    #include "gear\uniforms.hpp"

    #include "gear\headgear.hpp"

    #include "gear\vests.hpp"

    #include "gear\modified_weapons.hpp"

};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    #include "soldiers\soldiers_base.hpp"

    #include "soldiers\soldiers_base_pacific.hpp"

    #include "soldiers\soldiers.hpp"

    #include "soldiers\soldiers_pacific.hpp"

    #include "gear\backpacks.hpp"

    #include "vehicleConfig.hpp"

};

class CfgGroups {
    class east
    {
        name = "OPFOR"; // Name of Faction Side 
        side = 0; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think 
        class 7r_csat //Faction Class name 
        {
            name = "[7R] CSAT (2028)"; //Faction Name 

            #include "groups\groups.hpp"
        };
        class 7r_csat_p //Faction Class name 
        {
            name = "[7R] CSAT (Pacific - 2028)"; //Faction Name 

            #include "groups\groups_p.hpp"
        };
    }; 
};