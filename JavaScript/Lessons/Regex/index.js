const queryParams = window.location.search; 
console.log('queryParams', queryParams)

const data = new URLSearchParams(queryParams);
 
const email = data.get('email');
const password = data.get('password');
const confirm = data.get('confirm');
const submited = data.get('submited');

const emailerror = document.getElementById('email-error');
const confirmerror = document.getElementById('confirm-error');
const passworderror = document.getElementById('password-error');
emailerror.hidden = confirmerror.hidden = passworderror.hidden = true;

if (submited=="Submit"){
    let templatemail = /^[\w-\.]+@([\w-]+\.)+[\w-]{2,4}$/g;
    let templatepassword = /^[a-zA-Z0-9!@#$%^&*]{6,16}$/;
    
    if (!templatemail.test(email)){
        emailerror.hidden = false;
    } else emailerror.hidden = true;
    
    if (!templatepassword.test(password)){
        passworderror.hidden = false;
    } else passworderror.hidden = true;
    
    if (password != confirm){
        confirmerror.hidden = false;
    } else confirmerror.hidden = true;
}
