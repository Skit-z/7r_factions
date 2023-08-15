class U_I_E_Uniform_01_F;

class UniformItem;

class 7r_adf_uniform : U_I_E_Uniform_01_F
{
	author = "Skitz";
	scope = 2;
	displayName = "Combat Uniform [ADF]";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\adf_camo_512.paa"};
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_uniform_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_adf_uniform_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};

class 7r_adf_uniform_pl : U_I_E_Uniform_01_F
{
	author = "Skitz";
	scope = 2;
	displayName = "Combat Uniform [ADF/Patchless]";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\adf_camo_512.paa"};
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_uniform_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_adf_uniform_pl_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};

class 7r_adf_uniform_ds : U_I_E_Uniform_01_F
{
	author = "Skitz";
	scope = 2;
	displayName = "Combat Uniform [ADF/Desaturated]";
	//picture = "\7r_factions\7r_factions_adf\data\icons\_ca.paa"
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\adf_camo_512.paa"};
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_uniform_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_adf_uniform_ds_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};

class 7r_adf_uniform_ssl : U_I_E_Uniform_01_F
{
	author = "Skitz";
	scope = 2;
	displayName = "Combat Uniform (Rolled-up) [ADF]";
	//picture = "\7r_factions\7r_factions_adf\data\icons\_ca.paa"
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\adf_camo_512.paa"};
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_uniform_ssl_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_adf_uniform_ssl_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};

class 7r_adf_uniform_pl_ssl : U_I_E_Uniform_01_F
{
	author = "Skitz";
	scope = 2;
	displayName = "Combat Uniform (Rolled-up) [ADF/Patchless]";
	//picture = "\7r_factions\7r_factions_adf\data\icons\_ca.paa"
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\adf_camo_512.paa"};
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_uniform_ssl_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_adf_uniform_pl_ssl_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};

class 7r_adf_uniform_ds_ssl : U_I_E_Uniform_01_F
{
	author = "Skitz";
	scope = 2;
	displayName = "Combat Uniform (Rolled-up) [ADF/Desaturated]";
	//picture = "\7r_factions\7r_factions_adf\data\icons\_ca.paa"
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\adf_camo_512.paa"};
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_uniform_ssl_ca.paa";
	
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_adf_uniform_ds_ssl_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};

class 7r_adf_uniform_tank_top : U_I_E_Uniform_01_F
{
	author = "Skitz";
	scope = 2;
	displayName = "Combat Uniform (Tank-Top) [ADF]";
	//picture = "\7r_factions\7r_factions_adf\data\icons\_ca.paa"
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\adf_camo_512.paa"};
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_uniform_tank_top_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_adf_uniform_tank_top_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};