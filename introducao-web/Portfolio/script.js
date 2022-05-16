function sendEmail(){
    Email.send({
        Host : "smtp.gmail.com",
        Username : "email.portfolio.web@gmail.com",
        Password : "BeRicalves2003",
        To : 'bernardoalves330@gmail.com',
        From : document.getElementById('f-email-input').value,
        Subject : "Portfolio site",
        Body : document.getElementById('f-message-area').value
    }).then(
      message => alert(message)
    );
}