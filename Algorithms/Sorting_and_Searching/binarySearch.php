<?php 
// Binary Search. Theta(logn).
function binarySearch($arr, $l, $r, $x){
	if($r >= $l){
		$middle = ceil($l + ($r - $l) / 2);

		if($arr[$middle] == $x){
			return floor($middle);
		}
		
		if ($arr[$middle] > $x){
			return binarySearch($arr, $l, $middle - 1, $x);
		}

		if ($arr[$middle] < $x){
			return binarySearch($arr, $middle + 1, $l, $x);
		}
	}
	return -1;
	
}

$arr = array(3, 4, 5, 7, 8, 12, 15, 26, 47);
$n = count($arr);
$x = 12;

$index = binarySearch($arr, 0, $n - 1, $x);

if($index != -1){
	echo "The element is present at index ", $index;
}
else{
	echo "The element has not been found";
}





