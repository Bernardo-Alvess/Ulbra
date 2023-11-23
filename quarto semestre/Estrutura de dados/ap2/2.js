const x = (n) => {
    if(n <= 10){
        return n * 2
    }else{
        return(x(x(n/3)))
    }
}

console.log(x(27))