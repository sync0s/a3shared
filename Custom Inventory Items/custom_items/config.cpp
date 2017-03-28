class CfgPatches {
	class custom_items {
		units[] = {"custom_items"};
		weapons[] = {};
		requiredVersion = 1.0;
	};
};

class CfgWeapons {
	class ItemWatch;
	/*
		Manufacturing Items
	*/
	class wrench: ItemWatch {
		displayName = "Wrench";
		count = 1;
		picture = "\custom_items\img\wrench.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};
	class titanium_firepin: ItemWatch {
		displayName = "Titanium Fire Pin";
		count = 1;
		picture = "\custom_items\img\titanium_firepin.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 10;
		};
	};
	class iron_ore: ItemWatch {
		displayName = "Iron Ore";
		count = 1;
		picture = "\custom_items\img\iron_ore.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 4;
		};
	};
	class galenite: ItemWatch {
		displayName = "Galenite";
		count = 1;
		picture = "\custom_items\img\galenite.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 4;
		};
	};
	class sulfur: ItemWatch {
		displayName = "Sulfur";
		count = 1;
		picture = "\custom_items\img\sulfur.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 4;
		};
	};
	class saltpeter: ItemWatch {
		displayName = "Saltpeter";
		count = 1;
		picture = "\custom_items\img\saltpeter.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 4;
		};
	};
	class sand: ItemWatch {
		displayName = "Sand";
		count = 1;
		picture = "\custom_items\img\sand.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 4;
		};
	};
	class steel_ingot: ItemWatch {
		displayName = "Steel Ingot";
		count = 1;
		picture = "\custom_items\img\steel_ingot.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 7;
		};
	};
	class lead_ingot: ItemWatch {
		displayName = "Lead Ingot";
		count = 1;
		picture = "\custom_items\img\lead_ingot.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 8;
		};
	};
	class plastic_polymer: ItemWatch {
		displayName = "Plastic";
		count = 1;
		picture = "\custom_items\img\plastic_polymer.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 3;
		};
	};
	class ethelyne_glycol: ItemWatch {
		displayName = "Ethelyne Glycol";
		count = 1;
		picture = "\custom_items\img\ethelyne_glycol.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};
	class crude_oil: ItemWatch {
		displayName = "Crude Oil";
		count = 1;
		picture = "\custom_items\img\crude_oil.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 5;
		};
	};
	class gun_powder: ItemWatch {
		displayName = "Gun Powder";
		count = 1;
		picture = "\custom_items\img\gun_powder.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 2;
		};
	};
	
	/*
		Restraint Items
	*/
	class ziptie: ItemWatch {
		displayName = "Ziptie";
		count = 1;
		picture = "\custom_items\img\ziptie.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 4;
		};
	};
	class handcuffs: ItemWatch {
		displayName = "Handcuff";
		count = 1;
		picture = "\custom_items\img\handcuffs.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 5;
		};
	};
	class c4_explosive: ItemWatch {
		displayName = "C4 Explosive";
		count = 1;
		picture = "\custom_items\img\c4.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 5;
		};
	};
	
	/*
		Farming Items
	*/
	
	// Fertilizers
	class bloom_fertilizer: ItemWatch {
		displayName = "Bloom Fertilizer";
		count = 1;
		picture = "\custom_items\img\bloom_fertilizer.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 2;
		};
	};
	class root_fertilizer: ItemWatch {
		displayName = "Root Fertilizer";
		count = 1;
		picture = "\custom_items\img\root_fertilizer.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 2;
		};
	};
	class supergro_fertilizer: ItemWatch {
		displayName = "Super Grow Fertilizer";
		count = 1;
		picture = "\custom_items\img\supergro_fertilizer.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 2;
		};
	};

	// Corn
	class corn_seed: ItemWatch {
		displayName = "Corn Seed";
		count = 1;
		picture = "\custom_items\img\corn_seed.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};
	class corn_bushel: ItemWatch {
		displayname = "Corn Bushel";
		count = 1;
		picture = "\custom_items\img\corn_bushel.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 5;
		};
	};

	// Wheat
	class wheat_seed: ItemWatch {
		displayname = "Wheat Seed";
		count = 1;
		picture = "\custom_items\img\wheat_seed.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};
	class wheat_bushel: ItemWatch {
		displayname = "Wheat Bushel";
		count = 1;
		picture = "\custom_items\img\wheat_bushel.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	// Marijuana
	class marijuana_seed: ItemWatch {
		displayname = "Marijuana Seed";
		count = 1;
		picture = "\custom_items\img\marijuana_seed.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};
	class marijuana_ounce: ItemWatch {
		displayname = "Marijuana Ounce";
		count = 1;
		picture = "\custom_items\img\marijuana_bud.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 10;
		};
	};


	/*
		Medical Items
	*/

	// Bandages
	class basic_bandage: ItemWatch {
		displayname = "Basic Bandage";
		count = 1;
		picture = "\custom_items\img\basic_bandage.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class elastic_bandage: ItemWatch {
		displayname = "Elastic Bandage";
		count = 1;
		picture = "\custom_items\img\elastic_bandage.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	// Blood Bag
	class blood_bag: ItemWatch {
		displayname = "Blood Bag";
		count = 1;
		picture = "\custom_items\img\blood_bag.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	// Defibrillator
	class defib: ItemWatch {
		displayname = "Defibrillator";
		count = 1;
		picture = "\custom_items\img\defib.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 2;
		};
	};

	// Drugs
	class epinephrine: ItemWatch {
		displayname = "Epinephrine";
		count = 1;
		picture = "\custom_items\img\epinephrine.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class ibuprofen: ItemWatch {
		displayname = "Ibuprofen";
		count = 1;
		picture = "\custom_items\img\ibuprofen.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class morphine: ItemWatch {
		displayname = "Morphine";
		count = 1;
		picture = "\custom_items\img\morphine.paa";
		descriptionShort = "a";
		class ItemInfo {
			mass = 1;
		};
	};

	// Medical Items
	class surgical_tube: ItemWatch {
		displayname = "Surgical Tubing";
		count = 1;
		picture = "\custom_items\img\surgical_tubing.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class syringe: ItemWatch {
		displayname = "Syringe";
		count = 1;
		picture = "\custom_items\img\syringe.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};


	/*
		Food and Drink Items
	*/

	class beer: ItemWatch {
		displayname = "Beer";
		count = 1;
		picture = "\custom_items\img\beer.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 3;
		};
	};
	
	class whiskey: ItemWatch {
		displayname = "Whiskey";
		count = 1;
		picture = "\custom_items\img\whiskey.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 3;
		};
	};
	
	class water: ItemWatch {
		displayname = "Water Bottle";
		count = 1;
		picture = "\custom_items\img\waterbottle.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class canned_food: ItemWatch {
		displayname = "Canned Food";
		count = 1;
		picture = "\custom_items\img\canned_food.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 3;
		};
	};

	class chips: ItemWatch {
		displayname = "Chips";
		count = 1;
		picture = "\custom_items\img\chips.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class coffee: ItemWatch {
		displayname = "Coffee";
		count = 1;
		picture = "\custom_items\img\coffee.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class donut: ItemWatch {
		displayname = "Donut";
		count = 1;
		picture = "\custom_items\img\donut.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class juice_box: ItemWatch {
		displayname = "Juice Box";
		count = 1;
		picture = "\custom_items\img\juice_box.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class pbj: ItemWatch {
		displayname = "Peanut Butter Sandwich";
		count = 1;
		picture = "\custom_items\img\pbj.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class raw_meat: ItemWatch {
		displayname = "Raw Meat";
		count = 1;
		picture = "\custom_items\img\raw_meat.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};
	
	class cooked_meat {
		displayname = "Cooked Meat";
		count = 1;
		picture = "\custom_items\img\ccoked_meat.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class candy_bar: ItemWatch {
		displayname = "Candy Bar";
		count = 1;
		picture = "\custom_items\img\candy_bar.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};
	
	class twinkies: ItemWatch {
		displayname = "Twinkies";
		count = 1;
		picture = "\custom_items\img\twinkies.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};

	class soda: ItemWatch {
		displayname = "Soda Pop";
		count = 1;
		picture = "\custom_items\img\soda.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};
	
	class rope: ItemWatch {
		displayname = "Rope";
		count = 1;
		picture = "\custom_items\img\rope.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};
	class rock: ItemWatch {
		displayname = "Rock";
		count = 1;
		picture = "\custom_items\img\rock.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 2;
		};
	};
	class moonshine: ItemWatch {
		displayname = "Moonshine";
		count = 1;
		picture = "\custom_items\img\moonshine.paa";
		descriptionShort = "";
		class ItemInfo {
			mass = 1;
		};
	};
};

class CfgVehicles {
	class NATO_Box_Base;
	class custom_items_box: NATO_Box_Base {
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "ind3pth Items Box";
		model = "\A3\weapons_f\AmmoBoxes\AmmoBox_F";
		icon = "iconCrateWpns";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			class _xx_wrench {
				name = "wrench";
				count = 5;
			};
			class _xx_titanium_firepin {
				name = "titanium_firepin";
				count = 5;
			};
			class _xx_iron_ore {
				name = "iron_ore";
				count = 5;
			};
			class _xx_steel_ingot {
				name = "steel_ingot";
				count = 5;
			};
			class _xx_lead_ingot {
				name = "lead_ingot";
				count = 5;
			};
			class _xx_plastic_polymer {
				name = "plastic_polymer";
				count = 5;
			};
			class _xx_ethelyne_glycol {
				name = "ethelyne_glycol";
				count = 5;
			};
			class _xx_crude_oil {
				name = "crude_oil";
				count = 5;
			};
			class _xx_gun_powder {
				name = "gun_powder";
				count = 5;
			};
			class _xx_ziptie {
				name = "ziptie";
				count = 5;
			};
			class _xx_handcuffs {
				name = "handcuffs";
				count = 5;
			};
			class _xx_bloom_fertilizer {
				name = "bloom_fertilizer";
				count = 5;
			};
			class _xx_root_fertilizer {
				name = "root_fertilizer";
				count = 5;
			};
			class _xx_supergro_fertilizer {
				name = "supergro_fertilizer";
				count = 5;
			};
			class _xx_corn_seed {
				name = "corn_seed";
				count = 5;
			};
			class _xx_corn_bushel {
				name = "corn_bushel";
				count = 5;
			};
			class _xx_wheat_seed {
				name = "wheat_seed";
				count = 5;
			};
			class _xx_wheat_bushel {
				name = "corn_bushel";
				count = 5;
			};
			class _xx_marijuana_seed {
				name = "marijuana_seed";
				count = 5;
			};
			class _xx_marijuana_ounce {
				name = "marijuana_ounce";
				count = 5;
			};
			class _xx_basic_bandage {
				name = "basic_bandage";
				count = 5;
			};
			class _xx_elastic_bandage {
				name = "elastic_bandage";
				count = 5;
			};
			class _xx_blood_bag {
				name = "blood_bag";
				count = 5;
			};
			class _xx_defib {
				name = "defib";
				count = 5;
			};
			class _xx_epinephrine {
				name = "epinephrine";
				count = 5;
			};
			class _xx_ibuprofen {
				name = "ibuprofen";
				count = 5;
			};
			class _xx_morphine {
				name = "morphine";
				count = 5;
			};
			class _xx_surgical_tube {
				name = "surgical_tube";
				count = 5;
			};
			class _xx_syringe {
				name = "syringe";
				count = 5;
			};
			class _xx_beer {
				name = "beer";
				count = 5;
			};
			class _xx_whiskey {
				name = "whiskey";
				count = 5;
			};
			class _xx_water {
				name = "water";
				count = 5;
			};
			class _xx_canned_food {
				name = "canned_food";
				count = 5;
			};
			class _xx_chips {
				name = "chips";
				count = 5;
			};
			class _xx_coffee {
				name = "coffee";
				count = 5;
			};
			class _xx_donut {
				name = "donut";
				count = 5;
			};
			class _xx_juice_box {
				name = "juice_box";
				count = 5;
			};
			class _xx_pbj {
				name = "pbj";
				count = 5;
			};
			class _xx_raw_meat {
				name = "raw_meat";
				count = 5;
			};
			class _xx_cooked_meat {
				name = "cooked_meat";
				count = 5;
			};
			class _xx_candy_bar {
				name = "candy_bar";
				count = 5;
			};
			class _xx_twinkies {
				name = "twinkies";
				count = 5;
			};
			class _xx_soda {
				name = "soda";
				count = 5;
			};
			class _xx_rope {
				name = "rope";
				count = 5;
			};
			class _xx_rock {
				name = "rock";
				count = 5;
			};
			class _xx_moonshine {
				name = "moonshine";
				count = 5;
			};
			class _xx_c4_explosive {
				name = "c4_explosive";
				count = 5;
			};
		};
	};
};