class I_E_Soldier_F;

class 7r_uniform_base : I_E_Soldier_F{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
	class EventHandlers;
};

class 7r_csat_uniform_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "csat Base";
	side = 0;
	faction = "7r_csat";
	GenericNames = "TakistaniMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguagePER_F","Head_TK"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7r_csat_uniform";

	CBA_facewearList[] = {
		"VSM_Peltor_coyote_glasses", 0.3,
		"VSM_Shemagh_goggles_tan", 0.05,
		"rhs_googles_clear", 0.05,
		"VSM_Goggles", 0.1,
		"VSM_Shemagh_Balaclava_tan_Peltor_Goggles", 0.1,
		"VSM_Facemask_black_Peltor", 0.2,
		"G_Aviator", 0.05,
		"VSM_Shemagh_Facemask_tan_Peltor", 0.1,
		"VSM_Shemagh_Facemask_tan_Peltor_Goggles", 0.05
	};

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_csat\data\7r_csat_jacket_co.paa","\7r_factions\7r_factions_csat\data\7r_csat_pants_co.paa","\7r_factions\7r_factions_csat\data\7r_csat_gloves_co.paa"};

	class HitPoints : HitPoints{};
	// If the parent class doesn't have the headgear randomization
	class EventHandlers : EventHandlers
	{
		// The function must be triggered to benefit from the randomization, its usage is documented in its header (see link above) 
		init = "if (local (_this select 0)) then {[unit] call CBA_fnc_randomizeFacewear;};";
	};
};

class 7r_csat_uniform_base_nr : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "csat Base";
	side = 0;
	faction = "7r_csat";
	GenericNames = "TakistaniMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguagePER_F","Head_TK"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7r_csat_uniform";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_csat\data\7r_csat_jacket_co.paa","\7r_factions\7r_factions_csat\data\7r_csat_pants_co.paa","\7r_factions\7r_factions_csat\data\7r_csat_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_csat_uniform_ssl_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "csat Base";
	side = 0;
	faction = "7r_csat";
	GenericNames = "TakistaniMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguagePER_F","Head_TK"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7r_csat_uniform_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_csat\data\7r_csat_jacket_co.paa","\7r_factions\7r_factions_csat\data\7r_csat_pants_co.paa","\7r_factions\7r_factions_csat\data\7r_csat_gloves_co.paa"};

	class HitPoints : HitPoints{};
};