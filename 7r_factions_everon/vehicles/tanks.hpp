class rhs_tank_base;
class rhs_t80b : rhs_tank_base{
	class EventHandlers;
	class Turrets{
		class MainTurret;
	};
};

class rhs_t80b_copy : rhs_t80b{
	scope = 0;
	class EventHandlers;
	class Turrets : Turrets{
		class MainTurret : MainTurret{
			class CommanderOptics;
			class CommanderMG;
		};
	};
};

class 7r_lpdf_t80b : rhs_t80b_copy{
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	displayName = "T-80B";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_t80b.jpg";
	crew = "7r_lpdf_crew";
	editorSubcategory = "EdSubcat_Tanks";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_t80\data\hull.pac",
		"rhsafrf\addons\rhs_t80\data\turet.paa",
		"",
		"rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [4,5,6], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Turrets : Turrets{
		class MainTurret : MainTurret{
			class Turrets : Turrets{
				class CommanderOptics : CommanderOptics{gunnerType = "7r_lpdf_crew_commander";};
				class CommanderMG : CommanderMG{};
			};
		};
	};

	class Attributes{};

	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_t80\data\hull.pac",
				"rhsafrf\addons\rhs_t80\data\turet.paa",
				"",
				"rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa",
				"",
				"",
				"",
				"",
				"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
				"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
			};
		};
	};

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_rhs_30Rnd_545x39_7N6M_plum_AK{count = 20;magazine = "rhs_30Rnd_545x39_7N6M_plum_AK";};
	};

	class TransportWeapons{};
};

class rhs_a3t72tank_base{
	class EventHandlers;
	class Turrets{
		class MainTurret{
			class CommanderOptics;
			class CommanderMG;
		};
	};
};

class rhs_t72ba_tv : rhs_a3t72tank_base{
	class EventHandlers : EventHandlers{};
	class Turrets : Turrets{
		class MainTurret : MainTurret{
			class CommanderOptics;
			class CommanderMG;
		};
	};
};

class 7r_lpdf_t72ba : rhs_t72ba_tv{
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_t72ba.jpg";
	crew = "7r_lpdf_crew";
	editorSubcategory = "EdSubcat_Tanks";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_01a_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_02a_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
		"","","","","","",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [11,12,13], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Turrets : Turrets{
		class MainTurret : MainTurret{
			class Turrets : Turrets{
				class CommanderOptics : CommanderOptics{gunnerType = "7r_lpdf_crew_commander";};
				class CommanderMG : CommanderMG{};
			};
		};
	};

	class Attributes{};

	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_t72\data\rhs_t72b_01a_co.paa",
				"rhsafrf\addons\rhs_t72\data\rhs_t72b_02a_co.paa",
				"rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
				"rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
				"rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
				"","","","","","",
				"",
				"",
				"",
				"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
			};
		};
	};

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_rhs_30Rnd_545x39_7N6M_plum_AK{count = 20;magazine = "rhs_30Rnd_545x39_7N6M_plum_AK";};
	};

	class TransportWeapons{};
};

class rhs_t72bb_tv : rhs_a3t72tank_base{
	class EventHandlers : EventHandlers{};
	class Turrets : Turrets{
		class MainTurret : MainTurret{
			class CommanderOptics;
			class CommanderMG;
		};
	};
};

class 7r_lpdf_t72bb : rhs_t72bb_tv{
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_t72bb.jpg";
	crew = "7r_lpdf_crew";
	editorSubcategory = "EdSubcat_Tanks";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_01b_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_02b_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_05b_co.paa",
		"","","","","","",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [11,12,13], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Turrets : Turrets{
		class MainTurret : MainTurret{
			class Turrets : Turrets{
				class CommanderOptics : CommanderOptics{gunnerType = "7r_lpdf_crew_commander";};
				class CommanderMG : CommanderMG{};
			};
		};
	};

	class Attributes{};

	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_t72\data\rhs_t72b_01b_co.paa",
				"rhsafrf\addons\rhs_t72\data\rhs_t72b_02b_co.paa",
				"rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
				"rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
				"rhsafrf\addons\rhs_t72\data\rhs_t72b_05b_co.paa",
				"","","","","","",
				"",
				"",
				"",
				"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
			};
		};
	};

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_rhs_30Rnd_545x39_7N6M_plum_AK{count = 20;magazine = "rhs_30Rnd_545x39_7N6M_plum_AK";};
	};

	class TransportWeapons{};
};