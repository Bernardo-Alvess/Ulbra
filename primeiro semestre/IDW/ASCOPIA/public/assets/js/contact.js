const contactForm = document.forms.contact_form ;

const {email, personName, emailBody} = contactForm;

contactForm.addEventListener('submit', (e) =>{
    e.preventDefault();

    if(email.value == '' || personName.value == '' || emailBody.value == ''){
        alert('Fill all spaces')
    }

})
