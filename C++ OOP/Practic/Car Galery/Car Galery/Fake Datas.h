#pragma once


Car** createFakeData() {
	Car** newCars = new Car * [] {
		new Car{
			CarId++,
			new char[] {"Toyota"},
			new char[] {"Prius"},
			new char[] {"Blue"},
			2012,
			false,
			18000.36,
			FuelType::Hybrid
		},

			new Car{
				CarId++,
				new char[] {"Toyota"},
				new char[] {"Rav 4"},
				new char[] {"Black"},
				2020,
				false,
				50000.36,
				FuelType::Diesel
		},

			new Car{
				CarId++,
				new char[] {"Tesla"},
				new char[] {"Model 3"},
				new char[] {"White"},
				2022,
				false,
				70000.36,
				FuelType::Electric
		}
	};
	return newCars;
}