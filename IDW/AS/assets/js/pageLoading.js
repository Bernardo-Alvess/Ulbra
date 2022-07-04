$(document).ready(() => {
    $('#mainContent').load('assets/pages/home.html');
    $('#home').addClass('disabled');
})

$('#home').click(() =>{
    removeDisabledClass();
    $('#mainContent').load('assets/pages/home.html');
    $('#home').addClass('disabled');
})

$('#about').click(() =>{
    removeDisabledClass();
    $('#mainContent').load('assets/pages/about.html');
    $('#about').addClass('disabled');
})

$('#contact').click(() =>{
    removeDisabledClass();
    $('#mainContent').load('assets/pages/contact.html');
    $('#contact').addClass('disabled');
})

$('#pokemonGames').click(() =>{
    removeDisabledClass();
    $('#mainContent').load('assets/pages/pokemon_games.html');
    $('#pokemonGames').addClass('disabled');
})

const removeDisabledClass = () => {
    $('#home').removeClass('disabled');
    $('#about').removeClass('disabled');
    $('#contact').removeClass('disabled');
    $('#pokemonGames').removeClass('disabled');
}