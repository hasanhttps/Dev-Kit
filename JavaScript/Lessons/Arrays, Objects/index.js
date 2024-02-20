let arr = new Array();

arr.push('element');
console.log(arr);

// Task 2

let numbers = [1,2,3,4,5];
console.log(numbers);

// Task 3
const result1 = numbers.slice(2);
console.log(result1);

result1.sort((a, b) => b - a);
console.log(result1);

// Task 4

let massive =[
    {
        id: -2
    }, {
        id: 3
    }

]

let onlypositive = massive.filter(obj => obj.id > 0);
console.log(onlypositive);

// Taks 5

let object = new Object();
object[0] = 'new value';

console.log(object);

// Task 6

let num = new Array();

while(true){
    let input = prompt("Please enter the number (enter exit to exit): ");
    if(input != 'exit' && input != " "){
        num.push(+input);
    }else{
        break;
    }
}

let sum = 0;
num.forEach(number => sum += number);
console.log('Sum of all numbers: ', sum);