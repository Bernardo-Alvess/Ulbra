function sendEmail(){
    Email.send({
        Host : "smtp.gmail.com",
        Username : "marquinhofone@gmail.com",
        Password : "password",
        To : 'bernardoalves330@gmail.com',
        From : document.getElementById('f-email-input').value,
        Subject : "Portfolio site",
        Body : document.getElementById('f-message-area').value
    }).then(
      message => alert(message)
    );
}