let canvas = document.getElementById('canvas');
let ctx = canvas.getContext('2d');

// const radii = document.getElementById('rValue')
// const diam = document.getElementById('dValue')
 
// let R = 180;
// let teta = 0;
// let timer;
 
// function spiro() {
//     let r = radii.value;
//     let d = diam.value;
//     console.log('d', d)
//     let x = (R - r) * Math.cos(teta) + d * Math.cos(((R - r) * teta) / r);
//     let y = (R - r) * Math.sin(teta) - d * Math.sin(((R - r) * teta) / r);
 
//     teta += 0.02

//     ctx.fillStyle = rgbToHex(Math.round(Math.random() * 2550),Math.round(Math.random() * 2550), Math.round(Math.random() * 2550));
//     ctx.fillRect(200 + x, 200 + y, 5, 5)
//     ctx.stroke();
    
//     timer = setTimeout(spiro, 50)
 
// }
 
// function rgbToHex(red, green, blue) {
//     // Convert each RGB component to hexadecimal and concatenate them
//     const hexRed = red.toString(16).padStart(2, '0');
//     const hexGreen = green.toString(16).padStart(2, '0');
//     const hexBlue = blue.toString(16).padStart(2, '0');

//     // Combine the hexadecimal values
//     const hexCode = `#${hexRed}${hexGreen}${hexBlue}`;

//     return hexCode;
// }

ctx.clearRect(0, 0, canvas.width, canvas.height);

ctx.beginPath();

let dec = document.getElementById('rValue');
let inc = document.getElementById('dValue');
let btn = document.getElementById('btn');

btn.addEventListener('click', () =>{
    const x = 200;
    const y = 150;
    const width = dec.value;
    const height = inc.value;
    const curveX = 20;
    
    ctx.moveTo(x, y - height / 2);
    ctx.quadraticCurveTo(x - curveX - 10, y - height, x - width / 2, y - height / 2);
    ctx.lineTo(x, y + height / 2, x + width / 2, y - height);
    ctx.lineTo(x + width / 2, y - height / 2, x + width / 2, y - height / 2);
    ctx.quadraticCurveTo(x + curveX, y - height, x - width / 50, y - height / 2);
    
    ctx.fillStyle = 'red';
    ctx.fill();

});


