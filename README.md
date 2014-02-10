cipher
======

A simple XOR cipher implementation in C. This one uses only human-readable characters in the cipher, so it's easy to share the encrypted message!.

Usage:
<br><br>
To encrypt a message, just feed it to stdin:<br>
$ echo "Hello, Github" | ./cipher 12345<br>
Message: Hello, Github<br>
Key: 12345<br>
Encrypted: yW_XZ=2t]AYGQ<br>
<br>
It's also possible to decrypt the cipher the same way:<br>
$ echo "yW_XZ=2t]AYGQ" | ./cipher 12345<br>
Message: yW_XZ=2t]AYGQ<br>
Key: 12345<br>
Encrypted: Hello, Github

