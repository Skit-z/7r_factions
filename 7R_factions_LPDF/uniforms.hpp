class rhs_uniform_flora;

class UniformItem;

class rhs_fieldcap_m88;
class rhs_fieldcap_m88_back;

class H_beret_02;

class rhs_pilotka;

class 7r_afghanka_lpdf_amoeba : rhs_uniform_flora
{
	author = "Skitz";
	scope = 2;
	displayName = "M88 [LPDF] (Amoeba)";
	picture = "\7r_factions\7R_factions_lpdf\data\icons\m88_lpdf_icon_1.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\suitpack_soldier_lpdf_co.paa"};
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7R_lpdf_base;
		containerClass = Supply60;
		mass = 50;
		type = 801;
		scope = 0;
	};
};

class 7r_afghanka_lpdf_rain : rhs_uniform_flora
{
	author = "Skitz";
	scope = 2;
	displayName = "M88 [LPDF] (Rain)";
	picture = "\7r_factions\7R_factions_lpdf\data\icons\m88_lpdf_icon_2.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\suitpack_soldier_lpdf_co.paa"};
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7R_lpdf_base_rain;
		containerClass = Supply60;
		mass = 50;
		type = 801;
		scope = 0;
	};
};

class 7r_afghanka_lpdf_mixed_1 : rhs_uniform_flora
{
	author = "Skitz";
	scope = 2;
	displayName = "M88 [LPDF] (Mixed 1)";
	picture = "\7r_factions\7R_factions_lpdf\data\icons\m88_lpdf_icon_3.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\suitpack_soldier_lpdf_co.paa"};
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7R_lpdf_base_mixed1;
		containerClass = Supply60;
		mass = 50;
		type = 801;
		scope = 0;
	};
};

class 7r_afghanka_lpdf_mixed_2 : rhs_uniform_flora
{
	author = "Skitz";
	scope = 2;
	displayName = "M88 [LPDF] (Mixed 2)";
	picture = "\7r_factions\7R_factions_lpdf\data\icons\m88_lpdf_icon_4.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\suitpack_soldier_lpdf_co.paa"};
		
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = 7R_lpdf_base_mixed2;
		containerClass = Supply60;
		mass = 50;
		type = 801;
		scope = 0;
	};
};

class 7r_fieldcap_lpdf : rhs_fieldcap_m88
{
	author = "Skitz";
	scope = 2;
	displayName = "Field Cap M88 [LPDF]";
	picture = "\7r_factions\7R_factions_lpdf\data\icons\fieldcap_front_1_ca.paa";

	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\afghanka_ldf_cap_co.paa"};
};

class 7r_fieldcap_lpdf_back : rhs_fieldcap_m88_back
{
	author = "Skitz";
	scope = 2;
	displayName = "Field Cap M88 [LPDF] (Back)";
	picture = "\7r_factions\7R_factions_lpdf\data\icons\fieldcap_back_1_ca.paa";

	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\afghanka_ldf_cap_co.paa"};
};

class 7r_fieldcap_lpdf_rain : rhs_fieldcap_m88
{
	author = "Skitz";
	scope = 2;
	displayName = "Field Cap M88 [LPDF] (Rain)";
	picture = "\7r_factions\7R_factions_lpdf\data\icons\fieldcap_front_2_ca.paa";

	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\afghanka_ldf_cap_2_co.paa"};
};

class 7r_fieldcap_lpdf_rain_back : rhs_fieldcap_m88_back
{
	author = "Skitz";
	scope = 2;
	displayName = "Field Cap M88 [LPDF] (Rain/Back)";
	picture = "\7r_factions\7R_factions_lpdf\data\icons\fieldcap_back_2_ca.paa";

	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\afghanka_ldf_cap_2_co.paa"};
};

class 7r_beret_lpdf : H_beret_02
{
	author = "Skitz";
	scope = 2;
	displayName = "Beret [LPDF]";
	picture = "\7r_factions\7R_factions_lpdf\data\icons\beret_icon_ca.paa";

	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\beret_lpr_co.paa"};
};

class 7r_pilotka_lpdf : rhs_pilotka
{
	author = "Skitz";
	scope = 2;
	displayName = "Pilotka (Rain)";
	picture = "\7r_factions\7R_factions_lpdf\data\icons\7r_lpdf_pilotka_ca.paa";

	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\7r_lpdf_pilotka_co.paa"};
};