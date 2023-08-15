class O_Truck_02_Ammo_F;

class 7r_csat_kamaz_ammo : O_Truck_02_Ammo_F{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorSubcategory = "EdSubcat_Trucks";
	crew = "7r_csat_rifleman_01";

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};

class O_Truck_02_fuel_F;

class 7r_csat_kamaz_fuel : O_Truck_02_fuel_F{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorSubcategory = "EdSubcat_Trucks";
	crew = "7r_csat_rifleman_01";

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};

class O_Truck_02_medical_F;

class 7r_csat_kamaz_medical : O_Truck_02_medical_F{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorSubcategory = "EdSubcat_Trucks";
	crew = "7r_csat_medic";

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};

class O_Truck_02_box_F;

class 7r_csat_kamaz_box : O_Truck_02_box_F{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorSubcategory = "EdSubcat_Trucks";
	crew = "7r_csat_engineer";

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};

class O_Truck_02_transport_F;

class 7r_csat_kamaz_transport : O_Truck_02_transport_F{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorSubcategory = "EdSubcat_Trucks";
	crew = "7r_csat_rifleman_01";

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};

class O_Truck_02_covered_F;

class 7r_csat_kamaz_covered : O_Truck_02_covered_F{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	editorSubcategory = "EdSubcat_Trucks";
	crew = "7r_csat_rifleman_01";

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};

class I_Truck_02_MRL_F;

class I_Truck_02_MRL_F_copy : I_Truck_02_MRL_F{
	scope = 0;
	class EventHandlers;
};

class 7r_csat_kamaz_mlrs : I_Truck_02_MRL_F_copy{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	crew = "7r_csat_rifleman_01";
	hiddenSelectionsTextures[] = {};
	textureList[] = {"Opfor",1};
	class EventHandlers: EventHandlers
	{
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};

	class TransportItems{
		class _xx_FirstAidKit{count = 5;name = "FirstAidKit";};
		class _xx_Medikit{count = 1;name = "Medikit";};
		class _xx_Toolkit{count = 1;name = "Toolkit";};
	};

	class TransportMagazines{
		class _xx_30Rnd_65x39_caseless_green{count = 20;magazine = "30Rnd_65x39_caseless_green";};
	};

	class TransportWeapons{};
};