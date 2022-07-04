const express = require("express");
const app = express();
const cors = require("cors");

app.use(express.static('public'));
app.use(cors({
    origin: "*"
}))

app.listen('3000')