const queryParams = window.location.search; 
console.log('queryParams', queryParams)

const data = new URLSearchParams(queryParams);
 
const birthyear = data.get('birthyear');
const firstname = data.get('firstname');
const lastname = data.get('lastname');
const saved = data.get('submited');
const gender = data.get('gender');
const phone = data.get('phone');
const skype = data.get('skype');

// const confirmerror = document.getElementById('confirm-error');
// const passworderror = document.getElementById('password-error');
// emailerror.hidden = confirmerror.hidden = passworderror.hidden = true;

let infos = document.getElementById('infos');
let registration = document.getElementById('registration');


if (saved=="Submit"){
    registration.hidden = true;
    // let templatemail = /^[\w-\.]+@([\w-]+\.)+[\w-]{2,4}$/g;
    // let templatepassword = /^[a-zA-Z0-9!@#$%^&*]{6,16}$/;
    
    // if (!templatemail.test(email)){
    //     emailerror.hidden = false;
    // } else emailerror.hidden = true;
    
    // if (!templatepassword.test(password)){
    //     passworderror.hidden = false;
    // } else passworderror.hidden = true;
    
    // if (password != confirm){
    //     confirmerror.hidden = false;
    // } else confirmerror.hidden = true;
    console.log("salam");
    for(const key of data) {
        console.log('key', key);
        localStorage.setItem(key[0], key[1]);
        infos.innerHTML += `${key[0]} : ${key[1]} <br/>`; 
    }


}
