class rhsusf_m113tank_base;
class rhsusf_m113tank_base_copy : rhsusf_m113tank_base {scope = 0; class Turrets;};
class rhsusf_m113tank_base_copy2 : rhsusf_m113tank_base_copy 
{
	scope = 0; 
	class Turrets : Turrets
	{
		class CargoTurret_01;
		class CargoTurret_02;
		class MainTurret;
		class MainTurret_In;
	};
};

class 7r_adf_m113a3_m2 : rhsusf_m113tank_base_copy2 
{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_adf";
	side = 1;
	displayName = "M113A3 (M2)";
	crew = "7r_adf_crew";
	textureList[] = {"Olive",1};
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_m113a3_m2.jpg";
	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_adf_crew_commander";};
		class MainTurret_In : MainTurret_In{};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
	};
	class textureSources{
		class Olive{
			author = "Skitz";
			displayName = "Olive";
			factions[] = {"7r_adf"};
			textures[] = {"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_lg_h_90s_co.paa","rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_lg_h_90s_co.paa","rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa","\7r_factions\7r_factions_adf\data\7r_m113a3_shield_od_co.paa"};
		};
	};

};

class rhsusf_m113_usarmy_mk19;
class rhsusf_m113_usarmy_mk19_copy : rhsusf_m113_usarmy_mk19 {scope = 0; class Turrets;};
class rhsusf_m113_usarmy_mk19_copy2 : rhsusf_m113_usarmy_mk19_copy 
{
	scope = 0; 
	class Turrets : Turrets
	{
		class CargoTurret_01;
		class CargoTurret_02;
		class MainTurret;
		class MainTurret_In;
	};
};

class 7r_adf_m113a3_mk19 : rhsusf_m113_usarmy_mk19_copy2 
{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_adf";
	side = 1;
	displayName = "M113A3 (MK19)";
	crew = "7r_adf_crew";
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_m113a3_mk19.jpg";
	textureList[] = {"Olive",1};
	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_adf_crew_commander";};
		class MainTurret_In : MainTurret_In{};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
	};
	class textureSources{
		class Olive{
			author = "Skitz";
			displayName = "Olive";
			factions[] = {"7r_adf"};
			textures[] = {"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_lg_l_co.paa","rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_lg_h_90s_co.paa","rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"};
		};
	};

};

class rhsusf_m113_usarmy_unarmed;
class rhsusf_m113_usarmy_unarmed_copy : rhsusf_m113_usarmy_unarmed {scope = 0; class Turrets;};
class rhsusf_m113_usarmy_unarmed_copy2 : rhsusf_m113_usarmy_unarmed_copy 
{
	scope = 0; 
	class Turrets : Turrets
	{
		class CargoTurret_01;
		class CargoTurret_02;
		class MainTurret;
		class MainTurret_In;
	};
};

class 7r_adf_m113a3_unarmed : rhsusf_m113_usarmy_unarmed 
{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_adf";
	side = 1;
	displayName = "M113A3 (Unarmed)";
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_m113a3_unarmed.jpg";
	crew = "7r_adf_crew";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_lg_l_co.paa","rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_lg_l_co.paa","rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"};
	
};