class cfgAmmo
{
	class RocketBase;
	class GrenadeHand;
	class GrenadeBase;
	class ShellBase;
	class LIB_Rocket_base;
	class B_9x18_Ball;
	

	// √–¿Õ¿“ŒÃ®“€
	class fow_g_piat_HE: GrenadeBase
	{
		hit = 150;
		explosive = 1;
		indirectHitRange = 5;
		indirectHit = 20;
	};	
	class fow_g_piat_HEAT: fow_g_piat_HE
	{
		hit = 500;
		indirectHit = 20;
		indirectHitRange = 2;		
		explosive = 0.95;	
	};
	class LIB_PzFaust_30m : LIB_Rocket_base {
		initSpeed = 30;
	};
	class LIB_PzFaust_60m : LIB_PzFaust_30m {
		initSpeed = 45;
	};
	class LIB_PzFaust_100m : LIB_PzFaust_30m {
		initSpeed = 60;
	};
	
	
	// √–¿Õ¿“€
	class G_40mm_HE : GrenadeBase {
		hit = 40;
		indirectHit = 5;
		indirectHitRange = 3.6;	
	};
	class fow_e_m24: GrenadeHand
	{
		hit = 55;
		indirectHit = 25;
		indirectHitRange = 3;
	};
	class fow_e_m24_at: GrenadeHand
	{
		hit = 400;
		indirectHit = 5;
		indirectHitRange = 0.5;
	};	
	class fow_e_m24_spli: GrenadeHand
	{
		hit = 55;
		indirectHit = 25;
		indirectHitRange = 3;
	};	
	class fow_e_m24K: fow_e_m24
	{
		hit = 55;
		indirectHit = 25;
		indirectHitRange = 3;
	};	
	class fow_e_m24K_at: fow_e_m24_at
	{
		hit = 400;
		indirectHit = 5;
		indirectHitRange = 0.5;
	};	
	class fow_e_m24K_spli: fow_e_m24_spli
	{
		hit = 55;
		indirectHit = 25;
		indirectHitRange = 3;
	};	
	class fow_e_mk2: GrenadeHand
	{
		hit = 55;
		indirectHit = 25;
		indirectHitRange = 3;
	};	
	class fow_e_no36mk1: GrenadeHand
	{
		hit = 55;
		indirectHit = 25;
		indirectHitRange = 3;
	};	
	class fow_e_no69: GrenadeHand
	{
		hit = 55;
		indirectHit = 25;
		indirectHitRange = 3;
	};	
	
	class fow_e_type97: GrenadeHand
	{
		hit = 55;
		indirectHit = 25;
		indirectHitRange = 3;
	};	
	class fow_e_type99: GrenadeHand
	{
		hit = 55;
		indirectHit = 25;
		indirectHitRange = 3;
	};	
	class fow_e_type99_at: GrenadeHand
	{
		hit = 400;
		indirectHit = 5;
		indirectHitRange = 0.5;
	};	
	class fow_e_no73: GrenadeHand
	{
		hit = 55;
		indirectHit = 25;
		indirectHitRange = 3;
	};	
	class fow_e_no82: GrenadeHand
	{
		hit = 55;
		indirectHit = 25;
		indirectHitRange = 3;
	};			
};