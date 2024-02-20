// JSON Obyektinin yaradılması: Kitab məlumatını təmsil edən JSON obyekti yaradın. Obyektdə kitabın adı, müəllifin adı, nəşr ili və açar sözlər siyahısı kimi xüsusiyyətlər olmalıdır.

// const task1 = [  {    "title": "War and Peace",    "author": "Leo Tolstoy",    "year": 1869,    "keywords": ["war", "history", "novel"]  },  {    "title": "Crime and Punishment",    "author": "Fyodor Dostoevsky",    "year": 1866,    "keywords": ["crime", "drama", "novel"]  },  {    "title": "1984",    "author": "George Orwell",    "year": 1949,    "keywords": ["dystopia", "fiction", "politics"]  }];

// JSON məlumatlarının süzülməsi: İstifadəçi məlumatlarını təmsil edən bir sıra JSON obyektləri var. Bu massivi filtrləyən və yalnız 18 yaşdan yuxarı istifadəçiləri qaytaran funksiya yazın.

// const task2 = [  { "name": "John", "age": 25 },  { "name": "Alice", "age": 30 },  { "name": "Bob", "age": 18 },  { "name": "Emily", "age": 22 }];

// const jsonStr  = JSON.stringify(task2, (key, value) =>{
//     if (key == "age" && value > 18){
//         console.log(value);
//     }
//     return value;
// }, ' ');

// console.log("JsonStr", jsonStr);

// JSON Datasının yenilənməsi: Məhsul məlumatını təmsil edən JSON obyektiniz var. Bu obyekti götürən və qiymətini verilmiş qiymətə yeniləyən funksiya yazın.
 
// const task3 = {  "name": "Football",  "price": 20.99,  "color": "white",  "material": "synthetic leather"};

// const jsonStr =  JSON.stringify(task3, (key, value) => {
//     if (key == "price"){
//         value = 15;
//         return value;
//     }
//     return value;
// }, ' ');

// console.log("JsonStr", jsonStr);

// JSON məlumatlarının çeşidlənməsi: Sizdə meyvə məlumatlarını əks etdirən bir sıra JSON obyektləri var. Bu massivi meyvə adına görə əlifba sırası ilə çeşidləyən funksiya yazın.

// let task4 = [  { "name": "John", "age": 25 },  { "name": "Alice", "age": 30 },  { "name": "Bob", "age": 18 },  { "name": "Emily", "age": 22 }];

// task4 = task4.sort((a, b) => {
//     const nameA = a.name.toUpperCase();
//     const nameB = b.name.toUpperCase();

//     if (nameA < nameB) {
//         return -1;
//     }
//     if (nameA > nameB) {
//         return 1;
//     }
//     return 0;
// });

// console.log("JsonStr", task4);

// JSON Datasının tapılması: Kitabxanadakı kitablar haqqında məlumatı təmsil edən JSON obyektləri massiviniz var. Kitabın başlığını parametr kimi qəbul edən və kitabxanadadırsa, kitab haqqında məlumatı qaytaran funksiya yazın.

// let task5 =  `[ { "title": "Harry Potter and the Philosopher's Stone",    "author": "J.K. Rowling",    "year": 1997  },  {    "title": "The Hobbit",    "author": "J.R.R. Tolkien",    "year": 1937  },  {    "title": "To Kill a Mockingbird",    "author": "Harper Lee",    "year": 1960  } ]`;

// function findbook(title){
//     let newobj = JSON.parse(task5);

//     for (const key of newobj) {
//         if (key["title"] == title){
//             console.log(key);
//         }
//     }
// }

// findbook("Harry Potter and the Philosopher's Stone");

// JSON Data Conversion: Sizdə tələbə məlumatını əks etdirən bir sıra JSON obyektləri var. Bu massivi yalnız tələbələrin adlarını və yaşlarını ehtiva edən yeni massiləyə çevirən funksiya yazın.
 
// let task6 = `[  { "name": "Alex", "age": 21 },  { "name": "Elena", "age": 22 },  { "name": "Michael", "age": 20 },  { "name": "Sophia", "age": 23 }]`;

// function parse(){
//     let newobj = JSON.parse(task6);
//     console.log(newobj);
// }

// parse();

// JSON Datasının silinməsi: Onlayn mağaza sifariş məlumatını təmsil edən bir sıra JSON obyektləri var. Bu massivdən verilmiş ID ilə sifarişi silən funksiya yazın.

// let task7 =  `[  { "id": 1, "product": "Football", "price": 20.99 },  { "id": 2, "product": "Board Game", "price": 15.49 },  { "id": 3, "product": "Headphones", "price": 59.99 }]`;
 
// function deleteOrder(id){
//     let array = JSON.parse(task7);

//     array = array.filter((obj) =>  obj.id != id);
//     console.log(array);
// }
// deleteOrder("2");

// 2) [  { "name": "John", "age": 25 },  { "name": "Alice", "age": 30 },  { "name": "Bob", "age": 18 },  { "name": "Emily", "age": 22 }]
 
// 3) {  "name": "Football",  "price": 20.99,  "color": "white",  "material": "synthetic leather"}
 
// 4) [  { "name": "Apple", "color": "red" },  { "name": "Banana", "color": "yellow" },  { "name": "Orange", "color": "orange" }]
 
// 5) [  {    "title": "Harry Potter and the Philosopher's Stone",    "author": "J.K. Rowling",    "year": 1997  },  {    "title": "The Hobbit",    "author": "J.R.R. Tolkien",    "year": 1937  },  {    "title": "To Kill a Mockingbird",    "author": "Harper Lee",    "year": 1960  }]
 
// 6) [  { "name": "Alex", "age": 21 },  { "name": "Elena", "age": 22 },  { "name": "Michael", "age": 20 },  { "name": "Sophia", "age": 23 }]
 
// 7) [  { "id": 1, "product": "Football", "price": 20.99 },  { "id": 2, "product": "Board Game", "price": 15.49 },  { "id": 3, "product": "Headphones", "price": 59.99 }]