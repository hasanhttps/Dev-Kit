#pragma once


void showMovie(Movie* movie) {
	cout << "\t\t\tMovie Info\n";
	cout << "Id : " << movie->id << endl;
	cout << "Title : " << movie->title << endl;
	cout << "Genre : " << movie->genre << endl;
	cout << "Year : " << movie->year << endl;
	cout << "IMDB : " << movie->IMDB << endl;
	cout << "Description : " << movie->description << endl;
	cout << "Language : " << movie->language << endl;
}

void showCinema(Cinema* cinema) {
	cout << "\t\t\tCinema Info\n";
	cout << "Name : " << cinema->name << endl;
	cout << "Adress : " << cinema->adress << endl;
	cout << "Phone : " << cinema->phone << endl;
	cout << "Rating : " << cinema->rating << endl;
	if (cinema->movieC != 0) for (int i = 0; i < cinema->movieC; i++) showMovie(cinema->movies[i]);
}

Cinema* createCinema(str name, str adress, str phone, float rating, Movie** movies, int movieC) {
	Cinema* newCinema = new Cinema{name, adress, phone, rating, movies, movieC};
	return newCinema;
}

Movie** fakeMovies() {
	Movie** movies = new Movie * [3] {
		 new Movie{
			0,
			new char[] {"Avatar 2"},
			new char[] {"Fantastic"},
			2022,
			9.2f ,
			new char[] {"This movie is avatar 2. Under the water"},
			new char[] {"English"}
		},
		 new Movie{
			 1,
			 new char[] {"Avatar 1"},
			 new char[] {"Fantastic"},
			 2009,
			 9.8f ,
			 new char[] {"This movie is avatar. In the forest"},
			 new char[] {"English"}
		}
	};
	
	return movies;
}

Cinema* addMovie(Cinema*& cinema, Movie* movie) {
	Cinema* newCinema = new Cinema;
	newCinema->name = cinema->name;
	newCinema->adress = cinema->adress;
	newCinema->phone = cinema->phone;
	newCinema->rating = cinema->rating;
	newCinema->movies = new Movie * [] {};
	if (cinema->movieC != 0) {
		for (int i = 0; i < cinema->movieC; i++) newCinema->movies[i] = cinema->movies[i];
	}
	newCinema->movies[cinema->movieC] = movie;
	newCinema->movieC = cinema->movieC + 1;
	delete[] cinema;
	return newCinema;
}

void deleteMovies(Movie**& movies, int& size) {
	for (int i = 0; i < size; i++){
		delete movies[i]->description;
		delete movies[i]->genre;
		delete movies[i]->language;
		delete movies[i]->title;
	}delete[] movies;
}
