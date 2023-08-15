class I_E_Soldier_F;

class 7r_uniform_base : I_E_Soldier_F{
	class EventHandlers;
	class HitPoints;
	scope = 0;
	icon = "iconMan";
};

class 7r_blp_uniform_base : 7r_uniform_base{
	author = "Skitz";
	scope= 1;
	scopeCurator= 1;
	scopeArsenal= 1;
	displayName = "BLP Base 3";
	side = 2;
	faction = "7R_blp";
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
	uniformClass = "7R_blp_uniform";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_blp\data\7r_blp_jacket_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_gloves_co.paa"};

	class HitPoints : HitPoints{};
	/* ... */
	/* [_headgearClass1, _probability1, _headgearClass2, _probability2, ...] */
	headgearList[] =
	{
		"H_Booniehat_mgrn", 0.6,
		"H_Booniehat_oli", 0.3,
		"H_Cap_blk",0.6,
		"VSM_BackwardsHat_Peltor_black",0.6,
		"7r_blp_m1_helmet",1.2,
		"rhsgref_helmet_M1_liner",0.6,
		"H_Hat_Safari_sand_F",0.6,
		"H_Hat_Safari_olive_F",0.6,
		"H_Beret_blk",1,
		"H_Bandanna_khk",0.6,
		"rhssaf_bandana_smb",0.6
	};
	// If the parent class doesn't have the headgear randomization
	class EventHandlers : EventHandlers
	{
		// The function must be triggered to benefit from the randomization, its usage is documented in its header (see link above) 
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};

class 7r_blp_uniform_base_nr : 7r_uniform_base{
	author = "Skitz";
	scope= 1;
	scopeCurator= 1;
	scopeArsenal= 1;
	displayName = "BLP Base 3";
	side = 2;
	faction = "7R_blp";
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
	uniformClass = "7R_blp_uniform";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_blp\data\7r_blp_jacket_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_blp_uniform_ssl_base : 7r_uniform_base{
	author = "Skitz";
	scope= 1;
	scopeCurator= 1;
	scopeArsenal= 1;
	displayName = "BLP Base 3 - Short Sleeve";
	side = 2;
	faction = "7R_blp";
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
	uniformClass = "7R_blp_uniform_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_blp\data\7r_blp_jacket_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_blp_uniform_2_base : 7r_uniform_base{
	author = "Skitz";
	scope= 1;
	scopeCurator= 1;
	scopeArsenal= 1;
	displayName = "BLP Base 4";
	side = 2;
	faction = "7R_blp";
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
	uniformClass = "7R_blp_uniform_2";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_blp\data\7r_blp_jacket_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_2_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_blp_uniform_2_ssl_base : 7r_uniform_base{
	author = "Skitz";
	scope= 1;
	scopeCurator= 1;
	scopeArsenal= 1;
	displayName = "BLP Base 4 - Short Sleeve";
	side = 2;
	faction = "7R_blp";
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
	uniformClass = "7R_blp_uniform_2_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_blp\data\7r_blp_jacket_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_2_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_gloves_co.paa"};

	class HitPoints : HitPoints{};
}; 

class 7r_blp_uniform_3_base : 7r_uniform_base{
	author = "Skitz";
	scope= 1;
	scopeCurator= 1;
	scopeArsenal= 1;
	displayName = "BLP Base 5";
	side = 2;
	faction = "7R_blp";
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
	uniformClass = "7R_blp_uniform_3";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_blp\data\7r_blp_jacket_2_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_3_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_blp_uniform_3_ssl_base : 7r_uniform_base{
	author = "Skitz";
	scope= 1;
	scopeCurator= 1;
	scopeArsenal= 1;
	displayName = "BLP Base 5 - Short Sleeve";
	side = 2;
	faction = "7R_blp";
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
	uniformClass = "7R_blp_uniform_3_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_blp\data\7r_blp_jacket_2_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_3_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_gloves_co.paa"};

	class HitPoints : HitPoints{};
}; 

class 7r_blp_uniform_4_base : 7r_uniform_base{
	author = "Skitz";
	scope= 1;
	scopeCurator= 1;
	scopeArsenal= 1;
	displayName = "BLP Base 6";
	side = 2;
	faction = "7R_blp";
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
	uniformClass = "7R_blp_uniform_4";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_blp\data\7r_blp_jacket_2_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_4_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_blp_uniform_4_ssl_base : 7r_uniform_base{
	author = "Skitz";
	scope= 1;
	scopeCurator= 1;
	scopeArsenal= 1;
	displayName = "BLP Base 6 - Short Sleeve";
	side = 2;
	faction = "7R_blp";
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
	uniformClass = "7R_blp_uniform_4_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_blp\data\7r_blp_jacket_2_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_4_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_blp_uniform_tank_top_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "BLP Base - Tank Top";
	side = 2;
	faction = "7r_blp";
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
	uniformClass = "7r_blp_uniform_tank_top";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_blp_uniform_tee_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "BLP Base - Tee";
	side = 2;
	faction = "7r_blp";
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
	uniformClass = "7r_blp_uniform_tee";

	model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";

	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_blp_uniform_tank_top_2_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "BLP Base - Tank Top";
	side = 2;
	faction = "7r_blp";
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
	uniformClass = "7r_blp_uniform_tank_top_2";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_4_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_blp_uniform_tee_2_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "BLP Base - Tee";
	side = 2;
	faction = "7r_blp";
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
	uniformClass = "7r_blp_uniform_tee_2";

	model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";

	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa","\7r_factions\7r_factions_blp\data\7r_blp_pants_4_co.paa"};

	class HitPoints : HitPoints{};
};