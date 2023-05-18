class I_E_Soldier_F;

class 7R_uniform_base : I_E_Soldier_F{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
};

class 7R_adf_uniform_base : 7R_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base";
	side = 1;
	faction = "7R_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
	editorPreview = "\7R Factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_adf_uniform";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_adf\data\7R_adf_jacket_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_pants_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7R_adf_uniform_ds_base : 7R_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base - Desaturated";
	side = 1;
	faction = "7R_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
	editorPreview = "\7R Factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_adf_uniform_ds";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_adf\data\7R_adf_jacket_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_pants_ds_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7R_adf_uniform_pl_base : 7R_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base - Patchless";
	side = 1;
	faction = "7R_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
	editorPreview = "\7R Factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_adf_uniform_pl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_adf\data\7R_adf_jacket_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_pants_pl_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7R_adf_uniform_ssl_base : 7R_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base";
	side = 1;
	faction = "7R_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
	editorPreview = "\7R Factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_adf_uniform_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_adf\data\7R_adf_jacket_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_pants_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7R_adf_uniform_ds_ssl_base : 7R_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base - Desaturated";
	side = 1;
	faction = "7R_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
	editorPreview = "\7R Factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_adf_uniform_ds_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_adf\data\7R_adf_jacket_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_pants_ds_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7R_adf_uniform_pl_ssl_base : 7R_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base - Patchless";
	side = 1;
	faction = "7R_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
	editorPreview = "\7R Factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_adf_uniform_pl_ssl";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_adf\data\7R_adf_jacket_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_pants_pl_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7R_adf_uniform_tank_top_base : 7R_uniform_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ADF Base - Tank Top";
	side = 1;
	faction = "7R_adf";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
	editorPreview = "\7R Factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_adf_uniform_tank_top";

	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_tanktop_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_pants_pl_co.paa","\7R Factions\7R_factions_adf\data\7R_adf_gloves_co.paa"};

	class HitPoints : HitPoints{};
};