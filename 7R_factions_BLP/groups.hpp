class EAST
{
	name = "Independent"; // Name of Faction Side 
	side = 2; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think 
	class 7R_blp //Faction Class name 
	{
		name = "[7R] Brigadas de Liberación Populares"; //Faction Name 
		class Infantry
		{
			name = "Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
			class 7R_blp_RifleSquad
			{
				name = "Squad (Rifle)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_squad_leader"; //Class name of desired solider
					rank = "SERGEANT"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_rifleman_light";
					rank = "CORPORAL";
					position[] = {3,-2,0};
				};
				class Unit2
				{
					side = 0;
					vehicle = "7R_blp_medic";
					rank = "PRIVATE";
					position[] = {5,-2,0};
				};
				class Unit3
				{
					side = 0;
					vehicle = "7R_blp_rifleman_01";
					rank = "PRIVATE";
					position[] = {7,-2,0};
				};
				class Unit4
				{
					side = 0;
					vehicle = "7R_blp_rifleman_lat";
					rank = "PRIVATE";
					position[] = {9,-2,0};
				};
				class Unit5
				{
					side = 0;
					vehicle = "7R_blp_marksman";
					rank = "PRIVATE";
					position[] = {11,-2,0};
				};
				class Unit6
				{
					side = 0;
					vehicle = "7R_blp_mg_assist";
					rank = "PRIVATE";
					position[] = {13,-2,0};
				};
				class Unit7
				{
					side = 0;
					vehicle = "7r_blp_machinegunner";
					rank = "PRIVATE";
					position[] = {15,-2,0};
				};
			};
			class 7R_blp_WeaponSquad
			{
				name = "Squad (Weapons)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_squad_leader"; //Class name of desired solider
					rank = "SERGEANT"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_grenadier";
					rank = "CORPORAL";
					position[] = {3,-2,0};
				};
				class Unit2
				{
					side = 0;
					vehicle = "7R_blp_medic";
					rank = "PRIVATE";
					position[] = {5,-2,0};
				};
				class Unit3
				{
					side = 0;
					vehicle = "7R_blp_anti_tank";
					rank = "PRIVATE";
					position[] = {7,-2,0};
				};
				class Unit4
				{
					side = 0;
					vehicle = "7R_blp_anti_tank_assist";
					rank = "PRIVATE";
					position[] = {9,-2,0};
				};
				class Unit5
				{
					side = 0;
					vehicle = "7r_blp_machinegunner";
					rank = "PRIVATE";
					position[] = {11,-2,0};
				};
				class Unit6
				{
					side = 0;
					vehicle = "7R_blp_mg_assist";
					rank = "PRIVATE";
					position[] = {13,-2,0};
				};
				class Unit7
				{
					side = 0;
					vehicle = "7r_blp_machinegunner";
					rank = "PRIVATE";
					position[] = {15,-2,0};
				};
			};
			class 7R_blp_ATSquad
			{
				name = "Squad (AT)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_squad_leader"; //Class name of desired solider
					rank = "SERGEANT"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_rifleman_03";
					rank = "CORPORAL";
					position[] = {3,-2,0};
				};
				class Unit2
				{
					side = 0;
					vehicle = "7R_blp_medic";
					rank = "PRIVATE";
					position[] = {5,-2,0};
				};
				class Unit3
				{
					side = 0;
					vehicle = "7R_blp_anti_tank";
					rank = "PRIVATE";
					position[] = {7,-2,0};
				};
				class Unit4
				{
					side = 0;
					vehicle = "7R_blp_anti_tank_assist";
					rank = "PRIVATE";
					position[] = {9,-2,0};
				};
				class Unit5
				{
					side = 0;
					vehicle = "7R_blp_marksman";
					rank = "PRIVATE";
					position[] = {11,-2,0};
				};
				class Unit6
				{
					side = 0;
					vehicle = "7R_blp_anti_tank";
					rank = "PRIVATE";
					position[] = {13,-2,0};
				};
				class Unit7
				{
					side = 0;
					vehicle = "7R_blp_anti_tank_assist";
					rank = "PRIVATE";
					position[] = {15,-2,0};
				};
			};
			class 7R_blp_RifleTeam
			{
				name = "Team (Rifle)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_rifleman_02"; //Class name of desired solider
					rank = "CORPORAL"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_rifleman_03";
					rank = "PRIVATE";
					position[] = {3,-2,0};
				};
				class Unit2
				{
					side = 0;
					vehicle = "7R_blp_rifleman_02";
					rank = "PRIVATE";
					position[] = {5,-2,0};
				};
				class Unit3
				{
					side = 0;
					vehicle = "7R_blp_rifleman_lat";
					rank = "PRIVATE";
					position[] = {7,-2,0};
				};
			};
			class 7R_blp_MGTeam
			{
				name = "Team (MG)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_rifleman_02"; //Class name of desired solider
					rank = "CORPORAL"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_mg_assist";
					rank = "PRIVATE";
					position[] = {3,-2,0};
				};
				class Unit2
				{
					side = 0;
					vehicle = "7r_blp_machinegunner";
					rank = "PRIVATE";
					position[] = {5,-2,0};
				};
				class Unit3
				{
					side = 0;
					vehicle = "7r_blp_machinegunner";
					rank = "PRIVATE";
					position[] = {7,-2,0};
				};
			};
			class 7R_blp_ATTeam
			{
				name = "Team (AT)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_rifleman_01"; //Class name of desired solider
					rank = "CORPORAL"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_rifleman_lat";
					rank = "PRIVATE";
					position[] = {3,-2,0};
				};
				class Unit2
				{
					side = 0;
					vehicle = "7R_blp_anti_tank_assist";
					rank = "PRIVATE";
					position[] = {5,-2,0};
				};
				class Unit3
				{
					side = 0;
					vehicle = "7R_blp_anti_tank";
					rank = "PRIVATE";
					position[] = {7,-2,0};
				};
			};
			class 7R_blp_EngineerTeam
			{
				name = "Team (Engineer)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_rifleman_02"; //Class name of desired solider
					rank = "CORPORAL"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_engineer";
					rank = "PRIVATE";
					position[] = {3,-2,0};
				};
				class Unit2
				{
					side = 0;
					vehicle = "7R_blp_demolitions";
					rank = "PRIVATE";
					position[] = {5,-2,0};
				};
				class Unit3
				{
					side = 0;
					vehicle = "7R_blp_rifleman_lat";
					rank = "PRIVATE";
					position[] = {7,-2,0};
				};
			};
			class 7R_blp_HQTeam
			{
				name = "Team (HQ)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_officer"; //Class name of desired solider
					rank = "LIEUTENANT"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_squad_leader";
					rank = "SERGEANT";
					position[] = {3,-2,0};
				};
				class Unit2
				{
					side = 0;
					vehicle = "7R_blp_rto";
					rank = "CORPORAL";
					position[] = {5,-2,0};
				};
				class Unit3
				{
					side = 0;
					vehicle = "7R_blp_rifleman_light";
					rank = "PRIVATE";
					position[] = {7,-2,0};
				};
			};
			class 7R_blp_RiflePair_01
			{
				name = "Pair (Rifle-1)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_rifleman_01"; //Class name of desired solider
					rank = "PRIVATE"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_rifleman_02";
					rank = "PRIVATE";
					position[] = {3,-2,0};
				};
			};
			class 7R_blp_RiflePair_02
			{
				name = "Pair (Rifle-2)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_rifleman_01"; //Class name of desired solider
					rank = "PRIVATE"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_rifleman_03";
					rank = "PRIVATE";
					position[] = {3,-2,0};
				};
			};
			class 7R_blp_RiflePair_03
			{
				name = "Pair (Light)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_rifleman_light"; //Class name of desired solider
					rank = "PRIVATE"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_rifleman_light";
					rank = "PRIVATE";
					position[] = {3,-2,0};
				};
			};
			class 7R_blp_MGPair
			{
				name = "Pair (MG)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_mg_assist"; //Class name of desired solider
					rank = "PRIVATE"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7r_blp_machinegunner";
					rank = "PRIVATE";
					position[] = {3,-2,0};
				};
			};
			class 7R_blp_ATPair
			{
				name = "Pair (AT)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_anti_tank_assist"; //Class name of desired solider
					rank = "PRIVATE"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_anti_tank";
					rank = "PRIVATE";
					position[] = {3,-2,0};
				};
			};
			class 7R_blp_EngineerPair
			{
				name = "Pair (Engineer)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_engineer"; //Class name of desired solider
					rank = "PRIVATE"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_demolitions";
					rank = "PRIVATE";
					position[] = {3,-2,0};
				};
			};
			class 7R_blp_HQPair
			{
				name = "Pair (Command)"; //Name of Group
				icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
				faction = "7R_blp"; //Faction 
				side = 0; //Side 
				class Unit0
				{
					side = 0;
					vehicle = "7R_blp_Field_Officer"; //Class name of desired solider
					rank = "LIEUTENANT"; // Rank
					position[] = {0,0,0}; //Position in the formation 
				};
				class Unit1
				{
					side = 0;
					vehicle = "7R_blp_rto";
					rank = "CORPORAL";
					position[] = {3,-2,0};
				};
			};
		};
		// class SupportInf
		// {
		// 	name = "Support Infantry";
		// 	class 7R_blp_WeaponsPair_AT3
		// 	{
		// 		name = "Weapons Pair (AT-3)"; //Name of Group
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_Weapons_Carrier_Base"; //Class name of desired solider
		// 			rank = "PRIVATE"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_Weapons_Carrier_AT3";
		// 			rank = "PRIVATE";
		// 			position[] = {3,-2,0};
		// 		};
		// 	};
		// 	class 7R_blp_WeaponsPair_DShKM
		// 	{
		// 		name = "Weapons Pair (DShKM)"; //Name of Group
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_Weapons_Carrier_Base"; //Class name of desired solider
		// 			rank = "PRIVATE"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_Weapons_Carrier_DShKM";
		// 			rank = "PRIVATE";
		// 			position[] = {3,-2,0};
		// 		};
		// 	};
		// 	class 7R_blp_WeaponsPair_M20
		// 	{
		// 		name = "Weapons Pair (Type 56 75mm Recoilless Rifle)"; //Name of Group
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_Weapons_Carrier_Base"; //Class name of desired solider
		// 			rank = "PRIVATE"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_Weapons_Carrier_M20";
		// 			rank = "PRIVATE";
		// 			position[] = {3,-2,0};
		// 		};
		// 	};
		// 	class 7R_blp_Sniper_Team
		// 	{
		// 		name = "Sniper Team"; //Name of Group
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_Sniper"; //Class name of desired solider
		// 			rank = "LIEUTENANT"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_Spotter";
		// 			rank = "SERGEANT";
		// 			position[] = {3,-2,0};
		// 		};
		// 	};
		// };
		// class Mechanized 
		// {
		// 	name = "Mechanized";
		// 	class 7R_blp_BTR80_Inf_Squad
		// 	{
		// 		name = "Mechanized Infantry Squad (BTR-80)";
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_squad_leader"; //Class name of desired solider
		// 			rank = "SERGEANT"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_light";
		// 			rank = "CORPORAL";
		// 			position[] = {3,-2,0};
		// 		};
		// 		class Unit2
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_medic";
		// 			rank = "PRIVATE";
		// 			position[] = {5,-2,0};
		// 		};
		// 		class Unit3
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_01";
		// 			rank = "PRIVATE";
		// 			position[] = {7,-2,0};
		// 		};
		// 		class Unit4
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_lat";
		// 			rank = "PRIVATE";
		// 			position[] = {9,-2,0};
		// 		};
		// 		class Unit5
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_marksman";
		// 			rank = "PRIVATE";
		// 			position[] = {11,-2,0};
		// 		};
		// 		class Unit6
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_mg_assist";
		// 			rank = "PRIVATE";
		// 			position[] = {13,-2,0};
		// 		};
		// 		class Unit7
		// 		{
		// 			side = 0;
		// 			vehicle = "7r_blp_machinegunner";
		// 			rank = "PRIVATE";
		// 			position[] = {15,-2,0};
		// 		};
		// 		class Unit8
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_BTR_80";
		// 			rank = "PRIVATE";
		// 			position[] = {-5,-8,0};
		// 		};
		// 	};
		// 	class 7R_blp_BTR70_Inf_Squad
		// 	{
		// 		name = "Mechanized Infantry Squad (BTR-70)";
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_squad_leader"; //Class name of desired solider
		// 			rank = "SERGEANT"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_light";
		// 			rank = "CORPORAL";
		// 			position[] = {3,-2,0};
		// 		};
		// 		class Unit2
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_medic";
		// 			rank = "PRIVATE";
		// 			position[] = {5,-2,0};
		// 		};
		// 		class Unit3
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_02";
		// 			rank = "PRIVATE";
		// 			position[] = {7,-2,0};
		// 		};
		// 		class Unit4
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_lat";
		// 			rank = "PRIVATE";
		// 			position[] = {9,-2,0};
		// 		};
		// 		class Unit5
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_marksman";
		// 			rank = "PRIVATE";
		// 			position[] = {11,-2,0};
		// 		};
		// 		class Unit6
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_mg_assist";
		// 			rank = "PRIVATE";
		// 			position[] = {13,-2,0};
		// 		};
		// 		class Unit7
		// 		{
		// 			side = 0;
		// 			vehicle = "7r_blp_machinegunner";
		// 			rank = "PRIVATE";
		// 			position[] = {15,-2,0};
		// 		};
		// 		class Unit8
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_BTR_70";
		// 			rank = "PRIVATE";
		// 			position[] = {-5,-8,0};
		// 		};
		// 	};
		// 	class 7R_blp_BTR40_Inf_Squad
		// 	{
		// 		name = "Mechanized Infantry Squad (2x BTR-40)";
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_squad_leader"; //Class name of desired solider
		// 			rank = "SERGEANT"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_light";
		// 			rank = "CORPORAL";
		// 			position[] = {3,-2,0};
		// 		};
		// 		class Unit2
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_medic";
		// 			rank = "PRIVATE";
		// 			position[] = {5,-2,0};
		// 		};
		// 		class Unit3
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_02";
		// 			rank = "PRIVATE";
		// 			position[] = {7,-2,0};
		// 		};
		// 		class Unit4
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_lat";
		// 			rank = "PRIVATE";
		// 			position[] = {9,-2,0};
		// 		};
		// 		class Unit5
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_marksman";
		// 			rank = "PRIVATE";
		// 			position[] = {11,-2,0};
		// 		};
		// 		class Unit6
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_mg_assist";
		// 			rank = "PRIVATE";
		// 			position[] = {13,-2,0};
		// 		};
		// 		class Unit7
		// 		{
		// 			side = 0;
		// 			vehicle = "7r_blp_machinegunner";
		// 			rank = "PRIVATE";
		// 			position[] = {15,-2,0};
		// 		};
		// 		class Unit8
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_BTR_40_DHSKM_01";
		// 			rank = "PRIVATE";
		// 			position[] = {-5,-8,0};
		// 		};
		// 		class Unit9
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_BTR_40_DHSKM_01";
		// 			rank = "PRIVATE";
		// 			position[] = {5,-8,0};
		// 		};
		// 	};			
		// 	class 7R_blp_BMD1_Inf_Squad
		// 	{
		// 		name = "Mechanized Infantry Squad (BMD-1)";
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_squad_leader"; //Class name of desired solider
		// 			rank = "SERGEANT"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_light";
		// 			rank = "CORPORAL";
		// 			position[] = {3,-2,0};
		// 		};
		// 		class Unit2
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_medic";
		// 			rank = "PRIVATE";
		// 			position[] = {5,-2,0};
		// 		};
		// 		class Unit3
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_02";
		// 			rank = "PRIVATE";
		// 			position[] = {7,-2,0};
		// 		};
		// 		class Unit4
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_lat";
		// 			rank = "PRIVATE";
		// 			position[] = {9,-2,0};
		// 		};
		// 		class Unit5
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_marksman";
		// 			rank = "PRIVATE";
		// 			position[] = {11,-2,0};
		// 		};
		// 		class Unit6
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_mg_assist";
		// 			rank = "PRIVATE";
		// 			position[] = {13,-2,0};
		// 		};
		// 		class Unit7
		// 		{
		// 			side = 0;
		// 			vehicle = "7r_blp_machinegunner";
		// 			rank = "PRIVATE";
		// 			position[] = {15,-2,0};
		// 		};
		// 		class Unit8
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_BMD_1";
		// 			rank = "PRIVATE";
		// 			position[] = {-5,-8,0};
		// 		};
		// 	};
		// 	class 7R_blp_BMP1_Inf_Squad
		// 	{
		// 		name = "Mechanized Infantry Squad (BMP-1)";
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_squad_leader"; //Class name of desired solider
		// 			rank = "SERGEANT"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_light";
		// 			rank = "CORPORAL";
		// 			position[] = {3,-2,0};
		// 		};
		// 		class Unit2
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_medic";
		// 			rank = "PRIVATE";
		// 			position[] = {5,-2,0};
		// 		};
		// 		class Unit3
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_01";
		// 			rank = "PRIVATE";
		// 			position[] = {7,-2,0};
		// 		};
		// 		class Unit4
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_rifleman_lat";
		// 			rank = "PRIVATE";
		// 			position[] = {9,-2,0};
		// 		};
		// 		class Unit5
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_marksman";
		// 			rank = "PRIVATE";
		// 			position[] = {11,-2,0};
		// 		};
		// 		class Unit6
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_mg_assist";
		// 			rank = "PRIVATE";
		// 			position[] = {13,-2,0};
		// 		};
		// 		class Unit7
		// 		{
		// 			side = 0;
		// 			vehicle = "7r_blp_machinegunner";
		// 			rank = "PRIVATE";
		// 			position[] = {15,-2,0};
		// 		};
		// 		class Unit8
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_BMP_1";
		// 			rank = "PRIVATE";
		// 			position[] = {-5,-8,0};
		// 		};
		// 	};
		// 	class 7R_blp_BMD1_Squad
		// 	{
		// 		name = "Mechanized Squad (BMD-1)";
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_BMD_1"; //Class name of desired solider
		// 			rank = "SERGEANT"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_BMD_1";
		// 			rank = "CORPORAL";
		// 			position[] = {10,-10,0};
		// 		};
		// 	};
		// 	class 7R_blp_BMP1_Squad
		// 	{
		// 		name = "Mechanized Squad (BMP-1)";
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_BMP_1"; //Class name of desired solider
		// 			rank = "SERGEANT"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_BMP_1";
		// 			rank = "CORPORAL";
		// 			position[] = {10,-10,0};
		// 		};
		// 	};
		// };
		// class Armored
		// {
		// 	name = "Armored";
		// 	class 7R_blp_PT76_Squad
		// 	{
		// 		name = "Tank Squad (PT-76)";
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_PT_76"; //Class name of desired solider
		// 			rank = "SERGEANT"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_PT_76";
		// 			rank = "CORPORAL";
		// 			position[] = {10,-10,0};
		// 		};
		// 	};
		// 	class 7R_blp_T34_Squad
		// 	{
		// 		name = "Tank Squad (T-34)";
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_T34_85M"; //Class name of desired solider
		// 			rank = "SERGEANT"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_T34_85M";
		// 			rank = "CORPORAL";
		// 			position[] = {10,-10,0};
		// 		};
		// 	};
		// 	class 7R_blp_T55_Squad
		// 	{
		// 		name = "Tank Squad (T-55)";
		// 		icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa"; 
		// 		faction = "7R_blp"; //Faction 
		// 		side = 0; //Side 
		// 		class Unit0
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_T55"; //Class name of desired solider
		// 			rank = "SERGEANT"; // Rank
		// 			position[] = {0,0,0}; //Position in the formation 
		// 		};
		// 		class Unit1
		// 		{
		// 			side = 0;
		// 			vehicle = "7R_blp_T55";
		// 			rank = "CORPORAL";
		// 			position[] = {10,-10,0};
		// 		};
		// 	};
		// };
	};
};	