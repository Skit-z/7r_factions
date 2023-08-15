class rhssaf_army_ural_open;
class rhssaf_army_ural;
class rhssaf_army_ural_fuel;

class rhssaf_army_ural_open_copy : rhssaf_army_ural_open{
	class EventHandlers;
};

class 7r_cartel_ural_open : rhssaf_army_ural_open_copy{
	faction = "7r_cartel";
	side = 2;
	displayName = "Ural 375D (Open)";
	editorPreview = "\7r_factions\7R_factions_cartel\data\previews\7r_cartel_ural_open.jpg";
	crew = "7r_cartel_rifleman_01";
	hiddenSelectionstextures[] = {};
	class EventHandlers: EventHandlers
	{
		// (_this select 0): the vehicle
		// """" Random texture source (pick one from the property textureList[])
		// []: randomize the animation sources (accordingly to the property animationList[])
		// false: Don't change the mass even if an animation source has a defined mass
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};
	textureList[] = {"blue",0.333,"yellow",0.334,"worker",0.333};
	class textureSources{
		class blue{
			displayName = "Civil Blue";
			textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civil_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"};
			factions[] ={};
		};
		class yellow{
			displayName = "Civil Yellow";
			textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ1_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civ1_co.paa"};
			factions[] ={};
		};
		class worker{
			displayName = "Civil Worker";
			textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ2_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"};
			factions[] ={};
		};
	};
};

class rhssaf_army_ural_copy : rhssaf_army_ural{
	class EventHandlers;
};

class 7r_cartel_ural : rhssaf_army_ural_copy{
	faction = "7r_cartel";
	side = 2;
	displayName = "Ural 375D";
	editorPreview = "\7r_factions\7R_factions_cartel\data\previews\7r_cartel_ural.jpg";
	crew = "7r_cartel_rifleman_01";
	hiddenSelectionstextures[] = {};
	class EventHandlers: EventHandlers
	{
		// (_this select 0): the vehicle
		// """" Random texture source (pick one from the property textureList[])
		// []: randomize the animation sources (accordingly to the property animationList[])
		// false: Don't change the mass even if an animation source has a defined mass
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};
	textureList[] = {"blue",0.333,"yellow",0.334,"worker",0.333};
	class textureSources{
		class blue{
			displayName = "Civil Blue";
			textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civil_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"};
			factions[] ={};
		};
		class yellow{
			displayName = "Civil Yellow";
			textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ1_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civ1_co.paa"};
			factions[] ={};
		};
		class worker{
			displayName = "Civil Worker";
			textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ2_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"};
			factions[] ={};
		};
	};
};

class rhssaf_army_ural_fuel_copy : rhssaf_army_ural_fuel{
	class EventHandlers;
};

class 7r_cartel_ural_fuel : rhssaf_army_ural_fuel_copy{
	faction = "7r_cartel";
	side = 2;
	displayName = "Ural 375D (Fuel)";
	editorPreview = "\7r_factions\7R_factions_cartel\data\previews\7r_cartel_ural_fuel.jpg";
	crew = "7r_cartel_rifleman_01";
	hiddenSelectionstextures[] = {};
	class EventHandlers: EventHandlers
	{
		// (_this select 0): the vehicle
		// """" Random texture source (pick one from the property textureList[])
		// []: randomize the animation sources (accordingly to the property animationList[])
		// false: Don't change the mass even if an animation source has a defined mass
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};
	textureList[] = {"blue",0.333,"yellow",0.334,"worker",0.333};
	class textureSources{
		class blue{
			displayName = "Civil Blue";
			textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civil_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"};
			factions[] ={};
		};
		class yellow{
			displayName = "Civil Yellow";
			textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ1_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civ1_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"};
			factions[] ={};
		};
		class worker{
			displayName = "Civil Worker";
			textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ2_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"};
			factions[] ={};
		};
	};
};