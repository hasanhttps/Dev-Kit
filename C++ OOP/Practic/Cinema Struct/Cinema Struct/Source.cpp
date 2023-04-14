#include <iostream>
using namespace std;
typedef char* str;

#include "Structs.h";
#include "Prototypes.h";
#include "Functions.h";


int main() {

	Cinema* cinema = new Cinema{ new char[] {"Cinema+"}, new char[] {"Baku"}, new char[] {"055-573-12-12"}, 4.8, fakeMovies(), 2 };
	Movie** movies = fakeMovies();
	showMovie(movies[0]);
	showCinema(cinema);
	Cinema* newCinema = createCinema(new char[] {"Cinema"}, new char[] {"Sumqayit"}, new char[] {"050-775-75-75"}, 4.9, movies, 2);
	showCinema(newCinema);
	Movie* movie = new Movie{
		1,
		new char[] {"Spider-Man"},
		new char[] {"Fantastic"},
		2009,
		9.8f ,
		new char[] {"This movie is avatar. In the forest"},
		new char[] {"English"}
	};
	newCinema = addMovie(newCinema, movie);
	showCinema(newCinema);
	deleteMovie(movie);
	showMovie(movie);
}
