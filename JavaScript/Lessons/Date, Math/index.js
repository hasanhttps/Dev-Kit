// Display Current Date: Create a function that displays the current date in the format "YYYY-MM-DD". 
 
// let date = new Date();
// alert(date.getFullYear() + "-" + +(date.getMonth() + 1) + "-" + (31 - date.getDay()));

// // or

// alert(date.toISOString().split("T")[0]);

// Calculate Age: Write a function that takes a birthdate as input and calculates the age of a person in years.

// let year = +prompt("Please enter your birth year : ");
// let month = +prompt("Please enter your birth month : ");
// let day = +prompt("Please enter your birth day : ");

// function CalculateAge(day, month, year){
//     const birthDate = new Date(year, month, day);
//     const currentDate = new Date();
//     const ageYear = currentDate.getFullYear() - birthDate.getFullYear();
//     alert(ageYear);
// }
// CalculateAge(day, month, year);

// Get Day of the Week: Implement a function that takes a date as input and returns the day of the week (e.g., Monday, Tuesday) for that date.

// let year = +prompt("Please enter your birth year : ");
// let month = +prompt("Please enter your birth month : ");
// let day = +prompt("Please enter your birth day : ");

// var days = {
//     1: "Monday",
//     2: "Tuesday",
//     3: "Wednesday",
//     4: "Thursday",
//     5: "Friday",
//     6: "Saturday",
//     7: "Sunday"
// }
// function getDayOfWeek(year, month, day){
//     const date = new Date(year, month, day);
//     let d = date.getDay();
//     return days[d];
// }
// alert(getDayOfWeek(year, month - 1, day));

// Calculate Days Between Dates: Create a function that takes two dates as input and calculates the number of days between them. 

// let date1 = new Date(2023, 12, 30);
// let date2 = new Date(2024, 1, 1);

// function CalculateDayBetween(date1, date2) {
//     let ms = +date2 - +date1;
//     let days = ms / 86400000;
//     alert(days);
// }
// CalculateDayBetween(date1, date2);

// Format Date: Write a function that takes a date object and formats it as "Month Day, Year" (e.g., "January 1, 2024"). 

// let date = new Date(2024, 0, 1);
// const monthNames = [
//     "January", "February", "March",
//     "April", "May", "June",
//     "July", "August", "September",
//     "October", "November", "December"
// ];
// function FormatDate(date){
//     return `${monthNames[date.getMonth()]} ${date.getDay()}, ${date.getFullYear()}`;
// }
// alert(FormatDate(date));

// Math Object Tasks: 
// Generate Random Number: Create a function that generates a random number between a specified minimum and maximum value. 

// let min = 100;
// let max = 150;

// function GenerateRandomNumber(min, max) {
//     let random = (Math.random() * (max - min)) + min;
//     alert(random);
// }
// GenerateRandomNumber(min, max);

// Calculate Circle Area: Write a function that calculates the area of a circle given its radiu

// let rad = 2;
// function CalculateCircleArea(radius){
//     return Math.pow(radius, 2) * Math.PI;
// }
// alert(CalculateCircleArea(rad));

// Round Numbers: Implement a function that rounds a number to a specified number of decimal places. 

// let number = 9.439765;
// let decimal= 2;
// function RoundNum(number, decimal){
//     const factor = 10 ** decimal;
//     return Math.round(number * factor) / factor;
// }
// alert(RoundNum(number, decimal));

// Calculate Exponentiation: Write a function that calculates the result of raising a base number to an exponent.

// let base = 3;
// let exponent = 3;
// function CalculateExponentiation(base, exponent){
//     alert(base ** exponent);
// }
// CalculateExponentiation(base, exponent);

// Find Maximum and Minimum: Create a function that takes an array of numbers as input and returns the maximum and minimum values.

// let arrayNumbers = [
//     1, 2, -5, 3, 4,5
// ];
// function FindMaxMin(array){
//     return `Max: ${Math.max(...array)}, Min: ${Math.min(...array)}`;
// }
// alert(FindMaxMin(arrayNumbers));