// function sendEmail(){
//     Email.send({
//         Host : "smtp.gmail.com",
//         Username : "email.portfolio.web@gmail.com",
//         Password : "BeRicalves2003",
//         To : 'bernardoalves330@gmail.com',
//         From : document.getElementById('f-email-input').value,
//         Subject : "Portfolio site",
//         Body : document.getElementById('f-message-area').value
//     }).then(
//       message => alert(message)
//     );
// }

var switchLangButton = document.getElementById('switch-lang');
var userLang = navigator.language || navigator.userLanguage; 
var switchLangButton = document.getElementById('switch-lang');
let ptBr = document.querySelector('.pt-Br');


function switchLanguage(){
  switch (userLang) {
    case 'en-US':
        ptBr.classList.add('hide');
      break;
    case 'pt-BR':
        ptBr.classList.add('show');
      break;
  }
}

switchLangButton.addEventListener('click', switchLanguage);