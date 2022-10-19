//Data from: https://pokeapi.co

$(document).ready(function () {
    let numberOfPokemons = 11;
    createPokemonElement(1, numberOfPokemons);

    $('#showMore').click(() =>{
        createPokemonElement(numberOfPokemons, numberOfPokemons + 100);
        numberOfPokemons += 100;
    })
})


//Fetching data from the PokeAPI
async function getPokemon(id) {
    //Chamando a PokéAPI
    const apiURL = `https://pokeapi.co/api/v2/pokemon/${id}`;
    const response = await fetch(apiURL);
    const pokemon = await response.json()
    const movesets = pokemon.abilities;

    //Definindo os dados do JSON dentro de constantes
    const name = pokemon.name;
    const hp = pokemon.stats[0].base_stat;
    const attack = pokemon.stats[1].base_stat;
    const defense = pokemon.stats[2].base_stat;
    const specialAttack = pokemon.stats[3].base_stat;
    const specialDefense = pokemon.stats[4].base_stat;
    const speed = pokemon.stats[5].base_stat;
    const sprite = pokemon.sprites.front_default;
    const weight = pokemon.weight;
    const type = [];

    //Para poder pegar todos os tipos dos pokemons
    for (let i = 0; i < pokemon.types.length; i++) {
        type.push(pokemon.types[i].type.name);
    }

    return { name, hp, attack, defense, specialAttack, specialDefense, speed, sprite, type, weight, movesets}
}

async function getMoveInfo(moveJson){
    let moves = [];
    for(let i = 0; i < moveJson.length; i++){
        const response = await fetch(moveJson[i].ability.url)
        const json = await response.json();
        let moveInfo = '';
        for(let i = 0; i < json.effect_entries.length; i++){
            if(json.effect_entries[i].language.name === 'en'){
                moveInfo = json.effect_entries[i].effect;
            }
        }
        
        let moveset = [moveJson[i].ability.name, moveInfo];
        moves.push(moveset);
    }
    return moves;
}

//Manipulating DOM to show pokemons contents
async function createPokemonElement(firstPokemon, lastPokemon) {

    for (firstPokemon; firstPokemon < lastPokemon; firstPokemon++) {
        const pokemon = await getPokemon(firstPokemon);

        let pokemonTypes = multipleTypes(pokemon.type);

        const pokemonDiv =

            `
                <div class="pokemon-card" id="${pokemon.name}">
                    <img src="${pokemon.sprite}" alt="${pokemon.name}" class="pokemon-card-img">
                    <div class="pokemon-card-text">
                    <div>
                        <h1 class="pokemon-card-title">${pokemon.name}</h1>
                        <p class="pokemon-card-type">${pokemonTypes}</p>
                    </div>
                    <div class="pokemon-stats">
                        <p>HP: ${pokemon.hp}</p>
                        <p>ATK: ${pokemon.attack}</p>
                        <p>DF: ${pokemon.defense}</p>
                    </div>
                </div>
            `      
        document.querySelector('.pokemonContent').innerHTML += pokemonDiv;
    }

    getDivs();
}

//Making strings for pokemons with multiple types
function multipleTypes(types){
    let pokemonTypes = '';

    if (types.length >= 1) {
        pokemonTypes += types.join(" | ");
    } else {
        pokemonTypes = `${types}`
    }
    
    return pokemonTypes;
}

//Functions for populating and opening modals for specific pokemons
function getDivs(){
    const pokemonDivs = document.getElementsByClassName('pokemon-card');

    for(let i = 0; i < pokemonDivs.length; i++){
        pokemonDivs[i].addEventListener('click', openModal);
    }
}

async function openModal(){
    const id = this.id;
    const pokemon = await getPokemon(id);
    const moveset = await getMoveInfo(pokemon.movesets);
    const modalContainer = document.getElementById('modalContainer')

    let pokemonTypes = multipleTypes(pokemon.type)
    const div = 
    `
    <div class="myModal" id="modal">
        <div class="modalHeader">
            <div class="title">
                <h1 class="pokemonName">${pokemon.name}</h1>
                <p>${pokemonTypes}</p>
            </div>
            <button class="closeButton" id="closeButton">&times;</button>
        </div>
        <div class="modalBody">
            <img src="${pokemon.sprite}" alt="${pokemon.name}">
        </div>
        <div class="modalStats">
            <h2>Basic moves</h2>
            <div>
                <h4>${moveset[0][0]}</h4>
                <p>
                    ${moveset[0][1]}
                </p>
            </div>
            <div>
                <h4>${moveset[1][0]}</h4>
                <p>
                    ${moveset[1][1]}
                </p>
            </div>
        </div>
    </div>
    <div id="overlay"></div>
    `
    modalContainer.innerHTML = div;

    const modal = document.getElementById('modal')
    const overlay = document.getElementById('overlay');

    modal.classList.add('active')
    overlay.classList.add('active')

    closeModal();
}

function closeModal(){

    const closeButton = document.getElementById('closeButton');
    const modal = document.getElementById('modal')
    const overlay = document.getElementById('overlay');

    closeButton.addEventListener('click', removeModalActive)
    document.addEventListener('keydown', (e) =>{
        if(e.key == 'Escape'){
            removeModalActive();
        }
    });
    overlay.addEventListener('click', removeModalActive);
}

function removeModalActive(){
    modal.classList.remove('active');
    overlay.classList.remove('active');
}