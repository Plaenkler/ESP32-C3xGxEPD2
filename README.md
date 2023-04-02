# 🖵 ESP32-C3 x GxEPD2

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Support me](https://img.shields.io/badge/Support%20me%20%E2%98%95-orange.svg)](https://www.buymeacoffee.com/Plaenkler)

ESP32-C3xGxEPD2 is a small experiment how (fast) a display can be fed with image data by an ESP32-C3 and the library GxEPD2.

> The experiment only considers the execution time of the program part which is responsible for the display logic.

<table style="border:none;">
  <tr>
    <td><img src="https://user-images.githubusercontent.com/60503970/228088884-0e24e25c-c46f-4d9d-a664-0f17a8f3f6a4.png"/></td>
    <td><img src="https://user-images.githubusercontent.com/60503970/228318840-4d86da10-7927-4081-b625-8218398c39a4.JPEG"/></td>
  </tr>
</table>

## 🎯 Project goals

- [x] Write bitmap to display
- [x] Minimize source code
- [ ] Minimize time to update ∞

## Results
 
The program needs **7397 milliseconds** to draw the bitmap.
