const express = require("express")
const app = express()
const router = express.Router()
const port = 3000;
const fs = require("fs")
const path = require("path")

app.use(express.json({extended: true}))
app.use(express.static('public'))

const readFile = (file) => {
    const content = fs.readFileSync(`data/${file}`, 'utf-8')
    return JSON.parse(content)
}

//rotas get
router.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'public/index.html'))
    //res.send("Bem Vindo")
})

router.get('/vars', (req, res) => {
    res.sendFile(path.join(__dirname, 'public/form_variaveis.html'))
})

router.get('/vars/:nome', async (req, res) => {
    const file = readFile('variaveis.json')
    const nome = req.params.nome
    const response = file.find(obj => obj.varName === nome)
    res.send(response)
})


router.get('/variaveis', (req, res) => {
    const content = readFile('variaveis.json')
    res.send(content)
})

router.get('/regras', (req, res) => {
    res.sendFile(path.join(__dirname, 'public/regras.html'))
})

//rotas post
router.post('/vars', (req, res) => {
    const {id, varName, values, type} = req.body

    const currFile = readFile('variaveis.json')
    currFile.push({id, varName, values, type})
    fs.writeFileSync('data/variaveis.json', JSON.stringify(currFile), 'utf-8')

    res.send(currFile);
})

router.post('/', (req, res) => {
    res.send("Bem Vindo")
})

//rotas put
router.put('/', (req, res) => {
    res.send("Bem Vindo")
})

//rotas delete
router.delete('/', (req, res) => {
    res.send("Bem Vindo")
})

app.use(router)

app.listen(port, () => {
    console.log(`Listening on ${port}`)
})