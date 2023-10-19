const express = require("express")
const server = express()
const router = express.Router()
const port = 3000;
const fs = require("fs")

server.use(express.json({extended: true}))

router.get('/', (req, res) => {
    res.send("Bem Vindo")
})

router.post('/', (req, res) => {
    res.send("Bem Vindo")
})

router.put('/', (req, res) => {
    res.send("Bem Vindo")
})

router.delete('/', (req, res) => {
    res.send("Bem Vindo")
})

server.use(router)

server.listen(port, () => {
    console.log(`Listening on ${port}`)
})