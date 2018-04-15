const TelegramBot = require('node-telegram-bot-api');

const token = '556353153:AAG7-2yVT3zbdQqx_OfLgJcRv_Yt3SrJQIg'; //token de acceso del bot
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

bot.on('message', (msg) => {
  const chatId = msg.chat.id;
  console.log("El id es " + chatId)
  var respuesta = msg.text;
  if (respuesta == "Mostrar datos") {
    console.log("calculando...");
    bot.sendMessage(chatId, 'Mostrando datos...');
    miSerial.write("Mostrar");
  }
});


miSerial.setEncoding('utf8');

miSerial.on('data', function(data) {
  console.log('Data:', data);
  if (data[0] == 'H') {
    console.log("Boton precionado");
    bot.sendMessage(idChar, "Precionador el boton");
  }
});
