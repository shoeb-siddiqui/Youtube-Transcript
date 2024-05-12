# tts_script.py
from langdetect import detect
from gtts import gTTS
import os
import sys

def detect_language(text):
    try:
        language = detect(text)
        print(f'Detected language: {language}')
        return language
    except Exception as e:
        print(f'Error detecting language: {e}')
        return None

def read_text(text):
    try:
        language = detect_language(text)
        if language:
            tts = gTTS(text, lang=language)
            tts.save('temp.mp3')
            os.system('start temp.mp3')  # Opens the default media player to play the speech
    except Exception as e:
        print(f'Error reading text: {e}')

if __name__ == '__main__':
    text = sys.argv[1] if len(sys.argv) > 1 else 'Hello, World!'
    read_text(text)
