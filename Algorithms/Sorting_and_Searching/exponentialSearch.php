<?php
// Binary Search. O(logn). 
function binarySearch($arr, $l, $r, $x){
	// arr: 1-Dimensional array of sorted and unique numbers.
	// l: left index to start looking from.
	// r: right index to end looking.
	// x: numbert to look for.
	if ($r >= $l){
		$m = $l + ($r - $l) / 2;

		if ($arr[$m] == $x){
			return $m;
		}

		if ($arr[$m] > $m){
			return binarySearch($arr, $l, $m - 1, $x);
		}
		if  ($arr[$m] < $m){
			return binarySearch($arr, $m + 1, $r, $x);
		}
	}
	return -1;
}

function exponentialSearch($arr, $n, $x){
	// arr: 1-Dimensional array of sorte and unique numbers.
	// n: length of arr.
	// x: number to be found.
	if ($arr[0] == $x){
		return 0;
	}

	$i = 0;
	while ( ($i < $n) and ($arr[$i] <= $x) ){
		$i = $i * 2;
	}

	return binarySearch($arr, $i / 2, min($i, $n - 1), $x);
}

$arr = array( 1, 2, 4, 5, 6, 7, 8, 9, 12, 15, 16, 17, 27, 28 );
$n = count($arr);
$x = 12;

$index = exponentialSearch($arr, $n, $x);

if ($index != -1){
	echo "Element is present at index ", $index;
} else {
	echo "The element has not been found.\n";
}

?>
