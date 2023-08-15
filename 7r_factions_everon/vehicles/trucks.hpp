class rhs_gaz66_vmf{class EventHandlers;};

class 7r_lpdf_gaz66 : rhs_gaz66_vmf{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_gaz66.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
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

class rhs_gaz66_flat_vmf{class EventHandlers;};

class 7r_lpdf_gaz66_flat : rhs_gaz66_flat_vmf{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_gaz66_flat.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
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

class rhs_gaz66_ammo_vmf{class EventHandlers;};

class 7r_lpdf_gaz66_ammo : rhs_gaz66_ammo_vmf{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_gaz66_ammo.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
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

class rhs_gaz66o_vmf{class EventHandlers;};

class 7r_lpdf_gaz66o : rhs_gaz66o_vmf{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_gaz66o.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
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

class rhs_gaz66o_flat_vmf{class EventHandlers;};

class 7r_lpdf_gaz66o_flat : rhs_gaz66o_flat_vmf{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_gaz66o_flat.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
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

class rhs_gaz66_r142_vmf{class EventHandlers;};

class 7r_lpdf_gaz66_r142 : rhs_gaz66_r142_vmf{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_gaz66_r142.jpg";
	crew = "7r_lpdf_rto";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
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

class rhs_gaz66_zu23_base : rhs_gaz66_vmf{class Turrets;};
class rhs_gaz66_zu23_vmf : rhs_gaz66_zu23_base{
	class EventHandlers;
	class Turrets : Turrets{
		class CargoTurret_01;
		class CargoTurret_02;
		class MainTurret;
	};
};

class 7r_lpdf_gaz66_zu23 : rhs_gaz66_zu23_vmf{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_gaz66_zu23.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_AAs";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_lpdf_rifleman_02";};
		class CargoTurret_01 : CargoTurret_01{gunnerType = "7r_lpdf_team_leader";};
		class CargoTurret_02 : CargoTurret_02{};
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
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

class rhs_gaz66_ap2_vmf{class EventHandlers;};

class 7r_lpdf_gaz66_ap2 : rhs_gaz66_ap2_vmf{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_gaz66_ap2.jpg";
	crew = "7r_lpdf_medic";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
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
};;

class rhs_gaz66_repair_vmf{class EventHandlers;};

class 7r_lpdf_gaz66_repair : rhs_gaz66_repair_vmf{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_gaz66_repair.jpg";
	crew = "7r_lpdf_engineer";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'LicensePlate']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
				"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
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

class rhs_Ural_BaseTurret;

class rhs_bm21_msv_01 : rhs_Ural_BaseTurret{class EventHandlers;};

class 7r_lpdf_bm21 : rhs_bm21_msv_01{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_bm21.jpg";
	crew = "7r_lpdf_rto";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_rus_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_rus_co.paa",
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
				"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_rus_co.paa",
				"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_rus_co.paa",
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

class rhs_zil131_base{class EventHandlers;};

class 7r_lpdf_zil131 : rhs_zil131_base{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_zil131.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa",
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

class rhs_zil131_open_base{class EventHandlers;};

class 7r_lpdf_zil131_open : rhs_zil131_open_base{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_zil131_open.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa",
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

class rhs_zil131_flatbed_base{class EventHandlers;};

class 7r_lpdf_zil131_flatbed : rhs_zil131_flatbed_base{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_zil131_flatbed.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa",
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

class rhs_zil131_flatbed_cover_base{class EventHandlers;};

class 7r_lpdf_zil131_flatbed_cover : rhs_zil131_flatbed_cover_base{
	
	faction = "7r_lpdf";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 2;
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7r_lpdf_zil131_flatbed_cover.jpg";
	crew = "7r_lpdf_rifleman_01";
	editorSubcategory = "EdSubcat_Trucks";
	hiddenSelectionsTextures[] = {
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",
		"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa",
		"",
		"",
		"",
		"",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa",
		"\7r_factions\7R_factions_lpdf\data\7r_lpdf_insignia_ca.paa"
	};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];[(_this select 0),[['Number', [5,6,7,8], 'CDF']]] spawn rhs_fnc_decalsInit;";
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class Attributes{};
	textureList[] = {"lpdf",1};

	class textureSources{
		class lpdf{
			displayName = "LPDF";
			factions[] = {"7r_lpdf"};
			textures[] = {
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",
				"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa",
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