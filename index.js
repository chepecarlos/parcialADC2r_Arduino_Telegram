process.env["NTBA_FIX_319"] = 1;
const TelegramBot = require('node-telegram-bot-api');
var serialport = require("serialport");

const token = '556353153:AAG7-2yVT3zbdQqx_OfLgJcRv_Yt3SrJQIg'; //token de acceso del bot


//Cambiar el numero o nombre del puerto usb
var miSerial = new serialport("COM3", {
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

    console.log("calculando...");
    bot.sendMessage(chatId, 'Mostrando datos...');
  //  miSerial.write("Mostrar");
  // bot.sendMessage(chatId, ;

});

// IMPORTANTE CAMBIAR ID DE CHAT EN LA VARIABLE PARA PRUEBAS
var Idchat = 534322797;
miSerial.setEncoding('utf8');

miSerial.on('data', function(data) {
  console.log(data);
  bot.sendMessage(Idchat,data);
});
