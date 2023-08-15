class rhs_btr60_base;
class rhs_btr60_base_copy : rhs_btr60_base{scope = 0; class Turrets;};
class rhs_btr60_base_copy2 : rhs_btr60_base_copy{
	scope = 0;
	class EventHandlers;
	class Turrets : Turrets{
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
		class CargoTurret_07;
		class CargoTurret_08;
		class Commander_Out;
		class CommanderOptics;
		class MainTurret;
	};
};

class 7r_lpdf_btr60 : rhs_btr60_base_copy2{
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	displayName = "BTR-60PB";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_btr60.jpg";
	crew = "7r_lpdf_crew";
	editorSubcategory = "EdSubcat_APCs";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_a2port_armor_camo\data\btr60_body_3tone_co.paa",
		"rhsafrf\addons\rhs_a2port_armor_camo\data\btr60_details_3tone_co.paa",
		"","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [12,13,14], 'CDF']]] spawn rhs_fnc_decalsInit;";
	};

	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_lpdf_crew_commander";};
		class CommanderOptics : CommanderOptics{};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
		class CargoTurret_03 : CargoTurret_03{};
		class CargoTurret_04 : CargoTurret_04{};
		class CargoTurret_05 : CargoTurret_05{};
		class CargoTurret_06 : CargoTurret_06{};
		class CargoTurret_07 : CargoTurret_07{};
		class CargoTurret_08 : CargoTurret_08{};
		class Commander_Out : Commander_Out{};
	};

	class Attributes{};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_a2port_armor_camo\data\btr60_body_3tone_co.paa",
				"rhsafrf\addons\rhs_a2port_armor_camo\data\btr60_details_3tone_co.paa",
				"","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
				"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
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

class rhs_btr80_msv;
class rhs_btr80_msv_copy : rhs_btr80_msv{scope = 0; class Turrets;};
class rhs_btr80_msv_copy2 : rhs_btr80_msv_copy{
	scope = 0;
	class EventHandlers;
	class Turrets : Turrets{
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
		class CargoTurret_07;
		class CargoTurret_08;
		class CargoTurret_09;
		class Commander_Out;
		class CommanderOptics;
		class MainTurret;
	};
};

class 7r_lpdf_btr80 : rhs_btr80_msv_copy2{
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	displayName = "BTR-80";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_btr80.jpg";
	crew = "7r_lpdf_crew";
	editorSubcategory = "EdSubcat_APCs";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_tri01_co.paa",
		"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_tri01_co.paa",
		"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_tri01_co.paa",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [12,13,14], 'CDF']]] spawn rhs_fnc_decalsInit;";
	};

	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_lpdf_crew_commander";};
		class CommanderOptics : CommanderOptics{};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
		class CargoTurret_03 : CargoTurret_03{};
		class CargoTurret_04 : CargoTurret_04{};
		class CargoTurret_05 : CargoTurret_05{};
		class CargoTurret_06 : CargoTurret_06{};
		class CargoTurret_07 : CargoTurret_07{};
		class CargoTurret_08 : CargoTurret_08{};
		class CargoTurret_09 : CargoTurret_09{};
		class Commander_Out : Commander_Out{};
	};

	class Attributes{};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_tri01_co.paa",
				"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_tri01_co.paa",
				"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_tri01_co.paa",
				"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
				"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
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

class rhs_bmp1tank_base{
	class EventHandlers;
	class Turrets;
};

class rhs_bmp_base : rhs_bmp1tank_base{
	class EventHandlers : EventHandlers{};
	class Turrets : Turrets{
		class MainTurret;
		class Com_BMP1;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
		class CargoTurret_07;
		class CargoTurret_08;
		class CargoTurret_09;
		class CargoTurret_10;
	};
};

class rhs_bmp1_vdv : rhs_bmp_base{
	class EventHandlers : EventHandlers{};
	class Turrets : Turrets{
		class MainTurret : MainTurret{};
		class Com_BMP1 : Com_BMP1{};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
		class CargoTurret_03 : CargoTurret_03{};
		class CargoTurret_04 : CargoTurret_04{};
		class CargoTurret_05 : CargoTurret_05{};
		class CargoTurret_06 : CargoTurret_06{};
		class CargoTurret_07 : CargoTurret_07{};
		class CargoTurret_08 : CargoTurret_08{};
		class CargoTurret_09 : CargoTurret_09{};
		class CargoTurret_10 : CargoTurret_10{};
	};
};

class 7r_lpdf_bmp1 : rhs_bmp1_vdv{
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_bmp1.jpg";
	crew = "7r_lpdf_crew";
	editorSubcategory = "EdSubcat_APCs";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_smaller_ca.paa"
	};
	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [6,7,8], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	textureList[] = {"lpdf",1};

	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_lpdf_crew_commander";};
		class Com_BMP1 : Com_BMP1{};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
		class CargoTurret_03 : CargoTurret_03{};
		class CargoTurret_04 : CargoTurret_04{};
		class CargoTurret_05 : CargoTurret_05{};
		class CargoTurret_06 : CargoTurret_06{};
		class CargoTurret_07 : CargoTurret_07{};
		class CargoTurret_08 : CargoTurret_08{};
		class CargoTurret_09 : CargoTurret_09{};
		class CargoTurret_10 : CargoTurret_10{};
	};

	class Attributes{};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa",
				"",
				"",
				"",
				"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
				"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_smaller_ca.paa"
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

class rhs_bmp2e_vdv : rhs_bmp1_vdv{
	class EventHandlers : EventHandlers{};
	class Turrets : Turrets{
		class MainTurret : MainTurret{};
		class Com_BMP1 : Com_BMP1{};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
		class CargoTurret_03 : CargoTurret_03{};
		class CargoTurret_04 : CargoTurret_04{};
		class CargoTurret_05 : CargoTurret_05{};
		class CargoTurret_06 : CargoTurret_06{};
		class CargoTurret_07 : CargoTurret_07{};
		class CargoTurret_08 : CargoTurret_08{};
		class CargoTurret_09 : CargoTurret_09{};
		class CargoTurret_10 : CargoTurret_10{};
	};
};

class 7r_lpdf_bmp2e : rhs_bmp2e_vdv{
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_bmp2e.jpg";
	crew = "7r_lpdf_crew";
	editorSubcategory = "EdSubcat_APCs";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_smaller_ca.paa"
	};
	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [6,7,8], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	textureList[] = {"lpdf",1};

	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_lpdf_crew_commander";};
		class Com_BMP1 : Com_BMP1{};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
		class CargoTurret_03 : CargoTurret_03{};
		class CargoTurret_04 : CargoTurret_04{};
		class CargoTurret_05 : CargoTurret_05{};
		class CargoTurret_06 : CargoTurret_06{};
		class CargoTurret_07 : CargoTurret_07{};
		class CargoTurret_08 : CargoTurret_08{};
		class CargoTurret_09 : CargoTurret_09{};
		class CargoTurret_10 : CargoTurret_10{};
	};

	class Attributes{};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa",
				"",
				"",
				"",
				"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
				"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_smaller_ca.paa"
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

class rhs_bmp2_vdv : rhs_bmp2e_vdv{
	class EventHandlers : EventHandlers{};
	class Turrets : Turrets{
		class MainTurret : MainTurret{};
		class Com_BMP1 : Com_BMP1{};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
		class CargoTurret_03 : CargoTurret_03{};
		class CargoTurret_04 : CargoTurret_04{};
		class CargoTurret_05 : CargoTurret_05{};
		class CargoTurret_06 : CargoTurret_06{};
		class CargoTurret_07 : CargoTurret_07{};
		class CargoTurret_08 : CargoTurret_08{};
		class CargoTurret_09 : CargoTurret_09{};
		class CargoTurret_10 : CargoTurret_10{};
	};
};

class 7r_lpdf_bmp2 : rhs_bmp2_vdv{
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_bmp2.jpg";
	crew = "7r_lpdf_crew";
	editorSubcategory = "EdSubcat_APCs";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
		"rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_smaller_ca.paa"
	};
	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [6,7,8], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	textureList[] = {"lpdf",1};

	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_lpdf_crew_commander";};
		class Com_BMP1 : Com_BMP1{};
		class CargoTurret_01 : CargoTurret_01{};
		class CargoTurret_02 : CargoTurret_02{};
		class CargoTurret_03 : CargoTurret_03{};
		class CargoTurret_04 : CargoTurret_04{};
		class CargoTurret_05 : CargoTurret_05{};
		class CargoTurret_06 : CargoTurret_06{};
		class CargoTurret_07 : CargoTurret_07{};
		class CargoTurret_08 : CargoTurret_08{};
		class CargoTurret_09 : CargoTurret_09{};
		class CargoTurret_10 : CargoTurret_10{};
	};

	class Attributes{};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
				"rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa",
				"",
				"",
				"",
				"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
				"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_smaller_ca.paa"
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