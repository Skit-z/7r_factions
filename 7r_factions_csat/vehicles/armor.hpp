class O_APC_Wheeled_02_rcws_v2_F;
class O_APC_Wheeled_02_rcws_v2_F_copy : O_APC_Wheeled_02_rcws_v2_F{scope = 0;class Turrets;};
class O_APC_Wheeled_02_rcws_v2_F_copy2 : O_APC_Wheeled_02_rcws_v2_F_copy{
	scope = 0;
	class Turrets : Turrets{
		class MainTurret;
		class CommanderOptics;
	};
};

class 7r_csat_otokar_arma : O_APC_Wheeled_02_rcws_v2_F_copy2{
	faction = "7r_csat";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	side = 0;
	crew = "7r_csat_crew";

	class Turrets : Turrets{
		class MainTurret : MainTurret{gunnerType = "7r_csat_crew_commander";};
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