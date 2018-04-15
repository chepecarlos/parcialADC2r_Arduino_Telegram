const TelegramBot = require('node-telegram-bot-api');

const token = '';
var idChar = ;

var serialport = require("serialport");
//Cambiar el numero o nombre del puerto usb
var miSerial = new serialport("/dev/ttyUSB0", {
  baudRate: 9600,
  autoOpen: true
});

const bot = new TelegramBot(token, {
  polling: true,
});
