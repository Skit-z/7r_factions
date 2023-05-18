class U_I_C_Soldier_Bandit_5_F;

class U_I_C_Soldier_Para_1_F;

class UniformItem;

class 7R_blp_jacket : U_I_C_Soldier_Bandit_5_F
{
	author = "Skitz";
	scope = 2;
	displayName = "BLP Uniform (Jacket)";
	//picture = "\7R Factions\7R_factions_blp\data\icons\_ca.paa"
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_blp\data\suitpack_soldier_blp_co.paa"};
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7R_blp_jacket_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
	};
};

class 7R_blp_tank_top : U_I_C_Soldier_Bandit_5_F
{
	author = "Skitz";
	scope = 2;
	displayName = "BLP Uniform (Tank Top)";
	//picture = "\7R Factions\7R_factions_blp\data\icons\_ca.paa"
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_blp\data\suitpack_soldier_blp_co.paa"};
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7R_blp_tank_top_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
	};
};

class 7R_blp_tee : U_I_C_Soldier_Bandit_5_F
{
	author = "Skitz";
	scope = 2;
	displayName = "BLP Uniform (Tee)";
	//picture = "\7R Factions\7R_factions_blp\data\icons\_ca.paa"
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7R Factions\7R_factions_blp\data\suitpack_soldier_blp_co.paa"};
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7R_blp_tee_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
	};
};