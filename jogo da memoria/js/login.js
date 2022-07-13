const input = document.querySelector('.login-input ');
const button = document.querySelector('.login_button');
const form = document.querySelector('.login-form')
 
const validateInput = ({ target }) => {

    if(target.value.length > 2){

        button.removeAttribute('disabled'); // Habilitou o botao

        return;
    } 
        button.setAttribute('disabled', ' '); //desabilitou o botao caso nao passe no if usando o return
        
    }

const handleSubmit = (event) => {
    event.preventDefault(); // Mudar comportamento do formulario padrao
    
    console.log(input.value)

}

input.addEventListener('input', validateInput);
form.addEventListener('submit', handleSubmit);

