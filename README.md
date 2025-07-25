# 🎹 Mini Tastiera Elettronica con Arduino Uno (Wokwi)

Questo progetto simula una semplice **tastiera musicale a 8 tasti** usando **Arduino Uno** e un **buzzer**, realizzato sulla piattaforma [Wokwi](https://wokwi.com/).

## 🔧 Componenti Utilizzati

- 🧠 Arduino Uno
- 🎵 Buzzer (attivo o passivo)
- 🔘 8 pulsanti
- 📐 Resistenze interne `INPUT_PULLUP` (nessuna esterna richiesta)
- 🧪 Piattaforma di simulazione: [Wokwi](https://wokwi.com/)

---

## ⚙️ Funzionamento

Ogni bottone è associato a una nota musicale. Quando premi un tasto, il buzzer riproduce la frequenza corrispondente. È possibile suonare **una nota per volta**.

| Bottone | Nota | Frequenza (Hz) |
|---------|------|----------------|
| 1       | Do   | 262            |
| 2       | Re   | 294            |
| 3       | Mi   | 330            |
| 4       | Fa   | 349            |
| 5       | Sol  | 392            |
| 6       | La   | 440            |
| 7       | Si   | 494            |
| 8       | Do'  | 523            |

---
