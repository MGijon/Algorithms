<?php
// Interpolation Search. O(n).
function interpolationSearch($arr, $l, $r, $x){
	// arr: 1-Dimensional array of sorted and unique numbers.
	// l: left indext to start. 
	// r: righ indext to end.
	// x: number to be found.
	if ($l < $r){
		if ( ($x <= $arr[$r]) && ($x >= $arr[$l]) ){
			$p = $l + ( ( ($r - $l) / ($arr[$r] - $arr[$l]) ) * ($x - $arr[$l]) );

			if ($arr[$p] == $x){
				return $p;
			}

			if ($arr[$p] < $x){
				return interpolationSearch($arr, $p + 1, $r, $x);
			}
			if ($arr[$p] > $x){
				return interpolationSearch($arr, $l, $p - 1, $x);
			}
		}
		return -1;
	}
	return -1;
}

$arr = array(1, 3, 5, 6, 7, 8, 9, 11, 15, 16, 17);
$n = sizeof($arr) / sizeof($arr[0]);
$x = 15;

$index = interpolationSearch($arr, 0, $n - 1, $x);

if ($index != 1){
	echo "Number ".$x." is at position ".$index;
} else {
	echo "Number ".$x." has not been found.\n";
}

