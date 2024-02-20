// let mainDiv = document.getElementById('main');
// let containerBlock = document.createElement('div');
// mainDiv.appendChild(containerBlock);

// let response = fetch('https://jsonplaceholder.typicode.com/photos', {
//     headers: {
//         "Content-Type": 'application/json'
//     }
// }).then(res => res.json()).then(res => {
//     console.log(res);

//     containerBlock.style.display = "flex";
//     containerBlock.style.flexWrap = "wrap";
//     res.map(item => {
//         let card = document.createElement('div');
//         let img = document.createElement('img');
//         let span = document.createElement('div');
//         card.style.margin = "10px";
//         card.style.width = "180px";
//         card.style.display = "flex";
//         card.style.flexDirection = "column";
//         card.style.alignItems = "center";
//         card.style.borderRadius = "5px";
//         card.style.filter = "drop-shadow(rgba(37, 39, 42, 0.1) 0px 0px 5px)";
//         card.style.backgroundColor = "#ffffff";
//         span.style.width = "150px";
//         img.style.marginTop = "20px";
//         span.style.marginTop = "30px";
//         span.style.marginBottom = "30px";
//         card.appendChild(img);
//         card.appendChild(span);
//         containerBlock.appendChild(card);
//         span.innerHTML = item.title;
//         img.src = item.thumbnailUrl;
//     })
// }).catch(error => console.error(error))

// Create an HTML page to generate random numbers. On the page should have a button, when clicked, a random an integer from 0 to 100 is output to the div.
// let randomnum = document.getElementById("random");

// function createrandomnumber(event){
//     let r = Math.floor(Math.random() * 100);
//     randomnum.innerHTML = r;
// }

// Task 2 Create an html page with a div that occupies the entire width and screen height. When you move the mouse inside this div,
// display the current mouse coordinates. When you click there same, display which button was clicked (right or left). 20:40

let x = document.getElementById('x');
let y = document.getElementById('y');

function change(event){
    x.innerHTML = (event.clientX);
    y.innerHTML = (event.clientY);
}

function mousedown(event){
    console.log("left clicked");
}

// Task 3 Create an HTML page with a button and text. When you click the button, the text should be hidden. 
// When pressed again, the text should be displayed again.

// const bt = document.getElementById("bt");
// let txt = document.getElementById("text");
// let isHidden = false;

// bt.addEventListener('click', () => {
//     if (!isHidden) txt.hidden = true;
//     else txt.hidden = false;
//     isHidden = txt.hidden;
// });

// Task 4 Create an HTML page with tabs. On the left side of the page there are several tabs that you can switch between.
// Each tab has its own content, but at one point time, only the contents of the active tab are displayed.

// let content1 = document.getElementById("content1");
// let content2 = document.getElementById("content2");
// let content3 = document.getElementById("content3");
// content2.hidden = content3.hidden = true;
// let tab1 = document.getElementById("tab1");
// let tab2 = document.getElementById("tab2");
// let tab3 = document.getElementById("tab3");

// tab1.addEventListener('click', () =>{
//     content1.hidden = false;
//     content2.hidden = content3.hidden = true;
// });

// tab2.addEventListener('click', ()=>{
//     content2.hidden = false;
//     content1.hidden = content3.hidden = true;
// });

// tab3.addEventListener('click', ()=>{
//     content3.hidden = false;
//     content1.hidden = content2.hidden = true;
// });

//Task 5 Create an html page with a list of news. Near each news there should be a Delete button,
//  when clicked the corresponding news disappears

// const news = document.getElementsByClassName("new");

// function deletenew(btn){
//     let element = btn.parentNode;
//     let element2 = element.parentNode;
//     element2.removeChild(element)
// }