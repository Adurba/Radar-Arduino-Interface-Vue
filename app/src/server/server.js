
const express = require('express')
const http = require('http')

const app = express()
const server = http.createServer(app)
const port = 3003


server.listen(port, function () {
  console.log(`El servidor esta arrancado en el puerto ${port}`)
})

app.get('/', (req, res) => {
  res.header('Access-Control-Allow-Origin', '*')
  res.send(tempA)
})


const SerialPort = require('serialport')
const Readline = SerialPort.parsers.Readline

 const mySerial = new SerialPort('/dev/ttyUSB0', {

  baudRate: 9600
})
mySerial.on('open', function () {
  console.log('Puerto serial abierto')
})
var tempA
var tempD

const parser = mySerial.pipe(new Readline({ delimiter: '\r\n' }))

parser.on('data', function (data) {
  tempA = data.split(',')[0]
  tempD = data.split(',')[1]
  console.log('Angule:' + tempA)
  console.log('Distance:' + tempD)
})

