#pragma once


void showMovie(Movie* movie);
void showCinema(Cinema* cinema);
void deleteMovie(Movie* movie);
Movie** fakeMovies();
Cinema* createCinema(str name, str adress, str phone, float rating, Movie** movies, int movieC);
Cinema* addMovie(Cinema*& cinema, Movie* movie);