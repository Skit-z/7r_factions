class I_C_Soldier_Para_1_F;
class I_C_Soldier_Para_2_F;
class I_C_Soldier_Para_3_F;
class I_C_Soldier_Para_4_F;

class 7R_tee_base : I_C_Soldier_Para_1_F{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
};

class 7R_jacket_base : I_C_Soldier_Para_2_F{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
};

class 7R_polo_base : I_C_Soldier_Para_3_F{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
};

class 7R_tank_top_base : I_C_Soldier_Para_4_F{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
};

class 7R_blp_jacket_base : 7R_jacket_base {
	author = "Skitz";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "BLP Base - Jacket";
	side = 2;
	faction = "7R_blp";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
	editorPreview = "\7R Factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_blp_jacket";

	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_2_F.p3d";

	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_blp\data\7R_jacket_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_2_co.paa"};

	class HitPoints : HitPoints{};
};

class 7R_blp_tee_base : 7R_tee_base {
	author = "Skitz";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "BLP Base - Tee";
	side = 2;
	faction = "7R_blp";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
	editorPreview = "\7R Factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_blp_tee";

	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F.p3d";

	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_blp\data\7R_blp_tee_co.paa","VSM_M81\Data\VSM_M81_1.paa"};

	class HitPoints : HitPoints{};
};

class 7R_blp_tank_top_base : 7R_tank_top_base {
	author = "Skitz";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "BLP Base - Tank Top";
	side = 2;
	faction = "7R_blp";
	GenericNames = "LatinoMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Latino","LanguageFRE_F"};
	editorPreview = "\7R Factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_blp_tank_top";

	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";

	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_blp\data\7R_blp_tank_top_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};

	class HitPoints : HitPoints{};
};