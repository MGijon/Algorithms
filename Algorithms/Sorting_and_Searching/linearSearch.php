<?php
// Linear Search. O(n).

function linearSearch($arr, $x){
	$n = sizeof($arr);
	for ($i = 0; $i < $n; $i++){
		if ($arr[$i] == $x){
			return $i;
		}
		return -1; // if the value is not found.
	}
}

$arr = array(3, 4, 6, 7, 9, 29, 36);
$x = 9;

$index = linearSearch($arr, $x);

if ($index == -1){
	echo "The element is not present in the array."
}
else{
	echo "The element is present at positon ", $index;
}
	

?>
