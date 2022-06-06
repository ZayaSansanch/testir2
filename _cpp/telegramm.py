from tracemalloc import stop
import telebot
import sys

bot = telebot.TeleBot('5312338280:AAFHd0C2ns4J9bQda2kdQz84-8r5onDpNN0')

@bot.message_handler(content_types=["text"])
def handle_text(message):
    bot.send_message(message.chat.id, str(sys.arg[1]))

bot.polling(none_stop=True, interval=0)