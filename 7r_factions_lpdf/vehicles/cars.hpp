class RHS_UAZ_Base{class EventHandlers;};

class 7r_lpdf_uaz : RHS_UAZ_Base{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_uaz.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Cars";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
		"",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [2,3,4,5], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
				"",
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

class RHS_UAZ_open_Base{class EventHandlers;};

class 7r_lpdf_uaz_open : RHS_UAZ_open_Base{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_uaz_open.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Cars";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
		"",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [2,3,4,5], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
				"",
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

class rhs_UAZ_DShKM_Base;
class rhs_UAZ_DShKM_Base_copy : rhs_UAZ_DShKM_Base{scope = 0; class Turrets;};
class rhs_UAZ_DShKM_Base_copy2 : rhs_UAZ_DShKM_Base_copy{
	scope = 0;
	class EventHandlers;
	class Turrets : Turrets{
		class CargoTurret_01;
		class MainTurret;
	};
};

class 7r_lpdf_uaz_dshkm : RHS_UAZ_DShKM_Base_copy2{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_uaz_dshkm.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Cars";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [2,3,4,5], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_lpdf_rifleman_02";};
		class CargoTurret_01 : CargoTurret_01{};
	};

	class Attributes{};

	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
				"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa",
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

class rhs_UAZ_ags30_Base;
class rhs_UAZ_ags30_Base_copy : rhs_UAZ_ags30_Base{scope = 0; class Turrets;};
class rhs_UAZ_ags30_Base_copy2 : rhs_UAZ_ags30_Base_copy{
	scope = 0;
	class EventHandlers;
	class Turrets : Turrets{
		class CargoTurret_01;
		class MainTurret;
	};
};

class 7r_lpdf_uaz_ags30 : RHS_UAZ_ags30_Base_copy2{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_uaz_ags30.jpg";
	crew = "7r_lpdf_rifleman_02";
	editorSubcategory = "EdSubcat_Cars";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [2,3,4,5], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_lpdf_rifleman_03";};
		class CargoTurret_01 : CargoTurret_01{};
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
				"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa",
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

class rhs_UAZ_spg9_Base;
class rhs_UAZ_spg9_Base_copy : rhs_UAZ_spg9_Base{scope = 0; class Turrets;};
class rhs_UAZ_spg9_Base_copy2 : rhs_UAZ_spg9_Base_copy{
	scope = 0;
	class EventHandlers;
	class Turrets : Turrets{
		class CargoTurret_01;
		class MainTurret;
	};
};

class 7r_lpdf_uaz_spg9 : RHS_UAZ_spg9_Base_copy2{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_uaz_spg9.jpg";
	crew = "7r_lpdf_rifleman_03";
	editorSubcategory = "EdSubcat_Cars";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [2,3,4,5], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_lpdf_rifleman_01";};
		class CargoTurret_01 : CargoTurret_01{};
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
				"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa",
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

class Wheeled_APC_F;
class rhsgref_brdm2 : Wheeled_APC_F{
	class EventHandlers;
	class Turrets{
		class MainTurret;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
		class CommanderOptics;
	};
};

class 7r_lpdf_brdm2 : rhsgref_brdm2{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_brdm2.jpg";
	crew = "7r_lpdf_crew";
	editorSubcategory = "EdSubcat_Cars";
	hiddenSelectionsTextures[] = {
		"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_3tone_01_co.paa",
		"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_3tone_02_co.paa",
		"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [3,4,5], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Turrets : Turrets{
		class CommanderOptics : CommanderOptics{gunnerType = "7r_lpdf_crew_commander";};
		class MainTurret : MainTurret{gunnerType = "7r_lpdf_crew";};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
		class CargoTurret_03 : CargoTurret_03{};
		class CargoTurret_04 : CargoTurret_04{};
		class CargoTurret_05 : CargoTurret_05{};
		class CargoTurret_06 : CargoTurret_06{};
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_3tone_01_co.paa",
				"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_3tone_02_co.paa",
				"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa",
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

class rhsgref_brdm2um : rhsgref_brdm2{
	class EventHandlers;
	class Turrets{
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
		class CommanderOptics;
	};
};

class 7r_lpdf_brdm2um : rhsgref_brdm2um{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_brdm2um.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Cars";
	hiddenSelectionsTextures[] = {
		"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_3tone_01_co.paa",
		"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_3tone_02_co.paa",
		"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [3,4,5], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Turrets : Turrets{
		class CommanderOptics : CommanderOptics{gunnerType = "7r_lpdf_team_leader";};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
		class CargoTurret_03 : CargoTurret_03{};
		class CargoTurret_04 : CargoTurret_04{};
		class CargoTurret_05 : CargoTurret_05{};
		class CargoTurret_06 : CargoTurret_06{};
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_3tone_01_co.paa",
				"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_3tone_02_co.paa",
				"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa",
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

class rhsgref_brdm2_hq :rhsgref_brdm2um{
	class EventHandlers;
	class Turrets{
		class MainTurret;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
	};
};

class 7r_lpdf_brdm2_hq : rhsgref_brdm2_hq{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_brdm2_hq.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Cars";
	hiddenSelectionsTextures[] = {
		"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_3tone_01_co.paa",
		"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_3tone_02_co.paa",
		"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [3,4,5], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_lpdf_team_leader";};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
		class CargoTurret_03 : CargoTurret_03{};
		class CargoTurret_04 : CargoTurret_04{};
		class CargoTurret_05 : CargoTurret_05{};
		class CargoTurret_06 : CargoTurret_06{};
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_3tone_01_co.paa",
				"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_3tone_02_co.paa",
				"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa",
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