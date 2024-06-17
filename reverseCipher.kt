/* Original code:
# Reverse Cipher
# https://www.nostarch.com/crackingcodes/ (BSD Licensed)

message = 'Three can keep a secret, if two of them are dead.'
translated = ''

i = len(message) - 1
while i >= 0:
    translated = translated + message[i]
    i = i - 1

print(translated)
*/


// My version using Kotlin
fun main() {
    val message = "Three can keep a secret, if two of them are dead."
    var translated: Array<Char?> = arrayOfNulls(message.length)
    var t = (message.length - 1)

    for (c in message) {
        translated[t] = c
        --t
    }

    for (c in translated) {
        print(c)
    }

    println()
}
