<?php
//https://talks.php.net/show/oscon2002/13
for ($loop = -5; $loop < 5; $loop++) {
    if ($loop < 0) {
        echo "-";
    } elseif ($loop > 0) {
        echo "+";
    }
    echo "$loop<BR>\n";
}
while(--$loop) {
    switch($loop % 2) {
      case 0:
        echo "Even<BR>\n";
        break;
      case 1:
        echo "Odd<BR>\n";
        break;
    }
}
do {
    echo "$loop<BR>";
} while (++$loop < 10);
