class U_I_E_Uniform_01_F;

class UniformItem;

class 7r_csat_uniform : U_I_E_Uniform_01_F
{
	author = "Skitz";
	scope = 2;
	displayName = "Combat Uniform [CSAT]";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	//hiddenSelections[] = {"camo"};
	//hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_csat\data\csat_camo_512.paa"};
	picture = "\7r_factions\7r_factions_csat\data\icons\7r_csat_uniform_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_csat_uniform_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};

class 7r_csat_uniform_ssl : U_I_E_Uniform_01_F
{
	author = "Skitz";
	scope = 2;
	displayName = "Combat Uniform (Rolled-up) [CSAT]";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	//hiddenSelections[] = {"camo"};
	//hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_csat\data\csat_camo_512.paa"};
	picture = "\7r_factions\7r_factions_csat\data\icons\7r_csat_uniform_ssl_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_csat_uniform_ssl_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};

class 7r_csat_uniform_pacific : U_I_E_Uniform_01_F
{
	author = "Skitz";
	scope = 2;
	displayName = "Combat Uniform [CSAT - Pacific]";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	//hiddenSelections[] = {"camo"};
	//hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_csat\data\csat_camo_512.paa"};
	picture = "\7r_factions\7r_factions_csat\data\icons\7r_csat_uniform_grn_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_csat_uniform_pacific_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};

class 7r_csat_uniform_pacific_ssl : U_I_E_Uniform_01_F
{
	author = "Skitz";
	scope = 2;
	displayName = "Combat Uniform (Rolled-up) [CSAT - Pacific]";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	//hiddenSelections[] = {"camo"};
	//hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_csat\data\csat_camo_512.paa"};
	picture = "\7r_factions\7r_factions_csat\data\icons\7r_csat_uniform_ssl_grn_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_csat_uniform_pacific_ssl_base;
		containerClass = Supply40;
		mass = 40;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};