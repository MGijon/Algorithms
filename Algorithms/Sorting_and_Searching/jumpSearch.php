<?php
// Jump Search. O(sqrt(n)).
function jumpSearch($arr, $x, $n){
	// Function to perform Jump Search
	// arr: 1-Dimensonal array
	// x: value to be found
	// n: length of the array

	$step = sqrt($n);

	$prev = 0;
	// Looking for the block that contains the value
	while($arr[floor(min($step, $n) - 1)] < x){
		$prev = floor($step);
		$step += floor(sqrt($n));
		if ($prev >= $n){
			return -1;
		}
	}

	// Linear Search on that block
	while($arr[$prev] < $x){
		$prev++;

		if($prev == min($step, $n)){
			return -1;
		}
	}

	// The element is found
	if ($arr[$prev] == $x){
		return $prev;
	}

	return -1;
}


$arr = array(0, 3, 4, 6, 7, 10, 12, 34, 54);
$x = 10;
$n = sizeof($arr) / sizeof($arr[0]);

$index = jumpSearch($arr, $x, $n);

if($index != -1){
	echo "Number ".$x." is at index ".$index;
} else {
	echo "Number ".$x." has not been found.";
}

return 0;
?>

