class FlagCarrierCore;
class FlagCarrier : FlagCarrierCore {class EventHandlers;};

class 7R_lpdf_Flag : FlagCarrier{
	_general_macro = "7R_lpdf_Flag";
	author = "Skitz";
	displayName = "Flag (Livonian People's Republic)";
	scope = 2;
	scopeCurator = 2;
	class EventHandlers{
		init = "(_this select 0) setFlagTexture '\7R Factions\7R_factions_lpdf\data\lpr_flag.paa'";
	};
	editorPreview = "\7R Factions\7R_factions_lpdf\data\previews\7R_lpdf_Flag.jpg";
};