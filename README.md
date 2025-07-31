# 🔐 Authentication System using Keypad and LED (Arduino Project)

This project demonstrates a basic **authentication system** using a **matrix keypad** and **LED** on an Arduino. The system checks if the entered number is correct (i.e., `100`) and responds accordingly.

## 📌 Features
- Input numeric password using a keypad.
- Authenticate when the correct code is entered.
- Turn **LED ON** and display a **success message** if code is correct.
- Turn **LED OFF** and show **failure message** if code is wrong.

## 🧰 Hardware Required
- Arduino Uno / Nano
- 4x4 or 4x3 Keypad
- LED + Resistor
- Breadboard & jumper wires
- (Optional) LCD Display or Serial Monitor

## ⚙️ How It Works
1. User inputs numbers through the keypad.
2. If input == `100`:
   - LED turns ON
   - Message: `Authentication has been Successfully Completed!`
3. Else:
   - LED turns OFF
   - Message: `Authentication was not Successfully Completed!`

## 💡 How to Use
1. Upload the code to your Arduino using the Arduino IDE.
2. Connect the components as per the code pin configuration.
3. Open Serial Monitor or LCD to view messages.
4. Enter the number via the keypad.

## 📁 File
- `authentication.ino` → Main Arduino code for authentication.

## 🚀 Future Improvements
- Add PIN reset option
- Encrypt stored password
- Add buzzer or LCD for better UX

---

**Made with ❤️ using Arduino and C++**
