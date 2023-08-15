class MRAP_02_BASE_F;

class rhs_tigr_base : MRAP_02_BASE_F{class EventHandlers;};

class 7r_csat_tigr : rhs_tigr_base{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	displayName = "Tigr (Unarmed)";
	editorPreview = "\7r_factions\7R_factions_csat\data\previews\7r_csat_tigr.jpg";
	crew = "7r_csat_rifleman_01";
	editorSubcategory = "EdSubcat_Cars";
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_csat\data\7r_csat_tigr_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa","rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];";
	};

	class Attributes{};

	class textureSources{
		class hex{
			displayName = "Hex";
			factions[] = {"7r_csat"};
			textures[] = {"\7r_factions\7r_factions_csat\data\7r_csat_tigr_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa","rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		};
	};

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};

class rhs_tigr_m_vdv;
class rhs_tigr_m_vdv_copy : rhs_tigr_m_vdv{scope = 0; class Turrets;};
class rhs_tigr_m_vdv_copy2 : rhs_tigr_m_vdv_copy{
	scope = 0;
	class EventHandlers;
	class Turrets : Turrets{
		class CargoTurret_01;
		class CargoTurret_02;
		class MainTurret;
	};
};

class 7r_csat_tigr_hatch : rhs_tigr_m_vdv_copy2{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	displayName = "Tigr (Hatch)";
	editorPreview = "\7r_factions\7R_factions_csat\data\previews\7r_csat_tigr_hatch.jpg";
	crew = "7r_csat_rifleman_01";
	editorSubcategory = "EdSubcat_Cars";
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_csat\data\7r_csat_tigr_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa","rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];";
	};

	class Turrets : Turrets{
		class CargoTurret_01 : CargoTurret_01{gunnerType = "7r_csat_machinegunner";};
	};

	class Attributes{};

	class textureSources{
		class hex{
			displayName = "Hex";
			factions[] = {"7r_csat"};
			textures[] = {"\7r_factions\7r_factions_csat\data\7r_csat_tigr_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa","rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		};
	};

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};

class rhs_tigr_sts_vdv;
class rhs_tigr_sts_vdv_copy : rhs_tigr_sts_vdv{scope = 0; class Turrets;};
class rhs_tigr_sts_vdv_copy2 : rhs_tigr_sts_vdv_copy{
	scope = 0;
	class EventHandlers;
	class Turrets : Turrets{
		class AGS_Turret;
		class MainTurret;
	};
};

class 7r_csat_tigr_sts : rhs_tigr_sts_vdv_copy2{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	displayName = "Tigr (Armed)";
	editorPreview = "\7r_factions\7R_factions_csat\data\previews\7r_csat_tigr_sts.jpg";
	crew = "7r_csat_rifleman_01";
	editorSubcategory = "EdSubcat_Cars";
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_csat\data\7r_csat_tigr_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa","rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};

	class EventHandlers : EventHandlers{
		init = "(_this select 0) setVariable ['RHS_Decal_Symbol_Enabled', false, true];";
	};

	class Turrets : Turrets{
		class AGS_Turret : AGS_Turret{gunnerType = "7r_csat_grenadier";};
		class MainTurret : MainTurret{gunnerType = "7r_csat_grenadier";LODTurnedIn = 1000;LODTurnedOut = 1000;};
	};

	class Attributes{};

	class textureSources{
		class hex{
			displayName = "Hex";
			factions[] = {"7r_csat"};
			textures[] = {"\7r_factions\7r_factions_csat\data\7r_csat_tigr_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa","rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		};
	};

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};

class O_MRAP_02_F;

class 7r_csat_karatel : O_MRAP_02_F{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	crew = "7r_csat_rifleman_01";

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};

class O_MRAP_02_hmg_F;

class 7r_csat_karatel_hmg : O_MRAP_02_hmg_F{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	crew = "7r_csat_rifleman_01";

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};

class O_MRAP_02_gmg_F;

class 7r_csat_karatel_gmg : O_MRAP_02_gmg_F{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	crew = "7r_csat_rifleman_01";

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};