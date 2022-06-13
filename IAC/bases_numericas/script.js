const form = document.forms.conversionForm;

form.addEventListener('submit', (e) =>{
    e.preventDefault();

    const {originalBase, conversionBase, numberInput, convertedNumber} = form;

    console.log(originalBase.value, conversionBase.value, numberInput.value)

    let orBase = 0;
    let cvBase = 0;
    let numeroFinal = 0;

    switch(originalBase.value){
        case 'binary':
            orBase = 2;
            break;
        case 'octal':
            orBase = 8;
            break;
        case 'hex':
            orBase = 16;
            break;
        case 'decimal':
            orBase = 10;
            break;
    }

    switch(conversionBase.value){
        case 'binary':
            cvBase = 2;
            break;
        case 'octal':
            cvBase = 8;
            break;
        case 'hex':
            cvBase = 16;
            break;
        case 'decimal':
            cvBase = 10;
            break;
    }

    if(cvBase === 10){
        convertToDec(numberInput.value, orBase);
    }

    convertedNumber.value = numeroFinal;
})