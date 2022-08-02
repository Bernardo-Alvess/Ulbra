// $(document).ready(()=>{
//     const closeModalButton = document.querySelectorAll('[data-close-button]');
//     const overlay = document.getElementById('overlay')
//     const openPokemonModal = document.querySelectorAll('[data-modal-target]');

//     async function openModal(){
//         const id = this.id;
//         const pokemon = await getPokemon(id);
    
//         let pokemonTypes = multipleTypes(pokemon.type)
    
//         const div = 
//         `
//         <div class="myModal" id="modal">
//             <div class="modalHeader">
//                 <div class="title">
//                     ${pokemon.name} | ${pokemonTypes}
//                 </div>
//                 <button class="closeButton" data-close-button>&times;</button>
//             </div>
//             <div class="modalBody">
//                 ${pokemon.sprite}
//             </div>
//         </div>
//         <div id="overlay"></div>
//         `
    
//         $('#modalContainer').innerHTML = div;
    
//     }
// })
