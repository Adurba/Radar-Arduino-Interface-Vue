const express = require('express')
const app = express()
const server = require('http').Server(app)
const io = require('socket.io').listen(server)

const SerialPort = require('serialport')
const Readline = SerialPort.parsers.Readline
const parser = new Readline()

const mySerial = new SerialPort('/dev/ttyACM2', {
  baudRate: 9600
})

mySerial.on('open', function () {
  console.log('Puerto serial abierto')
})
mySerial.on('data', function (data) {
  console.log(data.toString())
})

server.listen(8000, function () {
  console.log('El servidor esta arrancado')
})
