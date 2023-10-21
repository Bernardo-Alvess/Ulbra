function cadastrarRegra(){
    let children = containerRegras.children
    let divArr = Array.prototype.slice.call(children)
    let str = ''
    console.log(divArr)
    for(let i = 0; i < divArr.length; i++){
        let children = divArr[i].children
        let arr = Array.prototype.slice.call(children)
        //console.log(arr)
        for(let j = 0; j < arr.length; j++){
            if(arr[j].className == "variavel"){
                str += arr[j].value
            }
            else if(arr[j].className == "operador"){
                str += arr[j].value
            }else if(arr[j].className == "resultado"){
                str += arr[j].value
            }
        }

        console.log(str)

    }
}