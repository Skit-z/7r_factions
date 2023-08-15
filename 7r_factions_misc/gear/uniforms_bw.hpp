class rhs_uniform_vkpo;

class 7r_fleck_fieldblouse : rhs_uniform_vkpo
{
	author = "Skitz";
	scope = 2;
	displayName = "Field Blouse [Flecktarn]";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\bw\fleck_x512_co.paa"};
	//picture = "\7r_factions\7r_factions_misc\data\aus\icons\7r_amcu_uniform_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_fleck_fieldblouse_base;
		containerClass = Supply60;
		mass = 50;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};

class 7r_fleck_fieldblouse_gloves : rhs_uniform_vkpo
{
	author = "Skitz";
	scope = 2;
	displayName = "Field Blouse [Flecktarn/Gloves]";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\bw\fleck_x512_co.paa"};
	//picture = "\7r_factions\7r_factions_misc\data\aus\icons\7r_amcu_uniform_ca.paa";
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7r_fleck_fieldblouse_gloves_base;
		containerClass = Supply60;
		mass = 50;
		type = 801;
		scope = 0;
		modelSides[] = {0,1,2,3};
	};
};