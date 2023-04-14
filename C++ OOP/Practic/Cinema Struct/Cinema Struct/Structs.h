#pragma once


struct Movie {
	int id;
	str title = nullptr;
	str genre = nullptr;
	short int year;
	float IMDB;
	str description = nullptr;
	str language = nullptr;
};

struct Cinema {
	str name = nullptr;
	str adress = nullptr;
	str phone = nullptr;
	float rating;

	Movie** movies = nullptr;
	int movieC;
};