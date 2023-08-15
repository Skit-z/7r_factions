class I_E_Soldier_F;

class 7r_uniform_base : I_E_Soldier_F{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
	class EventHandlers;
};

class 7r_adf_uniform_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base";
	side = 1;
	faction = "7r_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
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
	uniformClass = "7r_adf_uniform";

	CBA_facewearList[] = {
		"VSM_Shemagh_OD",3,
		"VSM_Shemagh_Goggles_OD",1,
		"VSM_Goggles",1,
		"rhs_googles_clear",4,
		"",2
	};

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_jacket_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_pants_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
	// If the parent class doesn't have the headgear randomization
	class EventHandlers : EventHandlers
	{
		// The function must be triggered to benefit from the randomization, its usage is documented in its header (see link above) 
		init = "if (local (_this select 0)) then {[unit] call CBA_fnc_randomizeFacewear;};";
	};
};

class 7r_adf_uniform_base_sf : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base";
	side = 1;
	faction = "7r_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
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
	uniformClass = "7r_adf_uniform";

	CBA_facewearList[] = {
		"rhs_scarf",5,
		"VSM_Shemagh_Goggles_OD",2,
		"G_Balaclava_blk",2,
		"G_Balaclava_oli",2,
		"G_Bandanna_blk",2,
		"G_Bandanna_oli",2,
		"G_Bandanna_aviator",.1,
		"rhs_googles_clear",1
	};

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_jacket_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_pants_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
	// If the parent class doesn't have the headgear randomization
	class EventHandlers : EventHandlers
	{
		// The function must be triggered to benefit from the randomization, its usage is documented in its header (see link above) 
		init = "if (local (_this select 0)) then {[unit] call CBA_fnc_randomizeFacewear;};";
	};
};

class 7r_adf_uniform_base_nr : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base";
	side = 1;
	faction = "7r_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
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
	uniformClass = "7r_adf_uniform";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_jacket_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_pants_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_adf_uniform_ds_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base - Desaturated";
	side = 1;
	faction = "7r_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
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
	uniformClass = "7r_adf_uniform_ds";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_jacket_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_pants_ds_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_adf_uniform_pl_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base - Patchless";
	side = 1;
	faction = "7r_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
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
	uniformClass = "7r_adf_uniform_pl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_jacket_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_pants_pl_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_adf_uniform_ssl_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base";
	side = 1;
	faction = "7r_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
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
	uniformClass = "7r_adf_uniform_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_jacket_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_pants_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_adf_uniform_ds_ssl_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base - Desaturated";
	side = 1;
	faction = "7r_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
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
	uniformClass = "7r_adf_uniform_ds_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_jacket_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_pants_ds_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_adf_uniform_pl_ssl_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base - Patchless";
	side = 1;
	faction = "7r_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
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
	uniformClass = "7r_adf_uniform_pl_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_jacket_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_pants_pl_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_adf_uniform_tank_top_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base - Tank Top";
	side = 1;
	faction = "7r_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
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
	uniformClass = "7r_adf_uniform_tank_top";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_tanktop_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_pants_pl_co.paa","\7r_factions\7r_factions_adf\data\7r_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};