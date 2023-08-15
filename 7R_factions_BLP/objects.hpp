class FlagCarrierCore;
class FlagCarrier : FlagCarrierCore {class EventHandlers;};

class 7r_blp_Flag : FlagCarrier{
	_general_macro = "7R_blp_Flag";
	author = "Skitz";
	displayName = "Flag (Brigadas de Liberación Populares)";
	scope = 2;
	scopeCurator = 2;
	class EventHandlers{
		init = "(_this select 0) setFlagTexture '\7r_factions\7R_factions_blp\data\blp_flag.paa'";
	};
	editorPreview = "\7r_factions\7R_factions_blp\data\previews\7R_blp_Flag.jpg";
};