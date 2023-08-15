class I_E_Soldier_F;

class 7r_uniform_base : I_E_Soldier_F{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
	class EventHandlers;
};

class I_Soldier_F;

class 7r_uniform2_base : I_Soldier_F{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
	class EventHandlers;
};

class 7r_mc_uniform_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_mc_uniform";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_pants_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_mc_uniform_ssl_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_mc_uniform_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_pants_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_mc_aus_uniform_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_mc_aus_uniform";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_pants_aus_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_mc_aus_uniform_ssl_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_mc_aus_uniform_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_pants_aus_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpcu_uniform_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpcu_uniform";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_pants_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpcu_uniform_ssl_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpcu_uniform_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_pants_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpcu_aus_uniform_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpcu_aus_uniform";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_pants_aus_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpcu_aus_uniform_ssl_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpcu_aus_uniform_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_pants_aus_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpdu_uniform_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpdu_uniform";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_pants_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpdu_uniform_ssl_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpdu_uniform_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_pants_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpdu_aus_uniform_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpdu_aus_uniform";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_pants_aus_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpdu_aus_uniform_ssl_base : 7r_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpdu_aus_uniform_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_jacket_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_pants_aus_co.paa","\7r_factions\7r_factions_misc\data\aus\7r_misc_gry_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_mc_aus_uniform2_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_mc_aus_uniform2";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_pants_aus_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_mc_aus_uniform2_ssl_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_mc_aus_uniform2_ssl";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_pants_aus_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_mc_uniform2_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_mc_uniform2";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_pants_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_mc_uniform2_ssl_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_mc_uniform2_ssl";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_mc_pants_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpcu_aus_uniform2_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpcu_aus_uniform2";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_pants_aus_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpcu_aus_uniform2_ssl_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpcu_aus_uniform2_ssl";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_pants_aus_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpcu_uniform2_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpcu_uniform2";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_pants_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpcu_uniform2_ssl_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpcu_uniform2_ssl";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpcu_pants_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpdu_aus_uniform2_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpdu_aus_uniform2";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_pants_aus_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpdu_aus_uniform2_ssl_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpdu_aus_uniform2_ssl";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_pants_aus_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpdu_uniform2_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpdu_uniform2";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_pants_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_dpdu_uniform2_ssl_base : 7r_uniform2_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "misc Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
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
	uniformClass = "7r_dpdu_uniform2_ssl";

	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";

	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\aus\7r_misc_dpdu_pants_co.paa"};

	class HitPoints : HitPoints{};
};